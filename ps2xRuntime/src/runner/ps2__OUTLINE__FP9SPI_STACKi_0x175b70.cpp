#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OUTLINE__FP9SPI_STACKi
// Address: 0x175b70 - 0x175d0c
void ps2__OUTLINE__FP9SPI_STACKi_0x175b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OUTLINE__FP9SPI_STACKi_0x175b70");
#endif

    switch (ctx->pc) {
        case 0x175ba0u: goto label_175ba0;
        case 0x175bacu: goto label_175bac;
        case 0x175bb4u: goto label_175bb4;
        case 0x175be8u: goto label_175be8;
        case 0x175bf4u: goto label_175bf4;
        case 0x175c08u: goto label_175c08;
        case 0x175c10u: goto label_175c10;
        case 0x175c88u: goto label_175c88;
        case 0x175cc0u: goto label_175cc0;
        case 0x175cf0u: goto label_175cf0;
        default: break;
    }

    ctx->pc = 0x175b70u;

    // 0x175b70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x175b74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x175b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x175b78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x175b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x175b7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x175b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175b80: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x175b80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x175b84: 0x8f8289b0  lw          $v0, -0x7650($gp)
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x175b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175B88u;
    {
        const bool branch_taken_0x175b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B88u;
            // 0x175b8c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b88) {
            ctx->pc = 0x175B98u;
            goto label_175b98;
        }
    }
    ctx->pc = 0x175B90u;
    // 0x175b90: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x175B90u;
    {
        const bool branch_taken_0x175b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B90u;
            // 0x175b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b90) {
            ctx->pc = 0x175CF4u;
            goto label_175cf4;
        }
    }
    ctx->pc = 0x175B98u;
label_175b98:
    // 0x175b98: 0xc05191c  jal         func_146470
    ctx->pc = 0x175B98u;
    SET_GPR_U32(ctx, 31, 0x175BA0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BA0u; }
        if (ctx->pc != 0x175BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BA0u; }
        if (ctx->pc != 0x175BA0u) { return; }
    }
    ctx->pc = 0x175BA0u;
label_175ba0:
    // 0x175ba0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ba4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x175BA4u;
    SET_GPR_U32(ctx, 31, 0x175BACu);
    ctx->pc = 0x175BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BA4u;
            // 0x175ba8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BACu; }
        if (ctx->pc != 0x175BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BACu; }
        if (ctx->pc != 0x175BACu) { return; }
    }
    ctx->pc = 0x175BACu;
label_175bac:
    // 0x175bac: 0xc05190c  jal         func_146430
    ctx->pc = 0x175BACu;
    SET_GPR_U32(ctx, 31, 0x175BB4u);
    ctx->pc = 0x175BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BACu;
            // 0x175bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BB4u; }
        if (ctx->pc != 0x175BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BB4u; }
        if (ctx->pc != 0x175BB4u) { return; }
    }
    ctx->pc = 0x175BB4u;
label_175bb4:
    // 0x175bb4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x175bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x175bb8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x175bbc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175BBCu;
    {
        const bool branch_taken_0x175bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175BBCu;
            // 0x175bc0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bbc) {
            ctx->pc = 0x175BD4u;
            goto label_175bd4;
        }
    }
    ctx->pc = 0x175BC4u;
    // 0x175bc4: 0x8f8389ec  lw          $v1, -0x7614($gp)
    ctx->pc = 0x175bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x175bc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x175bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175bcc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175BCCu;
    {
        const bool branch_taken_0x175bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x175bcc) {
            ctx->pc = 0x175BDCu;
            goto label_175bdc;
        }
    }
    ctx->pc = 0x175BD4u;
label_175bd4:
    // 0x175bd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x175BD4u;
    {
        const bool branch_taken_0x175bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175BD4u;
            // 0x175bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bd4) {
            ctx->pc = 0x175CF4u;
            goto label_175cf4;
        }
    }
    ctx->pc = 0x175BDCu;
label_175bdc:
    // 0x175bdc: 0x8f8489dc  lw          $a0, -0x7624($gp)
    ctx->pc = 0x175bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x175be0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x175BE0u;
    SET_GPR_U32(ctx, 31, 0x175BE8u);
    ctx->pc = 0x175BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BE0u;
            // 0x175be4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BE8u; }
        if (ctx->pc != 0x175BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BE8u; }
        if (ctx->pc != 0x175BE8u) { return; }
    }
    ctx->pc = 0x175BE8u;
label_175be8:
    // 0x175be8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x175bec: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x175BECu;
    SET_GPR_U32(ctx, 31, 0x175BF4u);
    ctx->pc = 0x175BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BECu;
            // 0x175bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BF4u; }
        if (ctx->pc != 0x175BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BF4u; }
        if (ctx->pc != 0x175BF4u) { return; }
    }
    ctx->pc = 0x175BF4u;
label_175bf4:
    // 0x175bf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175BF4u;
    {
        const bool branch_taken_0x175bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175BF4u;
            // 0x175bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bf4) {
            ctx->pc = 0x175C08u;
            goto label_175c08;
        }
    }
    ctx->pc = 0x175BFCu;
    // 0x175bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c00: 0xc05f090  jal         func_17C240
    ctx->pc = 0x175C00u;
    SET_GPR_U32(ctx, 31, 0x175C08u);
    ctx->pc = 0x175C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C00u;
            // 0x175c04: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C240u;
    if (runtime->hasFunction(0x17C240u)) {
        auto targetFn = runtime->lookupFunction(0x17C240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C08u; }
        if (ctx->pc != 0x175C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12COutLineDrawFv_0x17c240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C08u; }
        if (ctx->pc != 0x175C08u) { return; }
    }
    ctx->pc = 0x175C08u;
label_175c08:
    // 0x175c08: 0xc05f090  jal         func_17C240
    ctx->pc = 0x175C08u;
    SET_GPR_U32(ctx, 31, 0x175C10u);
    ctx->pc = 0x175C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C08u;
            // 0x175c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C240u;
    if (runtime->hasFunction(0x17C240u)) {
        auto targetFn = runtime->lookupFunction(0x17C240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C10u; }
        if (ctx->pc != 0x175C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12COutLineDrawFv_0x17c240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C10u; }
        if (ctx->pc != 0x175C10u) { return; }
    }
    ctx->pc = 0x175C10u;
label_175c10:
    // 0x175c10: 0xe6340038  swc1        $f20, 0x38($s1)
    ctx->pc = 0x175c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x175c14: 0x8f8289c8  lw          $v0, -0x7638($gp)
    ctx->pc = 0x175c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x175c18: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x175C18u;
    {
        const bool branch_taken_0x175c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c18) {
            ctx->pc = 0x175CD8u;
            goto label_175cd8;
        }
    }
    ctx->pc = 0x175C20u;
    // 0x175c20: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x175c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x175c24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x175C24u;
    {
        const bool branch_taken_0x175c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c24) {
            ctx->pc = 0x175C54u;
            goto label_175c54;
        }
    }
    ctx->pc = 0x175C2Cu;
    // 0x175c2c: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x175c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x175c30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175C30u;
    {
        const bool branch_taken_0x175c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c30) {
            ctx->pc = 0x175C40u;
            goto label_175c40;
        }
    }
    ctx->pc = 0x175C38u;
    // 0x175c38: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x175C38u;
    {
        const bool branch_taken_0x175c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C38u;
            // 0x175c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c38) {
            ctx->pc = 0x175CF4u;
            goto label_175cf4;
        }
    }
    ctx->pc = 0x175C40u;
label_175c40:
    // 0x175c40: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x175c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x175c44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x175C44u;
    {
        const bool branch_taken_0x175c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C44u;
            // 0x175c48: 0xaf8289cc  sw          $v0, -0x7634($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c44) {
            ctx->pc = 0x175CD8u;
            goto label_175cd8;
        }
    }
    ctx->pc = 0x175C4Cu;
    // 0x175c4c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x175C4Cu;
    {
        const bool branch_taken_0x175c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C4Cu;
            // 0x175c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c4c) {
            ctx->pc = 0x175CF4u;
            goto label_175cf4;
        }
    }
    ctx->pc = 0x175C54u;
label_175c54:
    // 0x175c54: 0x838289f8  lb          $v0, -0x7608($gp)
    ctx->pc = 0x175c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x175c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175C58u;
    {
        const bool branch_taken_0x175c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C58u;
            // 0x175c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c58) {
            ctx->pc = 0x175C68u;
            goto label_175c68;
        }
    }
    ctx->pc = 0x175C60u;
    // 0x175c60: 0xaf8289f4  sw          $v0, -0x760C($gp)
    ctx->pc = 0x175c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 2));
    // 0x175c64: 0xa38289f8  sb          $v0, -0x7608($gp)
    ctx->pc = 0x175c64u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937080), (uint8_t)GPR_U32(ctx, 2));
label_175c68:
    // 0x175c68: 0x8f8289f4  lw          $v0, -0x760C($gp)
    ctx->pc = 0x175c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x175c6c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x175c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x175c70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x175c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175c78: 0xaf8289f4  sw          $v0, -0x760C($gp)
    ctx->pc = 0x175c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 2));
    // 0x175c7c: 0x8f8689f4  lw          $a2, -0x760C($gp)
    ctx->pc = 0x175c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x175c80: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x175C80u;
    SET_GPR_U32(ctx, 31, 0x175C88u);
    ctx->pc = 0x175C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C80u;
            // 0x175c84: 0x24a53970  addiu       $a1, $a1, 0x3970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C88u; }
        if (ctx->pc != 0x175C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C88u; }
        if (ctx->pc != 0x175C88u) { return; }
    }
    ctx->pc = 0x175C88u;
label_175c88:
    // 0x175c88: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x175c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c90: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175c94: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x175c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x175c98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c9c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x175c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x175ca0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x175ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x175ca4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x175ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x175ca8: 0x8f8589ec  lw          $a1, -0x7614($gp)
    ctx->pc = 0x175ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x175cac: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x175cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x175cb0: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x175cb4: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x175cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x175cb8: 0xc04b450  jal         func_12D140
    ctx->pc = 0x175CB8u;
    SET_GPR_U32(ctx, 31, 0x175CC0u);
    ctx->pc = 0x175CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CB8u;
            // 0x175cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CC0u; }
        if (ctx->pc != 0x175CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CC0u; }
        if (ctx->pc != 0x175CC0u) { return; }
    }
    ctx->pc = 0x175CC0u;
label_175cc0:
    // 0x175cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175cc4: 0xaf8289cc  sw          $v0, -0x7634($gp)
    ctx->pc = 0x175cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937036), GPR_U32(ctx, 2));
    // 0x175cc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175CC8u;
    {
        const bool branch_taken_0x175cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CC8u;
            // 0x175ccc: 0xaf8389c8  sw          $v1, -0x7638($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cc8) {
            ctx->pc = 0x175CD8u;
            goto label_175cd8;
        }
    }
    ctx->pc = 0x175CD0u;
    // 0x175cd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175CD0u;
    {
        const bool branch_taken_0x175cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CD0u;
            // 0x175cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cd0) {
            ctx->pc = 0x175CF4u;
            goto label_175cf4;
        }
    }
    ctx->pc = 0x175CD8u;
label_175cd8:
    // 0x175cd8: 0x8f8289cc  lw          $v0, -0x7634($gp)
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937036)));
    // 0x175cdc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x175ce0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x175ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x175ce4: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175ce8: 0xc05cb7c  jal         func_172DF0
    ctx->pc = 0x175CE8u;
    SET_GPR_U32(ctx, 31, 0x175CF0u);
    ctx->pc = 0x175CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CE8u;
            // 0x175cec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172DF0u;
    if (runtime->hasFunction(0x172DF0u)) {
        auto targetFn = runtime->lookupFunction(0x172DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CF0u; }
        if (ctx->pc != 0x175CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddOutLine__11CCharacter2FPcP12COutLineDraw_0x172df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CF0u; }
        if (ctx->pc != 0x175CF0u) { return; }
    }
    ctx->pc = 0x175CF0u;
label_175cf0:
    // 0x175cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175cf4:
    // 0x175cf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x175cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175cf8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x175cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x175cfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175d00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x175d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175d04: 0x3e00008  jr          $ra
    ctx->pc = 0x175D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D04u;
            // 0x175d08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175D0Cu;
}
