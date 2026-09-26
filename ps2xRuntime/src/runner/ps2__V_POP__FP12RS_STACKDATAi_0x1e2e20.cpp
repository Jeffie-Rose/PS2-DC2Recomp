#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _V_POP__FP12RS_STACKDATAi
// Address: 0x1e2e20 - 0x1e2f54
void ps2__V_POP__FP12RS_STACKDATAi_0x1e2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__V_POP__FP12RS_STACKDATAi_0x1e2e20");
#endif

    switch (ctx->pc) {
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2ea0u: goto label_1e2ea0;
        case 0x1e2ed4u: goto label_1e2ed4;
        case 0x1e2f04u: goto label_1e2f04;
        case 0x1e2f38u: goto label_1e2f38;
        default: break;
    }

    ctx->pc = 0x1e2e20u;

    // 0x1e2e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2e24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2e2c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2E2Cu;
    {
        const bool branch_taken_0x1e2e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E2Cu;
            // 0x1e2e30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e2c) {
            ctx->pc = 0x1E2E3Cu;
            goto label_1e2e3c;
        }
    }
    ctx->pc = 0x1E2E34u;
    // 0x1e2e34: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1E2E34u;
    {
        const bool branch_taken_0x1e2e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E34u;
            // 0x1e2e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e34) {
            ctx->pc = 0x1E2F44u;
            goto label_1e2f44;
        }
    }
    ctx->pc = 0x1E2E3Cu;
label_1e2e3c:
    // 0x1e2e3c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E44u);
    ctx->pc = 0x1E2E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E3Cu;
            // 0x1e2e40: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2E44u; }
        if (ctx->pc != 0x1E2E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2E44u; }
        if (ctx->pc != 0x1E2E44u) { return; }
    }
    ctx->pc = 0x1E2E44u;
label_1e2e44:
    // 0x1e2e44: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2E44u;
    {
        const bool branch_taken_0x1e2e44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e2e44) {
            ctx->pc = 0x1E2E54u;
            goto label_1e2e54;
        }
    }
    ctx->pc = 0x1E2E4Cu;
    // 0x1e2e4c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E2E4Cu;
    {
        const bool branch_taken_0x1e2e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E4Cu;
            // 0x1e2e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e4c) {
            ctx->pc = 0x1E2F44u;
            goto label_1e2f44;
        }
    }
    ctx->pc = 0x1E2E54u;
label_1e2e54:
    // 0x1e2e54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e2e58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2e5c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2E5Cu;
    {
        const bool branch_taken_0x1e2e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2e5c) {
            ctx->pc = 0x1E2E6Cu;
            goto label_1e2e6c;
        }
    }
    ctx->pc = 0x1E2E64u;
    // 0x1e2e64: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E2E64u;
    {
        const bool branch_taken_0x1e2e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E64u;
            // 0x1e2e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e64) {
            ctx->pc = 0x1E2F44u;
            goto label_1e2f44;
        }
    }
    ctx->pc = 0x1E2E6Cu;
label_1e2e6c:
    // 0x1e2e6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e2e70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2e74: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2E74u;
    {
        const bool branch_taken_0x1e2e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E74u;
            // 0x1e2e78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e74) {
            ctx->pc = 0x1E2EDCu;
            goto label_1e2edc;
        }
    }
    ctx->pc = 0x1E2E7Cu;
    // 0x1e2e7c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x1e2e7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e2e80: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2E80u;
    {
        const bool branch_taken_0x1e2e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E80u;
            // 0x1e2e84: 0x28430008  slti        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e80) {
            ctx->pc = 0x1E2EA4u;
            goto label_1e2ea4;
        }
    }
    ctx->pc = 0x1E2E88u;
    // 0x1e2e88: 0x8f858e70  lw          $a1, -0x7190($gp)
    ctx->pc = 0x1e2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2e8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2e90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e2e94: 0x8c65115c  lw          $a1, 0x115C($v1)
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4444)));
    // 0x1e2e98: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E2E98u;
    SET_GPR_U32(ctx, 31, 0x1E2EA0u);
    ctx->pc = 0x1E2E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E98u;
            // 0x1e2e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EA0u; }
        if (ctx->pc != 0x1E2EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EA0u; }
        if (ctx->pc != 0x1E2EA0u) { return; }
    }
    ctx->pc = 0x1E2EA0u;
label_1e2ea0:
    // 0x1e2ea0: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x1e2ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e2ea4:
    // 0x1e2ea4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2EA4u;
    {
        const bool branch_taken_0x1e2ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EA4u;
            // 0x1e2ea8: 0x28410088  slti        $at, $v0, 0x88 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ea4) {
            ctx->pc = 0x1E2ED4u;
            goto label_1e2ed4;
        }
    }
    ctx->pc = 0x1E2EACu;
    // 0x1e2eac: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2EACu;
    {
        const bool branch_taken_0x1e2eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2eac) {
            ctx->pc = 0x1E2ED4u;
            goto label_1e2ed4;
        }
    }
    ctx->pc = 0x1E2EB4u;
    // 0x1e2eb4: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e2eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2ebc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e2ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e2ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2ec4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e2ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e2ec8: 0x8c25fdd0  lw          $a1, -0x230($at)
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966736)));
    // 0x1e2ecc: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E2ECCu;
    SET_GPR_U32(ctx, 31, 0x1E2ED4u);
    ctx->pc = 0x1E2ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2ECCu;
            // 0x1e2ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2ED4u; }
        if (ctx->pc != 0x1E2ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2ED4u; }
        if (ctx->pc != 0x1E2ED4u) { return; }
    }
    ctx->pc = 0x1E2ED4u;
label_1e2ed4:
    // 0x1e2ed4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2ED4u;
    {
        const bool branch_taken_0x1e2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2ED4u;
            // 0x1e2ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ed4) {
            ctx->pc = 0x1E2F44u;
            goto label_1e2f44;
        }
    }
    ctx->pc = 0x1E2EDCu;
label_1e2edc:
    // 0x1e2edc: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2EDCu;
    {
        const bool branch_taken_0x1e2edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E2EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EDCu;
            // 0x1e2ee0: 0x28410008  slti        $at, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2edc) {
            ctx->pc = 0x1E2F40u;
            goto label_1e2f40;
        }
    }
    ctx->pc = 0x1E2EE4u;
    // 0x1e2ee4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2EE4u;
    {
        const bool branch_taken_0x1e2ee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EE4u;
            // 0x1e2ee8: 0x28430008  slti        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ee4) {
            ctx->pc = 0x1E2F08u;
            goto label_1e2f08;
        }
    }
    ctx->pc = 0x1E2EECu;
    // 0x1e2eec: 0x8f858e70  lw          $a1, -0x7190($gp)
    ctx->pc = 0x1e2eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2ef0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2ef4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e2ef8: 0xc46c115c  lwc1        $f12, 0x115C($v1)
    ctx->pc = 0x1e2ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2efc: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2EFCu;
    SET_GPR_U32(ctx, 31, 0x1E2F04u);
    ctx->pc = 0x1E2F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EFCu;
            // 0x1e2f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F04u; }
        if (ctx->pc != 0x1E2F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F04u; }
        if (ctx->pc != 0x1E2F04u) { return; }
    }
    ctx->pc = 0x1E2F04u;
label_1e2f04:
    // 0x1e2f04: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x1e2f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e2f08:
    // 0x1e2f08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2F08u;
    {
        const bool branch_taken_0x1e2f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F08u;
            // 0x1e2f0c: 0x28410088  slti        $at, $v0, 0x88 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f08) {
            ctx->pc = 0x1E2F38u;
            goto label_1e2f38;
        }
    }
    ctx->pc = 0x1E2F10u;
    // 0x1e2f10: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2F10u;
    {
        const bool branch_taken_0x1e2f10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f10) {
            ctx->pc = 0x1E2F38u;
            goto label_1e2f38;
        }
    }
    ctx->pc = 0x1E2F18u;
    // 0x1e2f18: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e2f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2f20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e2f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e2f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2f28: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e2f2c: 0xc42cfdd0  lwc1        $f12, -0x230($at)
    ctx->pc = 0x1e2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2f30: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2F30u;
    SET_GPR_U32(ctx, 31, 0x1E2F38u);
    ctx->pc = 0x1E2F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F30u;
            // 0x1e2f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F38u; }
        if (ctx->pc != 0x1E2F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F38u; }
        if (ctx->pc != 0x1E2F38u) { return; }
    }
    ctx->pc = 0x1E2F38u;
label_1e2f38:
    // 0x1e2f38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2F38u;
    {
        const bool branch_taken_0x1e2f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F38u;
            // 0x1e2f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f38) {
            ctx->pc = 0x1E2F44u;
            goto label_1e2f44;
        }
    }
    ctx->pc = 0x1E2F40u;
label_1e2f40:
    // 0x1e2f40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e2f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f44:
    // 0x1e2f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F4Cu;
            // 0x1e2f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2F54u;
}
