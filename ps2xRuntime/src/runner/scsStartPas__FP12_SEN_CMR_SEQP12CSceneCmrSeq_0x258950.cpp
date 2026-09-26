#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsStartPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258950 - 0x2589f0
void scsStartPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsStartPas__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258950");
#endif

    switch (ctx->pc) {
        case 0x258970u: goto label_258970;
        case 0x258978u: goto label_258978;
        case 0x258990u: goto label_258990;
        case 0x2589a0u: goto label_2589a0;
        case 0x2589b0u: goto label_2589b0;
        case 0x2589bcu: goto label_2589bc;
        case 0x2589c8u: goto label_2589c8;
        case 0x2589d0u: goto label_2589d0;
        default: break;
    }

    ctx->pc = 0x258950u;

    // 0x258950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25895c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x25895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x258960: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258960u;
    {
        const bool branch_taken_0x258960 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x258964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258960u;
            // 0x258964: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258960) {
            ctx->pc = 0x258980u;
            goto label_258980;
        }
    }
    ctx->pc = 0x258968u;
    // 0x258968: 0xc0959e4  jal         func_256790
    ctx->pc = 0x258968u;
    SET_GPR_U32(ctx, 31, 0x258970u);
    ctx->pc = 0x25896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258968u;
            // 0x25896c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256790u;
    if (runtime->hasFunction(0x256790u)) {
        auto targetFn = runtime->lookupFunction(0x256790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258970u; }
        if (ctx->pc != 0x258970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Setup__10CCameraPasFv_0x256790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258970u; }
        if (ctx->pc != 0x258970u) { return; }
    }
    ctx->pc = 0x258970u;
label_258970:
    // 0x258970: 0xc095a8c  jal         func_256A30
    ctx->pc = 0x258970u;
    SET_GPR_U32(ctx, 31, 0x258978u);
    ctx->pc = 0x258974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258970u;
            // 0x258974: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256A30u;
    if (runtime->hasFunction(0x256A30u)) {
        auto targetFn = runtime->lookupFunction(0x256A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258978u; }
        if (ctx->pc != 0x258978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__10CCameraPasFv_0x256a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258978u; }
        if (ctx->pc != 0x258978u) { return; }
    }
    ctx->pc = 0x258978u;
label_258978:
    // 0x258978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25897c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x25897cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_258980:
    // 0x258980: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x258980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x258984: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258988: 0xc095a90  jal         func_256A40
    ctx->pc = 0x258988u;
    SET_GPR_U32(ctx, 31, 0x258990u);
    ctx->pc = 0x25898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258988u;
            // 0x25898c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256A40u;
    if (runtime->hasFunction(0x256A40u)) {
        auto targetFn = runtime->lookupFunction(0x256A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258990u; }
        if (ctx->pc != 0x258990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__10CCameraPasFPfPf_0x256a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258990u; }
        if (ctx->pc != 0x258990u) { return; }
    }
    ctx->pc = 0x258990u;
label_258990:
    // 0x258990: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x258990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x258994: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x258994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258998: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x258998u;
    SET_GPR_U32(ctx, 31, 0x2589A0u);
    ctx->pc = 0x25899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258998u;
            // 0x25899c: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589A0u; }
        if (ctx->pc != 0x2589A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589A0u; }
        if (ctx->pc != 0x2589A0u) { return; }
    }
    ctx->pc = 0x2589A0u;
label_2589a0:
    // 0x2589a0: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x2589a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2589a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2589a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2589a8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2589A8u;
    SET_GPR_U32(ctx, 31, 0x2589B0u);
    ctx->pc = 0x2589ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589A8u;
            // 0x2589ac: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589B0u; }
        if (ctx->pc != 0x2589B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589B0u; }
        if (ctx->pc != 0x2589B0u) { return; }
    }
    ctx->pc = 0x2589B0u;
label_2589b0:
    // 0x2589b0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2589b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2589b4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2589B4u;
    SET_GPR_U32(ctx, 31, 0x2589BCu);
    ctx->pc = 0x2589B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589B4u;
            // 0x2589b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589BCu; }
        if (ctx->pc != 0x2589BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589BCu; }
        if (ctx->pc != 0x2589BCu) { return; }
    }
    ctx->pc = 0x2589BCu;
label_2589bc:
    // 0x2589bc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2589bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2589c0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2589C0u;
    SET_GPR_U32(ctx, 31, 0x2589C8u);
    ctx->pc = 0x2589C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589C0u;
            // 0x2589c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589C8u; }
        if (ctx->pc != 0x2589C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589C8u; }
        if (ctx->pc != 0x2589C8u) { return; }
    }
    ctx->pc = 0x2589C8u;
label_2589c8:
    // 0x2589c8: 0xc095abc  jal         func_256AF0
    ctx->pc = 0x2589C8u;
    SET_GPR_U32(ctx, 31, 0x2589D0u);
    ctx->pc = 0x2589CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589C8u;
            // 0x2589cc: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256AF0u;
    if (runtime->hasFunction(0x256AF0u)) {
        auto targetFn = runtime->lookupFunction(0x256AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589D0u; }
        if (ctx->pc != 0x2589D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnd__10CCameraPasFv_0x256af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589D0u; }
        if (ctx->pc != 0x2589D0u) { return; }
    }
    ctx->pc = 0x2589D0u;
label_2589d0:
    // 0x2589d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2589D0u;
    {
        const bool branch_taken_0x2589d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2589D0u;
            // 0x2589d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589d0) {
            ctx->pc = 0x2589E0u;
            goto label_2589e0;
        }
    }
    ctx->pc = 0x2589D8u;
    // 0x2589d8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2589d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2589dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2589dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2589e0:
    // 0x2589e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2589e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2589e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2589e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2589e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2589E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2589ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2589E8u;
            // 0x2589ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2589F0u;
}
