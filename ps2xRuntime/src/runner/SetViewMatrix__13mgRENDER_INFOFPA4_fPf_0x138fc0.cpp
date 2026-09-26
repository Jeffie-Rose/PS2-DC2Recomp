#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetViewMatrix__13mgRENDER_INFOFPA4_fPf
// Address: 0x138fc0 - 0x13909c
void SetViewMatrix__13mgRENDER_INFOFPA4_fPf_0x138fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewMatrix__13mgRENDER_INFOFPA4_fPf_0x138fc0");
#endif

    switch (ctx->pc) {
        case 0x138fe4u: goto label_138fe4;
        case 0x138ff8u: goto label_138ff8;
        case 0x139004u: goto label_139004;
        case 0x139024u: goto label_139024;
        case 0x139034u: goto label_139034;
        case 0x139044u: goto label_139044;
        case 0x139054u: goto label_139054;
        case 0x139060u: goto label_139060;
        case 0x139078u: goto label_139078;
        case 0x139088u: goto label_139088;
        default: break;
    }

    ctx->pc = 0x138fc0u;

    // 0x138fc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x138fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x138fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fd8: 0x262403a0  addiu       $a0, $s1, 0x3A0
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 928));
    // 0x138fdc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x138FDCu;
    SET_GPR_U32(ctx, 31, 0x138FE4u);
    ctx->pc = 0x138FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FDCu;
            // 0x138fe0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FE4u; }
        if (ctx->pc != 0x138FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FE4u; }
        if (ctx->pc != 0x138FE4u) { return; }
    }
    ctx->pc = 0x138FE4u;
label_138fe4:
    // 0x138fe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138fe8: 0x262403b0  addiu       $a0, $s1, 0x3B0
    ctx->pc = 0x138fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x138fec: 0xae2203ac  sw          $v0, 0x3AC($s1)
    ctx->pc = 0x138fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 2));
    // 0x138ff0: 0xc041bf0  jal         func_106FC0
    ctx->pc = 0x138FF0u;
    SET_GPR_U32(ctx, 31, 0x138FF8u);
    ctx->pc = 0x138FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FF0u;
            // 0x138ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FF8u; }
        if (ctx->pc != 0x138FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FF8u; }
        if (ctx->pc != 0x138FF8u) { return; }
    }
    ctx->pc = 0x138FF8u;
label_138ff8:
    // 0x138ff8: 0x262403e0  addiu       $a0, $s1, 0x3E0
    ctx->pc = 0x138ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 992));
    // 0x138ffc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x138FFCu;
    SET_GPR_U32(ctx, 31, 0x139004u);
    ctx->pc = 0x139000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FFCu;
            // 0x139000: 0x262503a0  addiu       $a1, $s1, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139004u; }
        if (ctx->pc != 0x139004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139004u; }
        if (ctx->pc != 0x139004u) { return; }
    }
    ctx->pc = 0x139004u;
label_139004:
    // 0x139004: 0xae2003bc  sw          $zero, 0x3BC($s1)
    ctx->pc = 0x139004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 956), GPR_U32(ctx, 0));
    // 0x139008: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13900c: 0xae2003cc  sw          $zero, 0x3CC($s1)
    ctx->pc = 0x13900cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 972), GPR_U32(ctx, 0));
    // 0x139010: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x139010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x139014: 0xae2003dc  sw          $zero, 0x3DC($s1)
    ctx->pc = 0x139014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 988), GPR_U32(ctx, 0));
    // 0x139018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13901c: 0xc041c60  jal         func_107180
    ctx->pc = 0x13901Cu;
    SET_GPR_U32(ctx, 31, 0x139024u);
    ctx->pc = 0x139020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13901Cu;
            // 0x139020: 0xae2203ec  sw          $v0, 0x3EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139024u; }
        if (ctx->pc != 0x139024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139024u; }
        if (ctx->pc != 0x139024u) { return; }
    }
    ctx->pc = 0x139024u;
label_139024:
    // 0x139024: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139028: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x139028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x13902c: 0xc04c094  jal         func_130250
    ctx->pc = 0x13902Cu;
    SET_GPR_U32(ctx, 31, 0x139034u);
    ctx->pc = 0x139030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13902Cu;
            // 0x139030: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139034u; }
        if (ctx->pc != 0x139034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139034u; }
        if (ctx->pc != 0x139034u) { return; }
    }
    ctx->pc = 0x139034u;
label_139034:
    // 0x139034: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x139034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x139038: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x139038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x13903c: 0xc04c094  jal         func_130250
    ctx->pc = 0x13903Cu;
    SET_GPR_U32(ctx, 31, 0x139044u);
    ctx->pc = 0x139040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13903Cu;
            // 0x139040: 0x26260150  addiu       $a2, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139044u; }
        if (ctx->pc != 0x139044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139044u; }
        if (ctx->pc != 0x139044u) { return; }
    }
    ctx->pc = 0x139044u;
label_139044:
    // 0x139044: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x139044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x139048: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x139048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x13904c: 0xc04c094  jal         func_130250
    ctx->pc = 0x13904Cu;
    SET_GPR_U32(ctx, 31, 0x139054u);
    ctx->pc = 0x139050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13904Cu;
            // 0x139050: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139054u; }
        if (ctx->pc != 0x139054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139054u; }
        if (ctx->pc != 0x139054u) { return; }
    }
    ctx->pc = 0x139054u;
label_139054:
    // 0x139054: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139058: 0xc041c60  jal         func_107180
    ctx->pc = 0x139058u;
    SET_GPR_U32(ctx, 31, 0x139060u);
    ctx->pc = 0x13905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139058u;
            // 0x13905c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139060u; }
        if (ctx->pc != 0x139060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139060u; }
        if (ctx->pc != 0x139060u) { return; }
    }
    ctx->pc = 0x139060u;
label_139060:
    // 0x139060: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x139064: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x139064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139068: 0x26260150  addiu       $a2, $s1, 0x150
    ctx->pc = 0x139068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x13906c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x13906cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x139070: 0xc04c094  jal         func_130250
    ctx->pc = 0x139070u;
    SET_GPR_U32(ctx, 31, 0x139078u);
    ctx->pc = 0x139074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139070u;
            // 0x139074: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139078u; }
        if (ctx->pc != 0x139078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139078u; }
        if (ctx->pc != 0x139078u) { return; }
    }
    ctx->pc = 0x139078u;
label_139078:
    // 0x139078: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x139078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x13907c: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x13907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x139080: 0xc04c094  jal         func_130250
    ctx->pc = 0x139080u;
    SET_GPR_U32(ctx, 31, 0x139088u);
    ctx->pc = 0x139084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139080u;
            // 0x139084: 0x262601a0  addiu       $a2, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139088u; }
        if (ctx->pc != 0x139088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139088u; }
        if (ctx->pc != 0x139088u) { return; }
    }
    ctx->pc = 0x139088u;
label_139088:
    // 0x139088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13908c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13908cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139094: 0x3e00008  jr          $ra
    ctx->pc = 0x139094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139094u;
            // 0x139098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13909Cu;
}
