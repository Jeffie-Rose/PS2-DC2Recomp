#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaMenuInit__FP9mgCMemoryPii
// Address: 0x2adf30 - 0x2ae2f4
void SphidaMenuInit__FP9mgCMemoryPii_0x2adf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaMenuInit__FP9mgCMemoryPii_0x2adf30");
#endif

    switch (ctx->pc) {
        case 0x2adf64u: goto label_2adf64;
        case 0x2adf74u: goto label_2adf74;
        case 0x2adfe8u: goto label_2adfe8;
        case 0x2adff0u: goto label_2adff0;
        case 0x2ae008u: goto label_2ae008;
        case 0x2ae01cu: goto label_2ae01c;
        case 0x2ae028u: goto label_2ae028;
        case 0x2ae038u: goto label_2ae038;
        case 0x2ae040u: goto label_2ae040;
        case 0x2ae048u: goto label_2ae048;
        case 0x2ae058u: goto label_2ae058;
        case 0x2ae064u: goto label_2ae064;
        case 0x2ae07cu: goto label_2ae07c;
        case 0x2ae088u: goto label_2ae088;
        case 0x2ae094u: goto label_2ae094;
        case 0x2ae0a4u: goto label_2ae0a4;
        case 0x2ae0b0u: goto label_2ae0b0;
        case 0x2ae0c0u: goto label_2ae0c0;
        case 0x2ae0c8u: goto label_2ae0c8;
        case 0x2ae0d0u: goto label_2ae0d0;
        case 0x2ae0e0u: goto label_2ae0e0;
        case 0x2ae0ecu: goto label_2ae0ec;
        case 0x2ae0f8u: goto label_2ae0f8;
        case 0x2ae10cu: goto label_2ae10c;
        case 0x2ae118u: goto label_2ae118;
        case 0x2ae128u: goto label_2ae128;
        case 0x2ae130u: goto label_2ae130;
        case 0x2ae138u: goto label_2ae138;
        case 0x2ae148u: goto label_2ae148;
        case 0x2ae154u: goto label_2ae154;
        case 0x2ae16cu: goto label_2ae16c;
        case 0x2ae178u: goto label_2ae178;
        case 0x2ae1acu: goto label_2ae1ac;
        case 0x2ae1b4u: goto label_2ae1b4;
        case 0x2ae1e8u: goto label_2ae1e8;
        case 0x2ae208u: goto label_2ae208;
        case 0x2ae228u: goto label_2ae228;
        case 0x2ae240u: goto label_2ae240;
        case 0x2ae248u: goto label_2ae248;
        case 0x2ae268u: goto label_2ae268;
        case 0x2ae280u: goto label_2ae280;
        case 0x2ae2acu: goto label_2ae2ac;
        case 0x2ae2c8u: goto label_2ae2c8;
        case 0x2ae2d8u: goto label_2ae2d8;
        case 0x2ae2e4u: goto label_2ae2e4;
        default: break;
    }

    ctx->pc = 0x2adf30u;

    // 0x2adf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2adf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2adf34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2adf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2adf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2adf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2adf3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2adf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf40: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2adf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2adf44: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2adf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2adf48: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2adf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2adf4c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2adf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2adf50: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2adf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2adf54: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2adf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2adf58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2adf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2adf5c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2ADF5Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF64u);
    ctx->pc = 0x2ADF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF5Cu;
            // 0x2adf60: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF64u; }
        if (ctx->pc != 0x2ADF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF64u; }
        if (ctx->pc != 0x2ADF64u) { return; }
    }
    ctx->pc = 0x2ADF64u;
label_2adf64:
    // 0x2adf64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2adf64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2adf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf6c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2adf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2adf70: 0x2484ca40  addiu       $a0, $a0, -0x35C0
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
label_2adf74:
    // 0x2adf74: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x2adf74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2adf78: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x2adf78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2adf7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2adf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2adf80: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2adf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2adf84: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2adf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2adf88: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2adf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2adf8c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2adf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2adf90: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2adf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2adf94: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2adf94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2adf98: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2adf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2adf9c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2adf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x2adfa0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2adfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2adfa4: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x2adfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x2adfa8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2adfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2adfac: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x2adfacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x2adfb0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2adfb4: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x2adfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x2adfb8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2adfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2adfbc: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x2adfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x2adfc0: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x2adfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2adfc4: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2ADFC4u;
    {
        const bool branch_taken_0x2adfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFC4u;
            // 0x2adfc8: 0xad03001c  sw          $v1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfc4) {
            ctx->pc = 0x2ADF74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2adf74;
        }
    }
    ctx->pc = 0x2ADFCCu;
    // 0x2adfcc: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2adfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2adfd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2adfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adfd4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2adfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2adfd8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2adfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2adfdc: 0xac23ca7c  sw          $v1, -0x3584($at)
    ctx->pc = 0x2adfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953596), GPR_U32(ctx, 3));
    // 0x2adfe0: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2ADFE0u;
    SET_GPR_U32(ctx, 31, 0x2ADFE8u);
    ctx->pc = 0x2ADFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFE0u;
            // 0x2adfe4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFE8u; }
        if (ctx->pc != 0x2ADFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFE8u; }
        if (ctx->pc != 0x2ADFE8u) { return; }
    }
    ctx->pc = 0x2ADFE8u;
label_2adfe8:
    // 0x2adfe8: 0xc064224  jal         func_190890
    ctx->pc = 0x2ADFE8u;
    SET_GPR_U32(ctx, 31, 0x2ADFF0u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFF0u; }
        if (ctx->pc != 0x2ADFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFF0u; }
        if (ctx->pc != 0x2ADFF0u) { return; }
    }
    ctx->pc = 0x2ADFF0u;
label_2adff0:
    // 0x2adff0: 0xaf829b04  sw          $v0, -0x64FC($gp)
    ctx->pc = 0x2adff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941444), GPR_U32(ctx, 2));
    // 0x2adff4: 0x8f849b04  lw          $a0, -0x64FC($gp)
    ctx->pc = 0x2adff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941444)));
    // 0x2adff8: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x2ADFF8u;
    {
        const bool branch_taken_0x2adff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFF8u;
            // 0x2adffc: 0xaf809b08  sw          $zero, -0x64F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adff8) {
            ctx->pc = 0x2AE2E4u;
            goto label_2ae2e4;
        }
    }
    ctx->pc = 0x2AE000u;
    // 0x2ae000: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x2AE000u;
    SET_GPR_U32(ctx, 31, 0x2AE008u);
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE008u; }
        if (ctx->pc != 0x2AE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE008u; }
        if (ctx->pc != 0x2AE008u) { return; }
    }
    ctx->pc = 0x2AE008u;
label_2ae008:
    // 0x2ae008: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ae008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ae00c: 0xaf829b08  sw          $v0, -0x64F8($gp)
    ctx->pc = 0x2ae00cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941448), GPR_U32(ctx, 2));
    // 0x2ae010: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x2ae010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    // 0x2ae014: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AE014u;
    SET_GPR_U32(ctx, 31, 0x2AE01Cu);
    ctx->pc = 0x2AE018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE014u;
            // 0x2ae018: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE01Cu; }
        if (ctx->pc != 0x2AE01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE01Cu; }
        if (ctx->pc != 0x2AE01Cu) { return; }
    }
    ctx->pc = 0x2AE01Cu;
label_2ae01c:
    // 0x2ae01c: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2ae01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2ae020: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2AE020u;
    SET_GPR_U32(ctx, 31, 0x2AE028u);
    ctx->pc = 0x2AE024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE020u;
            // 0x2ae024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE028u; }
        if (ctx->pc != 0x2AE028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE028u; }
        if (ctx->pc != 0x2AE028u) { return; }
    }
    ctx->pc = 0x2AE028u;
label_2ae028:
    // 0x2ae028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE028u;
    {
        const bool branch_taken_0x2ae028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE028u;
            // 0x2ae02c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae028) {
            ctx->pc = 0x2AE038u;
            goto label_2ae038;
        }
    }
    ctx->pc = 0x2AE030u;
    // 0x2ae030: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2AE030u;
    SET_GPR_U32(ctx, 31, 0x2AE038u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE038u; }
        if (ctx->pc != 0x2AE038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE038u; }
        if (ctx->pc != 0x2AE038u) { return; }
    }
    ctx->pc = 0x2AE038u;
label_2ae038:
    // 0x2ae038: 0xc065a18  jal         func_196860
    ctx->pc = 0x2AE038u;
    SET_GPR_U32(ctx, 31, 0x2AE040u);
    ctx->pc = 0x2AE03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE038u;
            // 0x2ae03c: 0xaf829b0c  sw          $v0, -0x64F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE040u; }
        if (ctx->pc != 0x2AE040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE040u; }
        if (ctx->pc != 0x2AE040u) { return; }
    }
    ctx->pc = 0x2AE040u;
label_2ae040:
    // 0x2ae040: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2AE040u;
    SET_GPR_U32(ctx, 31, 0x2AE048u);
    ctx->pc = 0x2AE044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE040u;
            // 0x2ae044: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE048u; }
        if (ctx->pc != 0x2AE048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE048u; }
        if (ctx->pc != 0x2AE048u) { return; }
    }
    ctx->pc = 0x2AE048u;
label_2ae048:
    // 0x2ae048: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae04c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae050: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2AE050u;
    SET_GPR_U32(ctx, 31, 0x2AE058u);
    ctx->pc = 0x2AE054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE050u;
            // 0x2ae054: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE058u; }
        if (ctx->pc != 0x2AE058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE058u; }
        if (ctx->pc != 0x2AE058u) { return; }
    }
    ctx->pc = 0x2AE058u;
label_2ae058:
    // 0x2ae058: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae05c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AE05Cu;
    SET_GPR_U32(ctx, 31, 0x2AE064u);
    ctx->pc = 0x2AE060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE05Cu;
            // 0x2ae060: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE064u; }
        if (ctx->pc != 0x2AE064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE064u; }
        if (ctx->pc != 0x2AE064u) { return; }
    }
    ctx->pc = 0x2AE064u;
label_2ae064:
    // 0x2ae064: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae068: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ae068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae06c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ae06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ae070: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2ae070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ae074: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x2AE074u;
    SET_GPR_U32(ctx, 31, 0x2AE07Cu);
    ctx->pc = 0x2AE078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE074u;
            // 0x2ae078: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE07Cu; }
        if (ctx->pc != 0x2AE07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE07Cu; }
        if (ctx->pc != 0x2AE07Cu) { return; }
    }
    ctx->pc = 0x2AE07Cu;
label_2ae07c:
    // 0x2ae07c: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae080: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AE080u;
    SET_GPR_U32(ctx, 31, 0x2AE088u);
    ctx->pc = 0x2AE084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE080u;
            // 0x2ae084: 0x240513ec  addiu       $a1, $zero, 0x13EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE088u; }
        if (ctx->pc != 0x2AE088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE088u; }
        if (ctx->pc != 0x2AE088u) { return; }
    }
    ctx->pc = 0x2AE088u;
label_2ae088:
    // 0x2ae088: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae08c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2AE08Cu;
    SET_GPR_U32(ctx, 31, 0x2AE094u);
    ctx->pc = 0x2AE090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE08Cu;
            // 0x2ae090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE094u; }
        if (ctx->pc != 0x2AE094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE094u; }
        if (ctx->pc != 0x2AE094u) { return; }
    }
    ctx->pc = 0x2AE094u;
label_2ae094:
    // 0x2ae094: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ae094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ae098: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x2ae09c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AE09Cu;
    SET_GPR_U32(ctx, 31, 0x2AE0A4u);
    ctx->pc = 0x2AE0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE09Cu;
            // 0x2ae0a0: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0A4u; }
        if (ctx->pc != 0x2AE0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0A4u; }
        if (ctx->pc != 0x2AE0A4u) { return; }
    }
    ctx->pc = 0x2AE0A4u;
label_2ae0a4:
    // 0x2ae0a4: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2ae0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2ae0a8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2AE0A8u;
    SET_GPR_U32(ctx, 31, 0x2AE0B0u);
    ctx->pc = 0x2AE0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0A8u;
            // 0x2ae0ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0B0u; }
        if (ctx->pc != 0x2AE0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0B0u; }
        if (ctx->pc != 0x2AE0B0u) { return; }
    }
    ctx->pc = 0x2AE0B0u;
label_2ae0b0:
    // 0x2ae0b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE0B0u;
    {
        const bool branch_taken_0x2ae0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0B0u;
            // 0x2ae0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0b0) {
            ctx->pc = 0x2AE0C0u;
            goto label_2ae0c0;
        }
    }
    ctx->pc = 0x2AE0B8u;
    // 0x2ae0b8: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2AE0B8u;
    SET_GPR_U32(ctx, 31, 0x2AE0C0u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0C0u; }
        if (ctx->pc != 0x2AE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0C0u; }
        if (ctx->pc != 0x2AE0C0u) { return; }
    }
    ctx->pc = 0x2AE0C0u;
label_2ae0c0:
    // 0x2ae0c0: 0xc065a18  jal         func_196860
    ctx->pc = 0x2AE0C0u;
    SET_GPR_U32(ctx, 31, 0x2AE0C8u);
    ctx->pc = 0x2AE0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0C0u;
            // 0x2ae0c4: 0xaf829b10  sw          $v0, -0x64F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0C8u; }
        if (ctx->pc != 0x2AE0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0C8u; }
        if (ctx->pc != 0x2AE0C8u) { return; }
    }
    ctx->pc = 0x2AE0C8u;
label_2ae0c8:
    // 0x2ae0c8: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2AE0C8u;
    SET_GPR_U32(ctx, 31, 0x2AE0D0u);
    ctx->pc = 0x2AE0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0C8u;
            // 0x2ae0cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0D0u; }
        if (ctx->pc != 0x2AE0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0D0u; }
        if (ctx->pc != 0x2AE0D0u) { return; }
    }
    ctx->pc = 0x2AE0D0u;
label_2ae0d0:
    // 0x2ae0d0: 0x8f849b10  lw          $a0, -0x64F0($gp)
    ctx->pc = 0x2ae0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941456)));
    // 0x2ae0d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0d8: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2AE0D8u;
    SET_GPR_U32(ctx, 31, 0x2AE0E0u);
    ctx->pc = 0x2AE0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0D8u;
            // 0x2ae0dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0E0u; }
        if (ctx->pc != 0x2AE0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0E0u; }
        if (ctx->pc != 0x2AE0E0u) { return; }
    }
    ctx->pc = 0x2AE0E0u;
label_2ae0e0:
    // 0x2ae0e0: 0x8f849b10  lw          $a0, -0x64F0($gp)
    ctx->pc = 0x2ae0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941456)));
    // 0x2ae0e4: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AE0E4u;
    SET_GPR_U32(ctx, 31, 0x2AE0ECu);
    ctx->pc = 0x2AE0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0E4u;
            // 0x2ae0e8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0ECu; }
        if (ctx->pc != 0x2AE0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0ECu; }
        if (ctx->pc != 0x2AE0ECu) { return; }
    }
    ctx->pc = 0x2AE0ECu;
label_2ae0ec:
    // 0x2ae0ec: 0x8f849b10  lw          $a0, -0x64F0($gp)
    ctx->pc = 0x2ae0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941456)));
    // 0x2ae0f0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AE0F0u;
    SET_GPR_U32(ctx, 31, 0x2AE0F8u);
    ctx->pc = 0x2AE0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0F0u;
            // 0x2ae0f4: 0x240513f1  addiu       $a1, $zero, 0x13F1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0F8u; }
        if (ctx->pc != 0x2AE0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0F8u; }
        if (ctx->pc != 0x2AE0F8u) { return; }
    }
    ctx->pc = 0x2AE0F8u;
label_2ae0f8:
    // 0x2ae0f8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ae0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ae0fc: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x2ae0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x2ae100: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x2ae100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    // 0x2ae104: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AE104u;
    SET_GPR_U32(ctx, 31, 0x2AE10Cu);
    ctx->pc = 0x2AE108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE104u;
            // 0x2ae108: 0xa3809b14  sb          $zero, -0x64EC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE10Cu; }
        if (ctx->pc != 0x2AE10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE10Cu; }
        if (ctx->pc != 0x2AE10Cu) { return; }
    }
    ctx->pc = 0x2AE10Cu;
label_2ae10c:
    // 0x2ae10c: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2ae10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2ae110: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2AE110u;
    SET_GPR_U32(ctx, 31, 0x2AE118u);
    ctx->pc = 0x2AE114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE110u;
            // 0x2ae114: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE118u; }
        if (ctx->pc != 0x2AE118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE118u; }
        if (ctx->pc != 0x2AE118u) { return; }
    }
    ctx->pc = 0x2AE118u;
label_2ae118:
    // 0x2ae118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE118u;
    {
        const bool branch_taken_0x2ae118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE118u;
            // 0x2ae11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae118) {
            ctx->pc = 0x2AE128u;
            goto label_2ae128;
        }
    }
    ctx->pc = 0x2AE120u;
    // 0x2ae120: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2AE120u;
    SET_GPR_U32(ctx, 31, 0x2AE128u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE128u; }
        if (ctx->pc != 0x2AE128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE128u; }
        if (ctx->pc != 0x2AE128u) { return; }
    }
    ctx->pc = 0x2AE128u;
label_2ae128:
    // 0x2ae128: 0xc065a18  jal         func_196860
    ctx->pc = 0x2AE128u;
    SET_GPR_U32(ctx, 31, 0x2AE130u);
    ctx->pc = 0x2AE12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE128u;
            // 0x2ae12c: 0xaf829b18  sw          $v0, -0x64E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE130u; }
        if (ctx->pc != 0x2AE130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE130u; }
        if (ctx->pc != 0x2AE130u) { return; }
    }
    ctx->pc = 0x2AE130u;
label_2ae130:
    // 0x2ae130: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2AE130u;
    SET_GPR_U32(ctx, 31, 0x2AE138u);
    ctx->pc = 0x2AE134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE130u;
            // 0x2ae134: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE138u; }
        if (ctx->pc != 0x2AE138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE138u; }
        if (ctx->pc != 0x2AE138u) { return; }
    }
    ctx->pc = 0x2AE138u;
label_2ae138:
    // 0x2ae138: 0x8f849b18  lw          $a0, -0x64E8($gp)
    ctx->pc = 0x2ae138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x2ae13c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae140: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2AE140u;
    SET_GPR_U32(ctx, 31, 0x2AE148u);
    ctx->pc = 0x2AE144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE140u;
            // 0x2ae144: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE148u; }
        if (ctx->pc != 0x2AE148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE148u; }
        if (ctx->pc != 0x2AE148u) { return; }
    }
    ctx->pc = 0x2AE148u;
label_2ae148:
    // 0x2ae148: 0x8f849b18  lw          $a0, -0x64E8($gp)
    ctx->pc = 0x2ae148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x2ae14c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AE14Cu;
    SET_GPR_U32(ctx, 31, 0x2AE154u);
    ctx->pc = 0x2AE150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE14Cu;
            // 0x2ae150: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE154u; }
        if (ctx->pc != 0x2AE154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE154u; }
        if (ctx->pc != 0x2AE154u) { return; }
    }
    ctx->pc = 0x2AE154u;
label_2ae154:
    // 0x2ae154: 0x8f849b18  lw          $a0, -0x64E8($gp)
    ctx->pc = 0x2ae154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x2ae158: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ae158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae15c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ae15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ae160: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ae164: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x2AE164u;
    SET_GPR_U32(ctx, 31, 0x2AE16Cu);
    ctx->pc = 0x2AE168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE164u;
            // 0x2ae168: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE16Cu; }
        if (ctx->pc != 0x2AE16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE16Cu; }
        if (ctx->pc != 0x2AE16Cu) { return; }
    }
    ctx->pc = 0x2AE16Cu;
label_2ae16c:
    // 0x2ae16c: 0x8f849b18  lw          $a0, -0x64E8($gp)
    ctx->pc = 0x2ae16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x2ae170: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AE170u;
    SET_GPR_U32(ctx, 31, 0x2AE178u);
    ctx->pc = 0x2AE174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE170u;
            // 0x2ae174: 0x240513ee  addiu       $a1, $zero, 0x13EE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE178u; }
        if (ctx->pc != 0x2AE178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE178u; }
        if (ctx->pc != 0x2AE178u) { return; }
    }
    ctx->pc = 0x2AE178u;
label_2ae178:
    // 0x2ae178: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ae178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ae17c: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2ae17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2ae180: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2ae184: 0x24a5ca10  addiu       $a1, $a1, -0x35F0
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953488));
    // 0x2ae188: 0xaf809b48  sw          $zero, -0x64B8($gp)
    ctx->pc = 0x2ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941512), GPR_U32(ctx, 0));
    // 0x2ae18c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae190: 0xa3809b38  sb          $zero, -0x64C8($gp)
    ctx->pc = 0x2ae190u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941496), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae194: 0xaf809b4c  sw          $zero, -0x64B4($gp)
    ctx->pc = 0x2ae194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941516), GPR_U32(ctx, 0));
    // 0x2ae198: 0xa7809b54  sh          $zero, -0x64AC($gp)
    ctx->pc = 0x2ae198u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941524), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ae19c: 0xaf828304  sw          $v0, -0x7CFC($gp)
    ctx->pc = 0x2ae19cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
    // 0x2ae1a0: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x2ae1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x2ae1a4: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x2AE1A4u;
    SET_GPR_U32(ctx, 31, 0x2AE1ACu);
    ctx->pc = 0x2AE1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1A4u;
            // 0x2ae1a8: 0xa3809b58  sb          $zero, -0x64A8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941528), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1ACu; }
        if (ctx->pc != 0x2AE1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1ACu; }
        if (ctx->pc != 0x2AE1ACu) { return; }
    }
    ctx->pc = 0x2AE1ACu;
label_2ae1ac:
    // 0x2ae1ac: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x2AE1ACu;
    SET_GPR_U32(ctx, 31, 0x2AE1B4u);
    ctx->pc = 0x2AE1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1ACu;
            // 0x2ae1b0: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1B4u; }
        if (ctx->pc != 0x2AE1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1B4u; }
        if (ctx->pc != 0x2AE1B4u) { return; }
    }
    ctx->pc = 0x2AE1B4u;
label_2ae1b4:
    // 0x2ae1b4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2ae1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2ae1b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae1bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ae1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ae1c0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ae1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ae1c4: 0x2484e988  addiu       $a0, $a0, -0x1678
    ctx->pc = 0x2ae1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961544));
    // 0x2ae1c8: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x2ae1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ae1cc: 0x8c23ca34  lw          $v1, -0x35CC($at)
    ctx->pc = 0x2ae1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953524)));
    // 0x2ae1d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ae1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ae1d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ae1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ae1d8: 0x8c22ca30  lw          $v0, -0x35D0($at)
    ctx->pc = 0x2ae1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953520)));
    // 0x2ae1dc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2ae1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae1e0: 0xc094440  jal         func_251100
    ctx->pc = 0x2AE1E0u;
    SET_GPR_U32(ctx, 31, 0x2AE1E8u);
    ctx->pc = 0x2AE1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1E0u;
            // 0x2ae1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1E8u; }
        if (ctx->pc != 0x2AE1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1E8u; }
        if (ctx->pc != 0x2AE1E8u) { return; }
    }
    ctx->pc = 0x2AE1E8u;
label_2ae1e8:
    // 0x2ae1e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2ae1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2ae1ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE1ECu;
    {
        const bool branch_taken_0x2ae1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1ECu;
            // 0x2ae1f0: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1ec) {
            ctx->pc = 0x2AE1FCu;
            goto label_2ae1fc;
        }
    }
    ctx->pc = 0x2AE1F4u;
    // 0x2ae1f4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2ae1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2ae1f8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ae1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ae1fc:
    // 0x2ae1fc: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ae200: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AE200u;
    SET_GPR_U32(ctx, 31, 0x2AE208u);
    ctx->pc = 0x2AE204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE200u;
            // 0x2ae204: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE208u; }
        if (ctx->pc != 0x2AE208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE208u; }
        if (ctx->pc != 0x2AE208u) { return; }
    }
    ctx->pc = 0x2AE208u;
label_2ae208:
    // 0x2ae208: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ae208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ae20c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ae20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ae210: 0x8c26ca44  lw          $a2, -0x35BC($at)
    ctx->pc = 0x2ae210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2ae214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae218: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ae218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ae21c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae220: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2AE220u;
    SET_GPR_U32(ctx, 31, 0x2AE228u);
    ctx->pc = 0x2AE224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE220u;
            // 0x2ae224: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE228u; }
        if (ctx->pc != 0x2AE228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE228u; }
        if (ctx->pc != 0x2AE228u) { return; }
    }
    ctx->pc = 0x2AE228u;
label_2ae228:
    // 0x2ae228: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ae228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ae22c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ae22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ae230: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ae230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ae234: 0x24a5e998  addiu       $a1, $a1, -0x1668
    ctx->pc = 0x2ae234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961560));
    // 0x2ae238: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AE238u;
    SET_GPR_U32(ctx, 31, 0x2AE240u);
    ctx->pc = 0x2AE23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE238u;
            // 0x2ae23c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE240u; }
        if (ctx->pc != 0x2AE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE240u; }
        if (ctx->pc != 0x2AE240u) { return; }
    }
    ctx->pc = 0x2AE240u;
label_2ae240:
    // 0x2ae240: 0xc08d1c8  jal         func_234720
    ctx->pc = 0x2AE240u;
    SET_GPR_U32(ctx, 31, 0x2AE248u);
    ctx->pc = 0x2AE244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE240u;
            // 0x2ae244: 0xaf829b1c  sw          $v0, -0x64E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234720u;
    if (runtime->hasFunction(0x234720u)) {
        auto targetFn = runtime->lookupFunction(0x234720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE248u; }
        if (ctx->pc != 0x2AE248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIMGPtr__Fv_0x234720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE248u; }
        if (ctx->pc != 0x2AE248u) { return; }
    }
    ctx->pc = 0x2AE248u;
label_2ae248:
    // 0x2ae248: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ae248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ae24c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ae24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ae250: 0x8c26ca44  lw          $a2, -0x35BC($at)
    ctx->pc = 0x2ae250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2ae254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae258: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ae258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ae25c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae260: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2AE260u;
    SET_GPR_U32(ctx, 31, 0x2AE268u);
    ctx->pc = 0x2AE264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE260u;
            // 0x2ae264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE268u; }
        if (ctx->pc != 0x2AE268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE268u; }
        if (ctx->pc != 0x2AE268u) { return; }
    }
    ctx->pc = 0x2AE268u;
label_2ae268:
    // 0x2ae268: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ae268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ae26c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ae26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ae270: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ae270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ae274: 0x24a5e918  addiu       $a1, $a1, -0x16E8
    ctx->pc = 0x2ae274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961432));
    // 0x2ae278: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AE278u;
    SET_GPR_U32(ctx, 31, 0x2AE280u);
    ctx->pc = 0x2AE27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE278u;
            // 0x2ae27c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE280u; }
        if (ctx->pc != 0x2AE280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE280u; }
        if (ctx->pc != 0x2AE280u) { return; }
    }
    ctx->pc = 0x2AE280u;
label_2ae280:
    // 0x2ae280: 0xaf829b28  sw          $v0, -0x64D8($gp)
    ctx->pc = 0x2ae280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941480), GPR_U32(ctx, 2));
    // 0x2ae284: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ae284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ae288: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ae28c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ae28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ae290: 0xaf829b30  sw          $v0, -0x64D0($gp)
    ctx->pc = 0x2ae290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941488), GPR_U32(ctx, 2));
    // 0x2ae294: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ae294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ae298: 0x24a5e9a0  addiu       $a1, $a1, -0x1660
    ctx->pc = 0x2ae298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961568));
    // 0x2ae29c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ae29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae2a0: 0xa3809b2c  sb          $zero, -0x64D4($gp)
    ctx->pc = 0x2ae2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae2a4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AE2A4u;
    SET_GPR_U32(ctx, 31, 0x2AE2ACu);
    ctx->pc = 0x2AE2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE2A4u;
            // 0x2ae2a8: 0xaf809b34  sw          $zero, -0x64CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2ACu; }
        if (ctx->pc != 0x2AE2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2ACu; }
        if (ctx->pc != 0x2AE2ACu) { return; }
    }
    ctx->pc = 0x2AE2ACu;
label_2ae2ac:
    // 0x2ae2ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ae2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ae2b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ae2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ae2b4: 0xaf829b20  sw          $v0, -0x64E0($gp)
    ctx->pc = 0x2ae2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941472), GPR_U32(ctx, 2));
    // 0x2ae2b8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ae2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ae2bc: 0x24a5e9a8  addiu       $a1, $a1, -0x1658
    ctx->pc = 0x2ae2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961576));
    // 0x2ae2c0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AE2C0u;
    SET_GPR_U32(ctx, 31, 0x2AE2C8u);
    ctx->pc = 0x2AE2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE2C0u;
            // 0x2ae2c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2C8u; }
        if (ctx->pc != 0x2AE2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2C8u; }
        if (ctx->pc != 0x2AE2C8u) { return; }
    }
    ctx->pc = 0x2AE2C8u;
label_2ae2c8:
    // 0x2ae2c8: 0x8f849b08  lw          $a0, -0x64F8($gp)
    ctx->pc = 0x2ae2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ae2cc: 0xaf829b24  sw          $v0, -0x64DC($gp)
    ctx->pc = 0x2ae2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941476), GPR_U32(ctx, 2));
    // 0x2ae2d0: 0xc0bdbe8  jal         func_2F6FA0
    ctx->pc = 0x2AE2D0u;
    SET_GPR_U32(ctx, 31, 0x2AE2D8u);
    ctx->pc = 0x2AE2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE2D0u;
            // 0x2ae2d4: 0xa7809b50  sh          $zero, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FA0u;
    if (runtime->hasFunction(0x2F6FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2D8u; }
        if (ctx->pc != 0x2AE2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlay__11CSphidaDataFv_0x2f6fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2D8u; }
        if (ctx->pc != 0x2AE2D8u) { return; }
    }
    ctx->pc = 0x2AE2D8u;
label_2ae2d8:
    // 0x2ae2d8: 0x8f849b18  lw          $a0, -0x64E8($gp)
    ctx->pc = 0x2ae2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
    // 0x2ae2dc: 0xc0ab780  jal         func_2ADE00
    ctx->pc = 0x2AE2DCu;
    SET_GPR_U32(ctx, 31, 0x2AE2E4u);
    ctx->pc = 0x2AE2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE2DCu;
            // 0x2ae2e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE00u;
    if (runtime->hasFunction(0x2ADE00u)) {
        auto targetFn = runtime->lookupFunction(0x2ADE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2E4u; }
        if (ctx->pc != 0x2AE2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SphidaScreListUpdate__FP7CDC2Mesi_0x2ade00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE2E4u; }
        if (ctx->pc != 0x2AE2E4u) { return; }
    }
    ctx->pc = 0x2AE2E4u;
label_2ae2e4:
    // 0x2ae2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ae2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ae2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE2ECu;
            // 0x2ae2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE2F4u;
}
