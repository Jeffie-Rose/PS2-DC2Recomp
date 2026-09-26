#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeWeight__18mgCVisualMotionMDTFPP8mgCFramePA4_A4_fi
// Address: 0x289880 - 0x289934
void ChangeWeight__18mgCVisualMotionMDTFPP8mgCFramePA4_A4_fi_0x289880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeWeight__18mgCVisualMotionMDTFPP8mgCFramePA4_A4_fi_0x289880");
#endif

    switch (ctx->pc) {
        case 0x2898bcu: goto label_2898bc;
        case 0x2898ecu: goto label_2898ec;
        default: break;
    }

    ctx->pc = 0x289880u;

    // 0x289880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x289880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x289884: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x289884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x289888: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x289888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28988c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x289890: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x289890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289894: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x289894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x289898: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x289898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28989c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2898a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2898a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2898a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2898a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2898a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2898acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2898b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2898b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2898b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2898b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2898b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2898bc:
    // 0x2898bc: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x2898bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2898c0: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x2898c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2898c4: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2898c8: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2898C8u;
    {
        const bool branch_taken_0x2898c8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2898c8) {
            ctx->pc = 0x289900u;
            goto label_289900;
        }
    }
    ctx->pc = 0x2898D0u;
    // 0x2898d0: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x2898d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2898d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2898d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2898d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2898d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2898dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2898dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2898e0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x2898e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2898e4: 0xc04ddd4  jal         func_137750
    ctx->pc = 0x2898E4u;
    SET_GPR_U32(ctx, 31, 0x2898ECu);
    ctx->pc = 0x2898E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2898E4u;
            // 0x2898e8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2898ECu; }
        if (ctx->pc != 0x2898ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2898ECu; }
        if (ctx->pc != 0x2898ECu) { return; }
    }
    ctx->pc = 0x2898ECu;
label_2898ec:
    // 0x2898ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2898ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2898f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2898f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2898f4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x2898f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2898f8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2898F8u;
    {
        const bool branch_taken_0x2898f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2898FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898F8u;
            // 0x2898fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898f8) {
            ctx->pc = 0x2898BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2898bc;
        }
    }
    ctx->pc = 0x289900u;
label_289900:
    // 0x289900: 0xaed50050  sw          $s5, 0x50($s6)
    ctx->pc = 0x289900u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 80), GPR_U32(ctx, 21));
    // 0x289904: 0xaed40058  sw          $s4, 0x58($s6)
    ctx->pc = 0x289904u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 20));
    // 0x289908: 0xaed30054  sw          $s3, 0x54($s6)
    ctx->pc = 0x289908u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 19));
    // 0x28990c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28990cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x289910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x289914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x289918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28991c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28991cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28992c: 0x3e00008  jr          $ra
    ctx->pc = 0x28992Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28992Cu;
            // 0x289930: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289934u;
}
