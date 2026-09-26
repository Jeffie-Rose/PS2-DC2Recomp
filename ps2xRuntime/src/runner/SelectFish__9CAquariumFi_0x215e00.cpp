#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectFish__9CAquariumFi
// Address: 0x215e00 - 0x215f14
void SelectFish__9CAquariumFi_0x215e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectFish__9CAquariumFi_0x215e00");
#endif

    switch (ctx->pc) {
        case 0x215e30u: goto label_215e30;
        case 0x215e4cu: goto label_215e4c;
        case 0x215e94u: goto label_215e94;
        case 0x215ef8u: goto label_215ef8;
        default: break;
    }

    ctx->pc = 0x215e00u;

    // 0x215e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x215e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x215e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x215e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x215e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x215e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x215e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x215e10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x215e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215e18: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x215e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x215e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x215e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e24: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x215e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x215e28: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x215E28u;
    SET_GPR_U32(ctx, 31, 0x215E30u);
    ctx->pc = 0x215E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E28u;
            // 0x215e2c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E30u; }
        if (ctx->pc != 0x215E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E30u; }
        if (ctx->pc != 0x215E30u) { return; }
    }
    ctx->pc = 0x215E30u;
label_215e30:
    // 0x215e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215E30u;
    {
        const bool branch_taken_0x215e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E30u;
            // 0x215e34: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e30) {
            ctx->pc = 0x215E40u;
            goto label_215e40;
        }
    }
    ctx->pc = 0x215E38u;
    // 0x215e38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x215E38u;
    {
        const bool branch_taken_0x215e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E38u;
            // 0x215e3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e38) {
            ctx->pc = 0x215E58u;
            goto label_215e58;
        }
    }
    ctx->pc = 0x215E40u;
label_215e40:
    // 0x215e40: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x215e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x215e44: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x215E44u;
    SET_GPR_U32(ctx, 31, 0x215E4Cu);
    ctx->pc = 0x215E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215E44u;
            // 0x215e48: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E4Cu; }
        if (ctx->pc != 0x215E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215E4Cu; }
        if (ctx->pc != 0x215E4Cu) { return; }
    }
    ctx->pc = 0x215E4Cu;
label_215e4c:
    // 0x215e4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x215E4Cu;
    {
        const bool branch_taken_0x215e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e4c) {
            ctx->pc = 0x215E58u;
            goto label_215e58;
        }
    }
    ctx->pc = 0x215E54u;
    // 0x215e54: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x215e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_215e58:
    // 0x215e58: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x215E58u;
    {
        const bool branch_taken_0x215e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e58) {
            ctx->pc = 0x215E64u;
            goto label_215e64;
        }
    }
    ctx->pc = 0x215E60u;
    // 0x215e60: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x215e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215e64:
    // 0x215e64: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x215E64u;
    {
        const bool branch_taken_0x215e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e64) {
            ctx->pc = 0x215EFCu;
            goto label_215efc;
        }
    }
    ctx->pc = 0x215E6Cu;
    // 0x215e6c: 0x860502d8  lh          $a1, 0x2D8($s0)
    ctx->pc = 0x215e6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x215e70: 0xb19021  addu        $s2, $a1, $s1
    ctx->pc = 0x215e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x215e74: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x215E74u;
    {
        const bool branch_taken_0x215e74 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x215E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E74u;
            // 0x215e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e74) {
            ctx->pc = 0x215E80u;
            goto label_215e80;
        }
    }
    ctx->pc = 0x215E7Cu;
    // 0x215e7c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x215e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_215e80:
    // 0x215e80: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x215e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x215e84: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x215E84u;
    {
        const bool branch_taken_0x215e84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x215E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E84u;
            // 0x215e88: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e84) {
            ctx->pc = 0x215ED4u;
            goto label_215ed4;
        }
    }
    ctx->pc = 0x215E8Cu;
    // 0x215e8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x215E8Cu;
    {
        const bool branch_taken_0x215e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E8Cu;
            // 0x215e90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e8c) {
            ctx->pc = 0x215ED0u;
            goto label_215ed0;
        }
    }
    ctx->pc = 0x215E94u;
label_215e94:
    // 0x215e94: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x215e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x215e98: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x215e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x215e9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x215E9Cu;
    {
        const bool branch_taken_0x215e9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e9c) {
            ctx->pc = 0x215EA8u;
            goto label_215ea8;
        }
    }
    ctx->pc = 0x215EA4u;
    // 0x215ea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x215ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ea8:
    // 0x215ea8: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x215EA8u;
    {
        const bool branch_taken_0x215ea8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x215ea8) {
            ctx->pc = 0x215EB4u;
            goto label_215eb4;
        }
    }
    ctx->pc = 0x215EB0u;
    // 0x215eb0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x215eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_215eb4:
    // 0x215eb4: 0x0  nop
    ctx->pc = 0x215eb4u;
    // NOP
    // 0x215eb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x215eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x215ebc: 0x28810007  slti        $at, $a0, 0x7
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x215ec0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x215EC0u;
    {
        const bool branch_taken_0x215ec0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x215ec0) {
            ctx->pc = 0x215ED0u;
            goto label_215ed0;
        }
    }
    ctx->pc = 0x215EC8u;
    // 0x215ec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x215EC8u;
    {
        const bool branch_taken_0x215ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215EC8u;
            // 0x215ecc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ec8) {
            ctx->pc = 0x215EE4u;
            goto label_215ee4;
        }
    }
    ctx->pc = 0x215ED0u;
label_215ed0:
    // 0x215ed0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x215ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_215ed4:
    // 0x215ed4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x215ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x215ed8: 0x8c6302b4  lw          $v1, 0x2B4($v1)
    ctx->pc = 0x215ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x215edc: 0x1060ffed  beqz        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x215EDCu;
    {
        const bool branch_taken_0x215edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215edc) {
            ctx->pc = 0x215E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215e94;
        }
    }
    ctx->pc = 0x215EE4u;
label_215ee4:
    // 0x215ee4: 0x0  nop
    ctx->pc = 0x215ee4u;
    // NOP
    // 0x215ee8: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x215EE8u;
    {
        const bool branch_taken_0x215ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x215EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215EE8u;
            // 0x215eec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ee8) {
            ctx->pc = 0x215EF8u;
            goto label_215ef8;
        }
    }
    ctx->pc = 0x215EF0u;
    // 0x215ef0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x215EF0u;
    SET_GPR_U32(ctx, 31, 0x215EF8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EF8u; }
        if (ctx->pc != 0x215EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215EF8u; }
        if (ctx->pc != 0x215EF8u) { return; }
    }
    ctx->pc = 0x215EF8u;
label_215ef8:
    // 0x215ef8: 0xa61202d8  sh          $s2, 0x2D8($s0)
    ctx->pc = 0x215ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 728), (uint16_t)GPR_U32(ctx, 18));
label_215efc:
    // 0x215efc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x215efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x215f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x215f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x215F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215F0Cu;
            // 0x215f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215F14u;
}
