#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFileCacheBG__FPc
// Address: 0x1499c0 - 0x149afc
void LoadFileCacheBG__FPc_0x1499c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFileCacheBG__FPc_0x1499c0");
#endif

    switch (ctx->pc) {
        case 0x149a08u: goto label_149a08;
        case 0x149a38u: goto label_149a38;
        case 0x149a54u: goto label_149a54;
        case 0x149ac8u: goto label_149ac8;
        case 0x149ae8u: goto label_149ae8;
        default: break;
    }

    ctx->pc = 0x1499c0u;

    // 0x1499c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1499c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1499c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1499c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1499c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1499c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1499cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1499ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1499D0u;
    {
        const bool branch_taken_0x1499d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499D0u;
            // 0x1499d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499d0) {
            ctx->pc = 0x1499E4u;
            goto label_1499e4;
        }
    }
    ctx->pc = 0x1499D8u;
    // 0x1499d8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1499dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1499DCu;
    {
        const bool branch_taken_0x1499dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1499dc) {
            ctx->pc = 0x1499ECu;
            goto label_1499ec;
        }
    }
    ctx->pc = 0x1499E4u;
label_1499e4:
    // 0x1499e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1499E4u;
    {
        const bool branch_taken_0x1499e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499E4u;
            // 0x1499e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499e4) {
            ctx->pc = 0x149AE8u;
            goto label_149ae8;
        }
    }
    ctx->pc = 0x1499ECu;
label_1499ec:
    // 0x1499ec: 0x8f8288b4  lw          $v0, -0x774C($gp)
    ctx->pc = 0x1499ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x1499f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1499F0u;
    {
        const bool branch_taken_0x1499f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1499F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499F0u;
            // 0x1499f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499f0) {
            ctx->pc = 0x149A00u;
            goto label_149a00;
        }
    }
    ctx->pc = 0x1499F8u;
    // 0x1499f8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1499F8u;
    {
        const bool branch_taken_0x1499f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499F8u;
            // 0x1499fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499f8) {
            ctx->pc = 0x149AECu;
            goto label_149aec;
        }
    }
    ctx->pc = 0x149A00u;
label_149a00:
    // 0x149a00: 0xc0526c0  jal         func_149B00
    ctx->pc = 0x149A00u;
    SET_GPR_U32(ctx, 31, 0x149A08u);
    ctx->pc = 0x149B00u;
    if (runtime->hasFunction(0x149B00u)) {
        auto targetFn = runtime->lookupFunction(0x149B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A08u; }
        if (ctx->pc != 0x149A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFileCache__FPc_0x149b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A08u; }
        if (ctx->pc != 0x149A08u) { return; }
    }
    ctx->pc = 0x149A08u;
label_149a08:
    // 0x149a08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149A08u;
    {
        const bool branch_taken_0x149a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A08u;
            // 0x149a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a08) {
            ctx->pc = 0x149A24u;
            goto label_149a24;
        }
    }
    ctx->pc = 0x149A10u;
    // 0x149a10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x149a14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149a18: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x149a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x149a1c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x149A1Cu;
    {
        const bool branch_taken_0x149a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A1Cu;
            // 0x149a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a1c) {
            ctx->pc = 0x149AE8u;
            goto label_149ae8;
        }
    }
    ctx->pc = 0x149A24u;
label_149a24:
    // 0x149a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a28: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x149a2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a30: 0xc0524dc  jal         func_149370
    ctx->pc = 0x149A30u;
    SET_GPR_U32(ctx, 31, 0x149A38u);
    ctx->pc = 0x149A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A30u;
            // 0x149a34: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A38u; }
        if (ctx->pc != 0x149A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A38u; }
        if (ctx->pc != 0x149A38u) { return; }
    }
    ctx->pc = 0x149A38u;
label_149a38:
    // 0x149a38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149A38u;
    {
        const bool branch_taken_0x149a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A38u;
            // 0x149a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a38) {
            ctx->pc = 0x149A48u;
            goto label_149a48;
        }
    }
    ctx->pc = 0x149A40u;
    // 0x149a40: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x149A40u;
    {
        const bool branch_taken_0x149a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149a40) {
            ctx->pc = 0x149AE8u;
            goto label_149ae8;
        }
    }
    ctx->pc = 0x149A48u;
label_149a48:
    // 0x149a48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x149a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x149a4c: 0xc05260c  jal         func_149830
    ctx->pc = 0x149A4Cu;
    SET_GPR_U32(ctx, 31, 0x149A54u);
    ctx->pc = 0x149A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A4Cu;
            // 0x149a50: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149830u;
    if (runtime->hasFunction(0x149830u)) {
        auto targetFn = runtime->lookupFunction(0x149830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A54u; }
        if (ctx->pc != 0x149A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        align_size__FUiUi_0x149830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A54u; }
        if (ctx->pc != 0x149A54u) { return; }
    }
    ctx->pc = 0x149A54u;
label_149a54:
    // 0x149a54: 0x8f8588bc  lw          $a1, -0x7744($gp)
    ctx->pc = 0x149a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x149a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a5c: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x149A5Cu;
    {
        const bool branch_taken_0x149a5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x149A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A5Cu;
            // 0x149a60: 0x8f9088b8  lw          $s0, -0x7748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a5c) {
            ctx->pc = 0x149A8Cu;
            goto label_149a8c;
        }
    }
    ctx->pc = 0x149A64u;
    // 0x149a64: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149A64u;
    {
        const bool branch_taken_0x149a64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A64u;
            // 0x149a68: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a64) {
            ctx->pc = 0x149A74u;
            goto label_149a74;
        }
    }
    ctx->pc = 0x149A6Cu;
    // 0x149a6c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x149a70: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_149a74:
    // 0x149a74: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x149a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x149a78: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x149a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x149a7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x149a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149a80: 0xaf8388b8  sw          $v1, -0x7748($gp)
    ctx->pc = 0x149a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 3));
    // 0x149a84: 0x8f9088b8  lw          $s0, -0x7748($gp)
    ctx->pc = 0x149a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x149a88: 0x0  nop
    ctx->pc = 0x149a88u;
    // NOP
label_149a8c:
    // 0x149a8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x149a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149a90: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x149A90u;
    {
        const bool branch_taken_0x149a90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x149A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A90u;
            // 0x149a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a90) {
            ctx->pc = 0x149ABCu;
            goto label_149abc;
        }
    }
    ctx->pc = 0x149A98u;
    // 0x149a98: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149A98u;
    {
        const bool branch_taken_0x149a98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A98u;
            // 0x149a9c: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a98) {
            ctx->pc = 0x149AA8u;
            goto label_149aa8;
        }
    }
    ctx->pc = 0x149AA0u;
    // 0x149aa0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x149aa4: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_149aa8:
    // 0x149aa8: 0x8f8288b8  lw          $v0, -0x7748($gp)
    ctx->pc = 0x149aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x149aac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x149ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149ab4: 0xaf8288b8  sw          $v0, -0x7748($gp)
    ctx->pc = 0x149ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 2));
    // 0x149ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_149abc:
    // 0x149abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ac0: 0xc05224c  jal         func_148930
    ctx->pc = 0x149AC0u;
    SET_GPR_U32(ctx, 31, 0x149AC8u);
    ctx->pc = 0x149AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AC0u;
            // 0x149ac4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AC8u; }
        if (ctx->pc != 0x149AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AC8u; }
        if (ctx->pc != 0x149AC8u) { return; }
    }
    ctx->pc = 0x149AC8u;
label_149ac8:
    // 0x149ac8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149AC8u;
    {
        const bool branch_taken_0x149ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149AC8u;
            // 0x149acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ac8) {
            ctx->pc = 0x149AD8u;
            goto label_149ad8;
        }
    }
    ctx->pc = 0x149AD0u;
    // 0x149ad0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149AD0u;
    {
        const bool branch_taken_0x149ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ad0) {
            ctx->pc = 0x149AE8u;
            goto label_149ae8;
        }
    }
    ctx->pc = 0x149AD8u;
label_149ad8:
    // 0x149ad8: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x149adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ae0: 0xc05265c  jal         func_149970
    ctx->pc = 0x149AE0u;
    SET_GPR_U32(ctx, 31, 0x149AE8u);
    ctx->pc = 0x149AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AE0u;
            // 0x149ae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149970u;
    if (runtime->hasFunction(0x149970u)) {
        auto targetFn = runtime->lookupFunction(0x149970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AE8u; }
        if (ctx->pc != 0x149AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryFileCache__FPcP1i_0x149970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AE8u; }
        if (ctx->pc != 0x149AE8u) { return; }
    }
    ctx->pc = 0x149AE8u;
label_149ae8:
    // 0x149ae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_149aec:
    // 0x149aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149af4: 0x3e00008  jr          $ra
    ctx->pc = 0x149AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149AF4u;
            // 0x149af8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149AFCu;
}
