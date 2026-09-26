#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSubGame__FP6CScene
// Address: 0x303e70 - 0x303f20
void InitSubGame__FP6CScene_0x303e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSubGame__FP6CScene_0x303e70");
#endif

    switch (ctx->pc) {
        case 0x303e9cu: goto label_303e9c;
        case 0x303eb0u: goto label_303eb0;
        case 0x303ec0u: goto label_303ec0;
        case 0x303edcu: goto label_303edc;
        case 0x303ee8u: goto label_303ee8;
        case 0x303f08u: goto label_303f08;
        default: break;
    }

    ctx->pc = 0x303e70u;

    // 0x303e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x303e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x303e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x303e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x303e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x303e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303e84: 0xaf80a104  sw          $zero, -0x5EFC($gp)
    ctx->pc = 0x303e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 0));
    // 0x303e88: 0xaf80a108  sw          $zero, -0x5EF8($gp)
    ctx->pc = 0x303e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 0));
    // 0x303e8c: 0xaf80a10c  sw          $zero, -0x5EF4($gp)
    ctx->pc = 0x303e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942988), GPR_U32(ctx, 0));
    // 0x303e90: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x303e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
    // 0x303e94: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x303E94u;
    SET_GPR_U32(ctx, 31, 0x303E9Cu);
    ctx->pc = 0x303E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E94u;
            // 0x303e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E9Cu; }
        if (ctx->pc != 0x303E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E9Cu; }
        if (ctx->pc != 0x303E9Cu) { return; }
    }
    ctx->pc = 0x303E9Cu;
label_303e9c:
    // 0x303e9c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x303E9Cu;
    {
        const bool branch_taken_0x303e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303E9Cu;
            // 0x303ea0: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e9c) {
            ctx->pc = 0x303F08u;
            goto label_303f08;
        }
    }
    ctx->pc = 0x303EA4u;
    // 0x303ea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x303ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ea8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x303EA8u;
    {
        const bool branch_taken_0x303ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303EA8u;
            // 0x303eac: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ea8) {
            ctx->pc = 0x303EC4u;
            goto label_303ec4;
        }
    }
    ctx->pc = 0x303EB0u;
label_303eb0:
    // 0x303eb0: 0x8e023e68  lw          $v0, 0x3E68($s0)
    ctx->pc = 0x303eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15976)));
    // 0x303eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303eb8: 0xc04b950  jal         func_12E540
    ctx->pc = 0x303EB8u;
    SET_GPR_U32(ctx, 31, 0x303EC0u);
    ctx->pc = 0x303EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303EB8u;
            // 0x303ebc: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EC0u; }
        if (ctx->pc != 0x303EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EC0u; }
        if (ctx->pc != 0x303EC0u) { return; }
    }
    ctx->pc = 0x303EC0u;
label_303ec0:
    // 0x303ec0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x303ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_303ec4:
    // 0x303ec4: 0x0  nop
    ctx->pc = 0x303ec4u;
    // NOP
    // 0x303ec8: 0x8e023e6c  lw          $v0, 0x3E6C($s0)
    ctx->pc = 0x303ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15980)));
    // 0x303ecc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x303eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303ed0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x303ED0u;
    {
        const bool branch_taken_0x303ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ed0) {
            ctx->pc = 0x303EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303eb0;
        }
    }
    ctx->pc = 0x303ED8u;
    // 0x303ed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x303ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303edc:
    // 0x303edc: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x303edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x303ee0: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x303EE0u;
    SET_GPR_U32(ctx, 31, 0x303EE8u);
    ctx->pc = 0x303EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303EE0u;
            // 0x303ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EE8u; }
        if (ctx->pc != 0x303EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EE8u; }
        if (ctx->pc != 0x303EE8u) { return; }
    }
    ctx->pc = 0x303EE8u;
label_303ee8:
    // 0x303ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x303ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x303eec: 0x2a220028  slti        $v0, $s1, 0x28
    ctx->pc = 0x303eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x303ef0: 0x0  nop
    ctx->pc = 0x303ef0u;
    // NOP
    // 0x303ef4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x303EF4u;
    {
        const bool branch_taken_0x303ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ef4) {
            ctx->pc = 0x303EDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303edc;
        }
    }
    ctx->pc = 0x303EFCu;
    // 0x303efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f00: 0xc0a1144  jal         func_284510
    ctx->pc = 0x303F00u;
    SET_GPR_U32(ctx, 31, 0x303F08u);
    ctx->pc = 0x303F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303F00u;
            // 0x303f04: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284510u;
    if (runtime->hasFunction(0x284510u)) {
        auto targetFn = runtime->lookupFunction(0x284510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303F08u; }
        if (ctx->pc != 0x303F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect__6CSceneFi_0x284510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303F08u; }
        if (ctx->pc != 0x303F08u) { return; }
    }
    ctx->pc = 0x303F08u;
label_303f08:
    // 0x303f08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x303f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303f0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x303f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303f18: 0x3e00008  jr          $ra
    ctx->pc = 0x303F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F18u;
            // 0x303f1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303F20u;
}
