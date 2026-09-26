#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRotMatrix__8CEditMapFPA4_fi
// Address: 0x1b0dd0 - 0x1b0ea8
void GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRotMatrix__8CEditMapFPA4_fi_0x1b0dd0");
#endif

    switch (ctx->pc) {
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e90u: goto label_1b0e90;
        default: break;
    }

    ctx->pc = 0x1b0dd0u;

    // 0x1b0dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0dd4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1b0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b0dd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b0dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0de0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0de4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b0de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0de8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b0de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0df0: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1b0df0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0df4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b0df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0df8: 0x0  nop
    ctx->pc = 0x1b0df8u;
    // NOP
    // 0x1b0dfc: 0x8810  mfhi        $s1
    ctx->pc = 0x1b0dfcu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1b0e00: 0xc04c050  jal         func_130140
    ctx->pc = 0x1B0E00u;
    SET_GPR_U32(ctx, 31, 0x1B0E08u);
    ctx->pc = 0x1B0E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E00u;
            // 0x1b0e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E08u; }
        if (ctx->pc != 0x1B0E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E08u; }
        if (ctx->pc != 0x1B0E08u) { return; }
    }
    ctx->pc = 0x1B0E08u;
label_1b0e08:
    // 0x1b0e08: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B0E08u;
    {
        const bool branch_taken_0x1b0e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E08u;
            // 0x1b0e0c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e08) {
            ctx->pc = 0x1B0E90u;
            goto label_1b0e90;
        }
    }
    ctx->pc = 0x1B0E10u;
    // 0x1b0e10: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0E10u;
    {
        const bool branch_taken_0x1b0e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E10u;
            // 0x1b0e14: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e10) {
            ctx->pc = 0x1B0E34u;
            goto label_1b0e34;
        }
    }
    ctx->pc = 0x1B0E18u;
    // 0x1b0e18: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1b0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1b0e1c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1b0e20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b0e24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0e28: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1b0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1b0e2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B0E2Cu;
    {
        const bool branch_taken_0x1b0e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E2Cu;
            // 0x1b0e30: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e2c) {
            ctx->pc = 0x1B0E90u;
            goto label_1b0e90;
        }
    }
    ctx->pc = 0x1B0E34u;
label_1b0e34:
    // 0x1b0e34: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0E34u;
    {
        const bool branch_taken_0x1b0e34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E34u;
            // 0x1b0e38: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e34) {
            ctx->pc = 0x1B0E4Cu;
            goto label_1b0e4c;
        }
    }
    ctx->pc = 0x1B0E3Cu;
    // 0x1b0e3c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b0e40: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1b0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1b0e44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0E44u;
    {
        const bool branch_taken_0x1b0e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E44u;
            // 0x1b0e48: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e44) {
            ctx->pc = 0x1B0E90u;
            goto label_1b0e90;
        }
    }
    ctx->pc = 0x1B0E4Cu;
label_1b0e4c:
    // 0x1b0e4c: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0E4Cu;
    {
        const bool branch_taken_0x1b0e4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E4Cu;
            // 0x1b0e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e4c) {
            ctx->pc = 0x1B0E70u;
            goto label_1b0e70;
        }
    }
    ctx->pc = 0x1B0E54u;
    // 0x1b0e54: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1b0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1b0e58: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0e5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b0e60: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b0e64: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1b0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1b0e68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0E68u;
    {
        const bool branch_taken_0x1b0e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E68u;
            // 0x1b0e6c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e68) {
            ctx->pc = 0x1B0E90u;
            goto label_1b0e90;
        }
    }
    ctx->pc = 0x1B0E70u;
label_1b0e70:
    // 0x1b0e70: 0xc06c3c0  jal         func_1B0F00
    ctx->pc = 0x1B0E70u;
    SET_GPR_U32(ctx, 31, 0x1B0E78u);
    ctx->pc = 0x1B0E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E70u;
            // 0x1b0e74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E78u; }
        if (ctx->pc != 0x1B0E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E78u; }
        if (ctx->pc != 0x1B0E78u) { return; }
    }
    ctx->pc = 0x1B0E78u;
label_1b0e78:
    // 0x1b0e78: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1B0E78u;
    SET_GPR_U32(ctx, 31, 0x1B0E80u);
    ctx->pc = 0x1B0E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E78u;
            // 0x1b0e7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E80u; }
        if (ctx->pc != 0x1B0E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E80u; }
        if (ctx->pc != 0x1B0E80u) { return; }
    }
    ctx->pc = 0x1B0E80u;
label_1b0e80:
    // 0x1b0e80: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b0e80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b0e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e88: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1B0E88u;
    SET_GPR_U32(ctx, 31, 0x1B0E90u);
    ctx->pc = 0x1B0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E88u;
            // 0x1b0e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E90u; }
        if (ctx->pc != 0x1B0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E90u; }
        if (ctx->pc != 0x1B0E90u) { return; }
    }
    ctx->pc = 0x1B0E90u;
label_1b0e90:
    // 0x1b0e90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EA0u;
            // 0x1b0ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0EA8u;
}
