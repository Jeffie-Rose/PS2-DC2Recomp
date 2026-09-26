#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NoteOn__8sndTrackFii
// Address: 0x18c340 - 0x18c3bc
void NoteOn__8sndTrackFii_0x18c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NoteOn__8sndTrackFii_0x18c340");
#endif

    switch (ctx->pc) {
        case 0x18c364u: goto label_18c364;
        case 0x18c37cu: goto label_18c37c;
        default: break;
    }

    ctx->pc = 0x18c340u;

    // 0x18c340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c354: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18c354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c358: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x18c358u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18c35c: 0xc0630a4  jal         func_18C290
    ctx->pc = 0x18C35Cu;
    SET_GPR_U32(ctx, 31, 0x18C364u);
    ctx->pc = 0x18C360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C35Cu;
            // 0x18c360: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C290u;
    if (runtime->hasFunction(0x18C290u)) {
        auto targetFn = runtime->lookupFunction(0x18C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C364u; }
        if (ctx->pc != 0x18C364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaerchVoice__8sndTrackFii_0x18c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C364u; }
        if (ctx->pc != 0x18C364u) { return; }
    }
    ctx->pc = 0x18C364u;
label_18c364:
    // 0x18c364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C364u;
    {
        const bool branch_taken_0x18c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C364u;
            // 0x18c368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c364) {
            ctx->pc = 0x18C374u;
            goto label_18c374;
        }
    }
    ctx->pc = 0x18C36Cu;
    // 0x18c36c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18C36Cu;
    {
        const bool branch_taken_0x18c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C36Cu;
            // 0x18c370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c36c) {
            ctx->pc = 0x18C3A8u;
            goto label_18c3a8;
        }
    }
    ctx->pc = 0x18C374u;
label_18c374:
    // 0x18c374: 0xc0630bc  jal         func_18C2F0
    ctx->pc = 0x18C374u;
    SET_GPR_U32(ctx, 31, 0x18C37Cu);
    ctx->pc = 0x18C2F0u;
    if (runtime->hasFunction(0x18C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x18C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C37Cu; }
        if (ctx->pc != 0x18C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEmptyVoice__8sndTrackFv_0x18c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C37Cu; }
        if (ctx->pc != 0x18C37Cu) { return; }
    }
    ctx->pc = 0x18C37Cu;
label_18c37c:
    // 0x18c37c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C37Cu;
    {
        const bool branch_taken_0x18c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C37Cu;
            // 0x18c380: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c37c) {
            ctx->pc = 0x18C38Cu;
            goto label_18c38c;
        }
    }
    ctx->pc = 0x18C384u;
    // 0x18c384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C384u;
    {
        const bool branch_taken_0x18c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C384u;
            // 0x18c388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c384) {
            ctx->pc = 0x18C3A8u;
            goto label_18c3a8;
        }
    }
    ctx->pc = 0x18C38Cu;
label_18c38c:
    // 0x18c38c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x18c38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18c390: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x18c390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x18c394: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18c398: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x18c398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18c39c: 0x82230006  lb          $v1, 0x6($s1)
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x18c3a0: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x18c3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18c3a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18c3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c3a8:
    // 0x18c3a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18C3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3B4u;
            // 0x18c3b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C3BCu;
}
