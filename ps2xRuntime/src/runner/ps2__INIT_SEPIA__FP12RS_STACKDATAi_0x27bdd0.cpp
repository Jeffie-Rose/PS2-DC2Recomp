#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INIT_SEPIA__FP12RS_STACKDATAi
// Address: 0x27bdd0 - 0x27bf28
void ps2__INIT_SEPIA__FP12RS_STACKDATAi_0x27bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INIT_SEPIA__FP12RS_STACKDATAi_0x27bdd0");
#endif

    switch (ctx->pc) {
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27be10u: goto label_27be10;
        case 0x27be48u: goto label_27be48;
        case 0x27be98u: goto label_27be98;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bf08u: goto label_27bf08;
        default: break;
    }

    ctx->pc = 0x27bdd0u;

    // 0x27bdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27bdd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27bdd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27bddc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27bde0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x27bde0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27bde4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27bde8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27bde8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27bdf0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BDF0u;
    SET_GPR_U32(ctx, 31, 0x27BDF8u);
    ctx->pc = 0x27BDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BDF0u;
            // 0x27bdf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDF8u; }
        if (ctx->pc != 0x27BDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDF8u; }
        if (ctx->pc != 0x27BDF8u) { return; }
    }
    ctx->pc = 0x27BDF8u;
label_27bdf8:
    // 0x27bdf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27bdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdfc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x27bdfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27be00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BE00u;
    {
        const bool branch_taken_0x27be00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE00u;
            // 0x27be04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be00) {
            ctx->pc = 0x27BE14u;
            goto label_27be14;
        }
    }
    ctx->pc = 0x27BE08u;
    // 0x27be08: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BE08u;
    SET_GPR_U32(ctx, 31, 0x27BE10u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE10u; }
        if (ctx->pc != 0x27BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE10u; }
        if (ctx->pc != 0x27BE10u) { return; }
    }
    ctx->pc = 0x27BE10u;
label_27be10:
    // 0x27be10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27be10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27be14:
    // 0x27be14: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27be18: 0x8c822e80  lw          $v0, 0x2E80($a0)
    ctx->pc = 0x27be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11904)));
    // 0x27be1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BE1Cu;
    {
        const bool branch_taken_0x27be1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE1Cu;
            // 0x27be20: 0x8c832e7c  lw          $v1, 0x2E7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be1c) {
            ctx->pc = 0x27BE30u;
            goto label_27be30;
        }
    }
    ctx->pc = 0x27BE24u;
    // 0x27be24: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x27be24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27be28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE28u;
    {
        const bool branch_taken_0x27be28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be28) {
            ctx->pc = 0x27BE38u;
            goto label_27be38;
        }
    }
    ctx->pc = 0x27BE30u;
label_27be30:
    // 0x27be30: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x27BE30u;
    {
        const bool branch_taken_0x27be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE30u;
            // 0x27be34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be30) {
            ctx->pc = 0x27BF0Cu;
            goto label_27bf0c;
        }
    }
    ctx->pc = 0x27BE38u;
label_27be38:
    // 0x27be38: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27BE38u;
    {
        const bool branch_taken_0x27be38 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE38u;
            // 0x27be3c: 0x708021  addu        $s0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be38) {
            ctx->pc = 0x27BEA8u;
            goto label_27bea8;
        }
    }
    ctx->pc = 0x27BE40u;
    // 0x27be40: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x27BE40u;
    SET_GPR_U32(ctx, 31, 0x27BE48u);
    ctx->pc = 0x27BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE40u;
            // 0x27be44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE48u; }
        if (ctx->pc != 0x27BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE48u; }
        if (ctx->pc != 0x27BE48u) { return; }
    }
    ctx->pc = 0x27BE48u;
label_27be48:
    // 0x27be48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE48u;
    {
        const bool branch_taken_0x27be48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27be48) {
            ctx->pc = 0x27BE58u;
            goto label_27be58;
        }
    }
    ctx->pc = 0x27BE50u;
    // 0x27be50: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27BE50u;
    {
        const bool branch_taken_0x27be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE50u;
            // 0x27be54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be50) {
            ctx->pc = 0x27BF0Cu;
            goto label_27bf0c;
        }
    }
    ctx->pc = 0x27BE58u;
label_27be58:
    // 0x27be58: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x27be58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27be5c: 0x8f848784  lw          $a0, -0x787C($gp)
    ctx->pc = 0x27be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27be60: 0x8f8387a0  lw          $v1, -0x7860($gp)
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27be64: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x27be64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27be68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x27be68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27be6c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE6Cu;
    {
        const bool branch_taken_0x27be6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27BE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE6Cu;
            // 0x27be70: 0x320c3  sra         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be6c) {
            ctx->pc = 0x27BE7Cu;
            goto label_27be7c;
        }
    }
    ctx->pc = 0x27BE74u;
    // 0x27be74: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x27be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x27be78: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x27be78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_27be7c:
    // 0x27be7c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE7Cu;
    {
        const bool branch_taken_0x27be7c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x27BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE7Cu;
            // 0x27be80: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be7c) {
            ctx->pc = 0x27BE8Cu;
            goto label_27be8c;
        }
    }
    ctx->pc = 0x27BE84u;
    // 0x27be84: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x27be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x27be88: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x27be88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_27be8c:
    // 0x27be8c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27be90: 0xc04e704  jal         func_139C10
    ctx->pc = 0x27BE90u;
    SET_GPR_U32(ctx, 31, 0x27BE98u);
    ctx->pc = 0x27BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE90u;
            // 0x27be94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE98u; }
        if (ctx->pc != 0x27BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE98u; }
        if (ctx->pc != 0x27BE98u) { return; }
    }
    ctx->pc = 0x27BE98u;
label_27be98:
    // 0x27be98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BE98u;
    {
        const bool branch_taken_0x27be98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE98u;
            // 0x27be9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be98) {
            ctx->pc = 0x27BEB0u;
            goto label_27beb0;
        }
    }
    ctx->pc = 0x27BEA0u;
    // 0x27bea0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27BEA0u;
    {
        const bool branch_taken_0x27bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BEA0u;
            // 0x27bea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bea0) {
            ctx->pc = 0x27BF0Cu;
            goto label_27bf0c;
        }
    }
    ctx->pc = 0x27BEA8u;
label_27bea8:
    // 0x27bea8: 0x8f918ac0  lw          $s1, -0x7540($gp)
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x27beac: 0x0  nop
    ctx->pc = 0x27beacu;
    // NOP
label_27beb0:
    // 0x27beb0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x27beb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27beb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27beb8: 0xc04b950  jal         func_12E540
    ctx->pc = 0x27BEB8u;
    SET_GPR_U32(ctx, 31, 0x27BEC0u);
    ctx->pc = 0x27BEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BEB8u;
            // 0x27bebc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEC0u; }
        if (ctx->pc != 0x27BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEC0u; }
        if (ctx->pc != 0x27BEC0u) { return; }
    }
    ctx->pc = 0x27BEC0u;
label_27bec0:
    // 0x27bec0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x27bec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x27bec4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x27bec8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x27bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x27becc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x27beccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x27bed0: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x27bed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x27bed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bed8: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x27bed8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x27bedc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x27bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x27bee0: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x27bee4: 0x24c6cc10  addiu       $a2, $a2, -0x33F0
    ctx->pc = 0x27bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954000));
    // 0x27bee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27bee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27beec: 0xc04b450  jal         func_12D140
    ctx->pc = 0x27BEECu;
    SET_GPR_U32(ctx, 31, 0x27BEF4u);
    ctx->pc = 0x27BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BEECu;
            // 0x27bef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEF4u; }
        if (ctx->pc != 0x27BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEF4u; }
        if (ctx->pc != 0x27BEF4u) { return; }
    }
    ctx->pc = 0x27BEF4u;
label_27bef4:
    // 0x27bef4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27bef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27befc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27befcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf00: 0xc098254  jal         func_260950
    ctx->pc = 0x27BF00u;
    SET_GPR_U32(ctx, 31, 0x27BF08u);
    ctx->pc = 0x27BF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF00u;
            // 0x27bf04: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260950u;
    if (runtime->hasFunction(0x260950u)) {
        auto targetFn = runtime->lookupFunction(0x260950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF08u; }
        if (ctx->pc != 0x27BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSepiaTexture__13CScreenEffectFP10mgCTextureP1_0x260950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF08u; }
        if (ctx->pc != 0x27BF08u) { return; }
    }
    ctx->pc = 0x27BF08u;
label_27bf08:
    // 0x27bf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bf0c:
    // 0x27bf0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27bf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27bf10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27bf10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27bf14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27bf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bf18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27bf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bf1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27bf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF20u;
            // 0x27bf24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BF28u;
}
