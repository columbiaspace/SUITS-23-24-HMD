using Unity.Collections;
using UnityEngine.SubsystemsImplementation;

namespace UnityEngine.XR.Hands.ProviderImplementation
{
    /// <summary>
    /// Methods to implement by the implementing provider for an <see cref="XRHandSubsystem"/>.
    /// </summary>
    public abstract class XRHandSubsystemProvider
        : SubsystemProvider<XRHandSubsystem>
    {
        /// <summary>
        /// Gets the layout of hand joints for this provider, by having the
        /// provider mark each index corresponding to a <see cref="XRHandJointID"/>
        /// get marked as <see langword="true"/> if the provider attempts to track
        /// that joint.
        /// </summary>
        /// <remarks>
        /// Called once on creation so that before the subsystem is even started,
        /// so the user can immediately create a valid hierarchical structure as
        /// soon as they get a reference to the subsystem without even needing to
        /// start it.
        /// </remarks>
        /// <param name="handJointsInLayout">
        /// Each index corresponds to a <see cref="XRHandJointID"/>. For each
        /// joint that the provider will attempt to track, mark that spot as
        /// <see langword="true"/> by calling <c>.ToIndex()</c> on that ID.
        /// </param>
        public abstract void GetHandLayout(NativeArray<bool> handJointsInLayout);

        /// <summary>
        /// Attempts to retrieve current hand-tracking data from the provider.
        /// </summary>
        /// <param name="updateType">
        /// Informs the provider which kind of timing the update is being
        /// requested under.
        /// </param>
        /// <param name="leftHandRootPose">
        /// Update this and include <c>XRHandSubsystem.UpdateSuccesFlags.LeftHandRootPose</c>
        /// in the return value to update the left hand's root pose.
        /// </param>
        /// <param name="leftHandJoints">
        /// Array of hand joints to fill out for the left hand. These are
        /// initialized with a copy of the current joint data for the left hand,
        /// so if the last known tracking data for a particular joint is still
        /// fine, you don't need to fill out that data again. If you update
        /// these, include <c>XRHandSubsystem.UpdateSuccesFlags.LeftHandJoints</c>
        /// in the return value to have the changes reflected in the subsystem.
        /// </param>
        /// <param name="rightHandRootPose">
        /// Update this and include <c>XRHandSubsystem.UpdateSuccesFlags.RightHandRootPose</c>
        /// in the return value to update the right hand's root pose.
        /// </param>
        /// <param name="rightHandJoints">
        /// Array of hand joints to fill out for the right hand. These are
        /// initialized with a copy of the current joint data for the right hand,
        /// so if the last known tracking data for a particular joint is still
        /// fine, you don't need to fill out that data again. If you update
        /// these, include <c>XRHandSubsystem.UpdateSuccesFlags.RightHandJoints</c>
        /// in the return value to have the changes reflected in the subsystem.
        /// </param>
        /// <returns>
        /// Returns <see cref="XRHandSubsystem.UpdateSuccessFlags"/> to describe which tracking
        /// data was successfully updated.
        /// </returns>
        public abstract XRHandSubsystem.UpdateSuccessFlags TryUpdateHands(
            XRHandSubsystem.UpdateType updateType,
            ref Pose leftHandRootPose,
            NativeArray<XRHandJoint> leftHandJoints,
            ref Pose rightHandRootPose,
            NativeArray<XRHandJoint> rightHandJoints);
    }
}
