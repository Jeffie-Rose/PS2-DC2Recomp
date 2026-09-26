#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMsgPartsItemInfo__FP7CDC2MesP14CEditPartsInfoP21MENUFORM_MAKEBRD_INFO
// Address: 0x1f9e90 - 0x1f9fb8
void MakeMsgPartsItemInfo__FP7CDC2MesP14CEditPartsInfoP21MENUFORM_MAKEBRD_INFO_0x1f9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMsgPartsItemInfo__FP7CDC2MesP14CEditPartsInfoP21MENUFORM_MAKEBRD_INFO_0x1f9e90");
#endif

    switch (ctx->pc) {
        case 0x1f9ef8u: goto label_1f9ef8;
        case 0x1f9f00u: goto label_1f9f00;
        case 0x1f9f0cu: goto label_1f9f0c;
        case 0x1f9f3cu: goto label_1f9f3c;
        case 0x1f9f5cu: goto label_1f9f5c;
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9f8cu: goto label_1f9f8c;
        case 0x1f9f94u: goto label_1f9f94;
        default: break;
    }

    ctx->pc = 0x1f9e90u;

    // 0x1f9e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f9e94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f9e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f9e98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f9e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f9e9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f9e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f9ea0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f9ea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ea4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f9ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f9ea8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f9ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9eac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f9eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f9eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9eb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9eb8: 0x8382908c  lb          $v0, -0x6F74($gp)
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938764)));
    // 0x1f9ebc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9EBCu;
    {
        const bool branch_taken_0x1f9ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9EBCu;
            // 0x1f9ec0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ebc) {
            ctx->pc = 0x1F9ED8u;
            goto label_1f9ed8;
        }
    }
    ctx->pc = 0x1F9EC4u;
    // 0x1f9ec4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1f9ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9ecc: 0x24638a78  addiu       $v1, $v1, -0x7588
    ctx->pc = 0x1f9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937208));
    // 0x1f9ed0: 0xa382908c  sb          $v0, -0x6F74($gp)
    ctx->pc = 0x1f9ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938764), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f9ed4: 0xaf839088  sw          $v1, -0x6F78($gp)
    ctx->pc = 0x1f9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 3));
label_1f9ed8:
    // 0x1f9ed8: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x1f9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1f9edc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1f9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1f9ee0: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1f9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1f9ee4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9ee8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9EE8u;
    {
        const bool branch_taken_0x1f9ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9EE8u;
            // 0x1f9eec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee8) {
            ctx->pc = 0x1F9EFCu;
            goto label_1f9efc;
        }
    }
    ctx->pc = 0x1F9EF0u;
    // 0x1f9ef0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F9EF0u;
    SET_GPR_U32(ctx, 31, 0x1F9EF8u);
    ctx->pc = 0x1F9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9EF0u;
            // 0x1f9ef4: 0x26841801  addiu       $a0, $s4, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EF8u; }
        if (ctx->pc != 0x1F9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EF8u; }
        if (ctx->pc != 0x1F9EF8u) { return; }
    }
    ctx->pc = 0x1F9EF8u;
label_1f9ef8:
    // 0x1f9ef8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f9ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9efc:
    // 0x1f9efc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f9efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f00:
    // 0x1f9f00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f9f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f04: 0xc06d5cc  jal         func_1B5730
    ctx->pc = 0x1F9F04u;
    SET_GPR_U32(ctx, 31, 0x1F9F0Cu);
    ctx->pc = 0x1F9F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F04u;
            // 0x1f9f08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5730u;
    if (runtime->hasFunction(0x1B5730u)) {
        auto targetFn = runtime->lookupFunction(0x1B5730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F0Cu; }
        if (ctx->pc != 0x1F9F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__14CEditPartsInfoFi_0x1b5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F0Cu; }
        if (ctx->pc != 0x1F9F0Cu) { return; }
    }
    ctx->pc = 0x1F9F0Cu;
label_1f9f0c:
    // 0x1f9f0c: 0x8f849088  lw          $a0, -0x6F78($gp)
    ctx->pc = 0x1f9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x1f9f10: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1f9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1f9f14: 0x24720074  addiu       $s2, $v1, 0x74
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x1f9f18: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1f9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1f9f1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9f20: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9F20u;
    {
        const bool branch_taken_0x1f9f20 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1f9f20) {
            ctx->pc = 0x1F9F40u;
            goto label_1f9f40;
        }
    }
    ctx->pc = 0x1F9F28u;
    // 0x1f9f28: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1f9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1f9f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f9f30: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1f9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x1f9f34: 0xc065810  jal         func_196040
    ctx->pc = 0x1F9F34u;
    SET_GPR_U32(ctx, 31, 0x1F9F3Cu);
    ctx->pc = 0x1F9F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F34u;
            // 0x1f9f38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F3Cu; }
        if (ctx->pc != 0x1F9F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F3Cu; }
        if (ctx->pc != 0x1F9F3Cu) { return; }
    }
    ctx->pc = 0x1F9F3Cu;
label_1f9f3c:
    // 0x1f9f3c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1f9f40:
    // 0x1f9f40: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9f44: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F44u;
    {
        const bool branch_taken_0x1f9f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F44u;
            // 0x1f9f48: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f44) {
            ctx->pc = 0x1F9F5Cu;
            goto label_1f9f5c;
        }
    }
    ctx->pc = 0x1F9F4Cu;
    // 0x1f9f4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1f9f50: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1f9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f9f54: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F9F54u;
    SET_GPR_U32(ctx, 31, 0x1F9F5Cu);
    ctx->pc = 0x1F9F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F54u;
            // 0x1f9f58: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F5Cu; }
        if (ctx->pc != 0x1F9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F5Cu; }
        if (ctx->pc != 0x1F9F5Cu) { return; }
    }
    ctx->pc = 0x1F9F5Cu;
label_1f9f5c:
    // 0x1f9f5c: 0x0  nop
    ctx->pc = 0x1f9f5cu;
    // NOP
    // 0x1f9f60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f9f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f9f64: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1f9f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f9f68: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F9F68u;
    {
        const bool branch_taken_0x1f9f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F68u;
            // 0x1f9f6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f68) {
            ctx->pc = 0x1F9F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9f00;
        }
    }
    ctx->pc = 0x1F9F70u;
    // 0x1f9f70: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x1f9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x1f9f74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f78: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1F9F78u;
    SET_GPR_U32(ctx, 31, 0x1F9F80u);
    ctx->pc = 0x1F9F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F78u;
            // 0x1f9f7c: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F80u; }
        if (ctx->pc != 0x1F9F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F80u; }
        if (ctx->pc != 0x1F9F80u) { return; }
    }
    ctx->pc = 0x1F9F80u;
label_1f9f80:
    // 0x1f9f80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f9f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f84: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x1F9F84u;
    SET_GPR_U32(ctx, 31, 0x1F9F8Cu);
    ctx->pc = 0x1F9F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F84u;
            // 0x1f9f88: 0x24050654  addiu       $a1, $zero, 0x654 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F8Cu; }
        if (ctx->pc != 0x1F9F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F8Cu; }
        if (ctx->pc != 0x1F9F8Cu) { return; }
    }
    ctx->pc = 0x1F9F8Cu;
label_1f9f8c:
    // 0x1f9f8c: 0xc087898  jal         func_21E260
    ctx->pc = 0x1F9F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9F94u);
    ctx->pc = 0x1F9F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F8Cu;
            // 0x1f9f90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F94u; }
        if (ctx->pc != 0x1F9F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F94u; }
        if (ctx->pc != 0x1F9F94u) { return; }
    }
    ctx->pc = 0x1F9F94u;
label_1f9f94:
    // 0x1f9f94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f9f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9f98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f9f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9f9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f9f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f9fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f9fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FB0u;
            // 0x1f9fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9FB8u;
}
