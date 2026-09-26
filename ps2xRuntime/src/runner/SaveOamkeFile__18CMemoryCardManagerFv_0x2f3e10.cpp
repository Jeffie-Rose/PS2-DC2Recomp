#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveOamkeFile__18CMemoryCardManagerFv
// Address: 0x2f3e10 - 0x2f4304
void SaveOamkeFile__18CMemoryCardManagerFv_0x2f3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveOamkeFile__18CMemoryCardManagerFv_0x2f3e10");
#endif

    switch (ctx->pc) {
        case 0x2f3ec4u: goto label_2f3ec4;
        case 0x2f3ed0u: goto label_2f3ed0;
        case 0x2f3ef0u: goto label_2f3ef0;
        case 0x2f3f00u: goto label_2f3f00;
        case 0x2f3f0cu: goto label_2f3f0c;
        case 0x2f3f20u: goto label_2f3f20;
        case 0x2f3f48u: goto label_2f3f48;
        case 0x2f3f68u: goto label_2f3f68;
        case 0x2f3fb8u: goto label_2f3fb8;
        case 0x2f3fd0u: goto label_2f3fd0;
        case 0x2f3fecu: goto label_2f3fec;
        case 0x2f4008u: goto label_2f4008;
        case 0x2f402cu: goto label_2f402c;
        case 0x2f403cu: goto label_2f403c;
        case 0x2f4064u: goto label_2f4064;
        case 0x2f4074u: goto label_2f4074;
        case 0x2f40a4u: goto label_2f40a4;
        case 0x2f40d0u: goto label_2f40d0;
        case 0x2f40e8u: goto label_2f40e8;
        case 0x2f4104u: goto label_2f4104;
        case 0x2f4120u: goto label_2f4120;
        case 0x2f4148u: goto label_2f4148;
        case 0x2f4164u: goto label_2f4164;
        case 0x2f41a4u: goto label_2f41a4;
        case 0x2f41e4u: goto label_2f41e4;
        case 0x2f41f8u: goto label_2f41f8;
        case 0x2f4214u: goto label_2f4214;
        case 0x2f422cu: goto label_2f422c;
        case 0x2f423cu: goto label_2f423c;
        case 0x2f4244u: goto label_2f4244;
        case 0x2f4258u: goto label_2f4258;
        case 0x2f4274u: goto label_2f4274;
        case 0x2f4290u: goto label_2f4290;
        case 0x2f42a0u: goto label_2f42a0;
        case 0x2f42c0u: goto label_2f42c0;
        case 0x2f42dcu: goto label_2f42dc;
        default: break;
    }

    ctx->pc = 0x2f3e10u;

    // 0x2f3e10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f3e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f3e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3e24: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2f3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f3e28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E28u;
    {
        const bool branch_taken_0x2f3e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E28u;
            // 0x2f3e2c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e28) {
            ctx->pc = 0x2F3E3Cu;
            goto label_2f3e3c;
        }
    }
    ctx->pc = 0x2F3E30u;
    // 0x2f3e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3e34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E34u;
    {
        const bool branch_taken_0x2f3e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E34u;
            // 0x2f3e38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e34) {
            ctx->pc = 0x2F3E48u;
            goto label_2f3e48;
        }
    }
    ctx->pc = 0x2F3E3Cu;
label_2f3e3c:
    // 0x2f3e3c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f3e40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f3e44: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2f3e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f3e48:
    // 0x2f3e48: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2f3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f3e4c: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x2f3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x2f3e50: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2F3E50u;
    {
        const bool branch_taken_0x2f3e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E50u;
            // 0x2f3e54: 0x265104d0  addiu       $s1, $s2, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e50) {
            ctx->pc = 0x2F42B0u;
            goto label_2f42b0;
        }
    }
    ctx->pc = 0x2F3E58u;
    // 0x2f3e58: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2f3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2f3e5c: 0x10620102  beq         $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x2F3E5Cu;
    {
        const bool branch_taken_0x2f3e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E5Cu;
            // 0x2f3e60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e5c) {
            ctx->pc = 0x2F4268u;
            goto label_2f4268;
        }
    }
    ctx->pc = 0x2F3E64u;
    // 0x2f3e64: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x2f3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2f3e68: 0x106200e0  beq         $v1, $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2F3E68u;
    {
        const bool branch_taken_0x2f3e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E68u;
            // 0x2f3e6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e68) {
            ctx->pc = 0x2F41ECu;
            goto label_2f41ec;
        }
    }
    ctx->pc = 0x2F3E70u;
    // 0x2f3e70: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2f3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2f3e74: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2F3E74u;
    {
        const bool branch_taken_0x2f3e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E74u;
            // 0x2f3e78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e74) {
            ctx->pc = 0x2F413Cu;
            goto label_2f413c;
        }
    }
    ctx->pc = 0x2F3E7Cu;
    // 0x2f3e7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f3e80: 0x10620096  beq         $v1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2F3E80u;
    {
        const bool branch_taken_0x2f3e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E80u;
            // 0x2f3e84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e80) {
            ctx->pc = 0x2F40DCu;
            goto label_2f40dc;
        }
    }
    ctx->pc = 0x2F3E88u;
    // 0x2f3e88: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f3e8c: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F3E8Cu;
    {
        const bool branch_taken_0x2f3e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E8Cu;
            // 0x2f3e90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e8c) {
            ctx->pc = 0x2F4058u;
            goto label_2f4058;
        }
    }
    ctx->pc = 0x2F3E94u;
    // 0x2f3e94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3e98: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2F3E98u;
    {
        const bool branch_taken_0x2f3e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E98u;
            // 0x2f3e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e98) {
            ctx->pc = 0x2F3FC8u;
            goto label_2f3fc8;
        }
    }
    ctx->pc = 0x2F3EA0u;
    // 0x2f3ea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3ea4: 0x10640026  beq         $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F3EA4u;
    {
        const bool branch_taken_0x2f3ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F3EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EA4u;
            // 0x2f3ea8: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ea4) {
            ctx->pc = 0x2F3F40u;
            goto label_2f3f40;
        }
    }
    ctx->pc = 0x2F3EACu;
    // 0x2f3eac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3EACu;
    {
        const bool branch_taken_0x2f3eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EACu;
            // 0x2f3eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eac) {
            ctx->pc = 0x2F3EBCu;
            goto label_2f3ebc;
        }
    }
    ctx->pc = 0x2F3EB4u;
    // 0x2f3eb4: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2F3EB4u;
    {
        const bool branch_taken_0x2f3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EB4u;
            // 0x2f3eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eb4) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F3EBCu;
label_2f3ebc:
    // 0x2f3ebc: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3EBCu;
    SET_GPR_U32(ctx, 31, 0x2F3EC4u);
    ctx->pc = 0x2F3EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EBCu;
            // 0x2f3ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EC4u; }
        if (ctx->pc != 0x2F3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EC4u; }
        if (ctx->pc != 0x2F3EC4u) { return; }
    }
    ctx->pc = 0x2F3EC4u;
label_2f3ec4:
    // 0x2f3ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ec8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2F3EC8u;
    SET_GPR_U32(ctx, 31, 0x2F3ED0u);
    ctx->pc = 0x2F3ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EC8u;
            // 0x2f3ecc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3ED0u; }
        if (ctx->pc != 0x2F3ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3ED0u; }
        if (ctx->pc != 0x2F3ED0u) { return; }
    }
    ctx->pc = 0x2F3ED0u;
label_2f3ed0:
    // 0x2f3ed0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3ED0u;
    {
        const bool branch_taken_0x2f3ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3ED0u;
            // 0x2f3ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ed0) {
            ctx->pc = 0x2F3EE0u;
            goto label_2f3ee0;
        }
    }
    ctx->pc = 0x2F3ED8u;
    // 0x2f3ed8: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2F3ED8u;
    {
        const bool branch_taken_0x2f3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3ED8u;
            // 0x2f3edc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ed8) {
            ctx->pc = 0x2F42F0u;
            goto label_2f42f0;
        }
    }
    ctx->pc = 0x2F3EE0u;
label_2f3ee0:
    // 0x2f3ee0: 0x12000101  beqz        $s0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2F3EE0u;
    {
        const bool branch_taken_0x2f3ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EE0u;
            // 0x2f3ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ee0) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F3EE8u;
    // 0x2f3ee8: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F3EE8u;
    SET_GPR_U32(ctx, 31, 0x2F3EF0u);
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EF0u; }
        if (ctx->pc != 0x2F3EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EF0u; }
        if (ctx->pc != 0x2F3EF0u) { return; }
    }
    ctx->pc = 0x2F3EF0u;
label_2f3ef0:
    // 0x2f3ef0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f3ef4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3ef8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F3EF8u;
    SET_GPR_U32(ctx, 31, 0x2F3F00u);
    ctx->pc = 0x2F3EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3EF8u;
            // 0x2f3efc: 0x24a51930  addiu       $a1, $a1, 0x1930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F00u; }
        if (ctx->pc != 0x2F3F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F00u; }
        if (ctx->pc != 0x2F3F00u) { return; }
    }
    ctx->pc = 0x2F3F00u;
label_2f3f00:
    // 0x2f3f00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3f04: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F3F04u;
    SET_GPR_U32(ctx, 31, 0x2F3F0Cu);
    ctx->pc = 0x2F3F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F04u;
            // 0x2f3f08: 0x26450970  addiu       $a1, $s2, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F0Cu; }
        if (ctx->pc != 0x2F3F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F0Cu; }
        if (ctx->pc != 0x2F3F0Cu) { return; }
    }
    ctx->pc = 0x2F3F0Cu;
label_2f3f0c:
    // 0x2f3f0c: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f3f10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3f14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3f18: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F3F18u;
    SET_GPR_U32(ctx, 31, 0x2F3F20u);
    ctx->pc = 0x2F3F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F18u;
            // 0x2f3f1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F20u; }
        if (ctx->pc != 0x2F3F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F20u; }
        if (ctx->pc != 0x2F3F20u) { return; }
    }
    ctx->pc = 0x2F3F20u;
label_2f3f20:
    // 0x2f3f20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3F20u;
    {
        const bool branch_taken_0x2f3f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F20u;
            // 0x2f3f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f20) {
            ctx->pc = 0x2F3F38u;
            goto label_2f3f38;
        }
    }
    ctx->pc = 0x2F3F28u;
    // 0x2f3f28: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f3f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3f30: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x2F3F30u;
    {
        const bool branch_taken_0x2f3f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F30u;
            // 0x2f3f34: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f30) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F3F38u;
label_2f3f38:
    // 0x2f3f38: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x2F3F38u;
    {
        const bool branch_taken_0x2f3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f38) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F3F40u;
label_2f3f40:
    // 0x2f3f40: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3F40u;
    SET_GPR_U32(ctx, 31, 0x2F3F48u);
    ctx->pc = 0x2F3F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F40u;
            // 0x2f3f44: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F48u; }
        if (ctx->pc != 0x2F3F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F48u; }
        if (ctx->pc != 0x2F3F48u) { return; }
    }
    ctx->pc = 0x2F3F48u;
label_2f3f48:
    // 0x2f3f48: 0x104000e7  beqz        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2F3F48u;
    {
        const bool branch_taken_0x2f3f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f48) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F3F50u;
    // 0x2f3f50: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f3f54: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2f3f54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2f3f58: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3F58u;
    {
        const bool branch_taken_0x2f3f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F58u;
            // 0x2f3f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f58) {
            ctx->pc = 0x2F3F8Cu;
            goto label_2f3f8c;
        }
    }
    ctx->pc = 0x2F3F60u;
    // 0x2f3f60: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3F60u;
    SET_GPR_U32(ctx, 31, 0x2F3F68u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F68u; }
        if (ctx->pc != 0x2F3F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3F68u; }
        if (ctx->pc != 0x2F3F68u) { return; }
    }
    ctx->pc = 0x2F3F68u;
label_2f3f68:
    // 0x2f3f68: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2f3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f3f6c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2f3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2f3f70: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3F70u;
    {
        const bool branch_taken_0x2f3f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3F70u;
            // 0x2f3f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f70) {
            ctx->pc = 0x2F3F84u;
            goto label_2f3f84;
        }
    }
    ctx->pc = 0x2F3F78u;
    // 0x2f3f78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3f7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f3f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3f84:
    // 0x2f3f84: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2F3F84u;
    {
        const bool branch_taken_0x2f3f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f84) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F3F8Cu;
label_2f3f8c:
    // 0x2f3f8c: 0x8f829ef8  lw          $v0, -0x6108($gp)
    ctx->pc = 0x2f3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942456)));
    // 0x2f3f90: 0xae4204e8  sw          $v0, 0x4E8($s2)
    ctx->pc = 0x2f3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1256), GPR_U32(ctx, 2));
    // 0x2f3f94: 0xae40091c  sw          $zero, 0x91C($s2)
    ctx->pc = 0x2f3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2332), GPR_U32(ctx, 0));
    // 0x2f3f98: 0xae400910  sw          $zero, 0x910($s2)
    ctx->pc = 0x2f3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 0));
    // 0x2f3f9c: 0xae400914  sw          $zero, 0x914($s2)
    ctx->pc = 0x2f3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 0));
    // 0x2f3fa0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2f3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f3fa4: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2f3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x2f3fa8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f3fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f3fac: 0x8e460994  lw          $a2, 0x994($s2)
    ctx->pc = 0x2f3facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2452)));
    // 0x2f3fb0: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F3FB0u;
    SET_GPR_U32(ctx, 31, 0x2F3FB8u);
    ctx->pc = 0x2F3FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FB0u;
            // 0x2f3fb4: 0x8e4504e8  lw          $a1, 0x4E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FB8u; }
        if (ctx->pc != 0x2F3FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FB8u; }
        if (ctx->pc != 0x2F3FB8u) { return; }
    }
    ctx->pc = 0x2F3FB8u;
label_2f3fb8:
    // 0x2f3fb8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f3fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3fc0: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2F3FC0u;
    {
        const bool branch_taken_0x2f3fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FC0u;
            // 0x2f3fc4: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fc0) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F3FC8u;
label_2f3fc8:
    // 0x2f3fc8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2F3FC8u;
    SET_GPR_U32(ctx, 31, 0x2F3FD0u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FD0u; }
        if (ctx->pc != 0x2F3FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FD0u; }
        if (ctx->pc != 0x2F3FD0u) { return; }
    }
    ctx->pc = 0x2F3FD0u;
label_2f3fd0:
    // 0x2f3fd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3FD0u;
    {
        const bool branch_taken_0x2f3fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FD0u;
            // 0x2f3fd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fd0) {
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3FD8u;
    // 0x2f3fd8: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2F3FD8u;
    {
        const bool branch_taken_0x2f3fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FD8u;
            // 0x2f3fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fd8) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F3FE0u;
label_2f3fe0:
    // 0x2f3fe0: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f3fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f3fe4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3FE4u;
    SET_GPR_U32(ctx, 31, 0x2F3FECu);
    ctx->pc = 0x2F3FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FE4u;
            // 0x2f3fe8: 0x2646091c  addiu       $a2, $s2, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FECu; }
        if (ctx->pc != 0x2F3FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FECu; }
        if (ctx->pc != 0x2F3FECu) { return; }
    }
    ctx->pc = 0x2F3FECu;
label_2f3fec:
    // 0x2f3fec: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2F3FECu;
    {
        const bool branch_taken_0x2f3fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3fec) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F3FF4u;
    // 0x2f3ff4: 0x8e45091c  lw          $a1, 0x91C($s2)
    ctx->pc = 0x2f3ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2332)));
    // 0x2f3ff8: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3FF8u;
    {
        const bool branch_taken_0x2f3ff8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F3FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3FF8u;
            // 0x2f3ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ff8) {
            ctx->pc = 0x2F4010u;
            goto label_2f4010;
        }
    }
    ctx->pc = 0x2F4000u;
    // 0x2f4000: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4000u;
    SET_GPR_U32(ctx, 31, 0x2F4008u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4008u; }
        if (ctx->pc != 0x2F4008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4008u; }
        if (ctx->pc != 0x2F4008u) { return; }
    }
    ctx->pc = 0x2F4008u;
label_2f4008:
    // 0x2f4008: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2F4008u;
    {
        const bool branch_taken_0x2f4008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4008u;
            // 0x2f400c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4008) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F4010u;
label_2f4010:
    // 0x2f4010: 0x8e420994  lw          $v0, 0x994($s2)
    ctx->pc = 0x2f4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2452)));
    // 0x2f4014: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4014u;
    {
        const bool branch_taken_0x2f4014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4014u;
            // 0x2f4018: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4014) {
            ctx->pc = 0x2F4034u;
            goto label_2f4034;
        }
    }
    ctx->pc = 0x2F401Cu;
    // 0x2f401c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f401cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f4020: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f4020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f4024: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4024u;
    SET_GPR_U32(ctx, 31, 0x2F402Cu);
    ctx->pc = 0x2F4028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4024u;
            // 0x2f4028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F402Cu; }
        if (ctx->pc != 0x2F402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F402Cu; }
        if (ctx->pc != 0x2F402Cu) { return; }
    }
    ctx->pc = 0x2F402Cu;
label_2f402c:
    // 0x2f402c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2F402Cu;
    {
        const bool branch_taken_0x2f402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F402Cu;
            // 0x2f4030: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f402c) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F4034u;
label_2f4034:
    // 0x2f4034: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F4034u;
    SET_GPR_U32(ctx, 31, 0x2F403Cu);
    ctx->pc = 0x2F4038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4034u;
            // 0x2f4038: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F403Cu; }
        if (ctx->pc != 0x2F403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F403Cu; }
        if (ctx->pc != 0x2F403Cu) { return; }
    }
    ctx->pc = 0x2F403Cu;
label_2f403c:
    // 0x2f403c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F403Cu;
    {
        const bool branch_taken_0x2f403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F403Cu;
            // 0x2f4040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f403c) {
            ctx->pc = 0x2F4050u;
            goto label_2f4050;
        }
    }
    ctx->pc = 0x2F4044u;
    // 0x2f4044: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f4048: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2F4048u;
    {
        const bool branch_taken_0x2f4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4048u;
            // 0x2f404c: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4048) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F4050u;
label_2f4050:
    // 0x2f4050: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2F4050u;
    {
        const bool branch_taken_0x2f4050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4050) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F4058u;
label_2f4058:
    // 0x2f4058: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f405c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F405Cu;
    SET_GPR_U32(ctx, 31, 0x2F4064u);
    ctx->pc = 0x2F4060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F405Cu;
            // 0x2f4060: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4064u; }
        if (ctx->pc != 0x2F4064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4064u; }
        if (ctx->pc != 0x2F4064u) { return; }
    }
    ctx->pc = 0x2F4064u;
label_2f4064:
    // 0x2f4064: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2F4064u;
    {
        const bool branch_taken_0x2f4064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4064) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F406Cu;
    // 0x2f406c: 0xc064224  jal         func_190890
    ctx->pc = 0x2F406Cu;
    SET_GPR_U32(ctx, 31, 0x2F4074u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4074u; }
        if (ctx->pc != 0x2F4074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4074u; }
        if (ctx->pc != 0x2F4074u) { return; }
    }
    ctx->pc = 0x2F4074u;
label_2f4074:
    // 0x2f4074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4078: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4078u;
    {
        const bool branch_taken_0x2f4078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4078u;
            // 0x2f407c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4078) {
            ctx->pc = 0x2F4088u;
            goto label_2f4088;
        }
    }
    ctx->pc = 0x2F4080u;
    // 0x2f4080: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2F4080u;
    {
        const bool branch_taken_0x2f4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4080) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F4088u;
label_2f4088:
    // 0x2f4088: 0xae400910  sw          $zero, 0x910($s2)
    ctx->pc = 0x2f4088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 0));
    // 0x2f408c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4090: 0xae400914  sw          $zero, 0x914($s2)
    ctx->pc = 0x2f4090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 0));
    // 0x2f4094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4098: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2f4098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f409c: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2F409Cu;
    SET_GPR_U32(ctx, 31, 0x2F40A4u);
    ctx->pc = 0x2F40A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F409Cu;
            // 0x2f40a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F40A4u; }
        if (ctx->pc != 0x2F40A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F40A4u; }
        if (ctx->pc != 0x2F40A4u) { return; }
    }
    ctx->pc = 0x2F40A4u;
label_2f40a4:
    // 0x2f40a4: 0xae420918  sw          $v0, 0x918($s2)
    ctx->pc = 0x2f40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2328), GPR_U32(ctx, 2));
    // 0x2f40a8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2f40a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2f40ac: 0xae40091c  sw          $zero, 0x91C($s2)
    ctx->pc = 0x2f40acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2332), GPR_U32(ctx, 0));
    // 0x2f40b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f40b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f40b4: 0xae400910  sw          $zero, 0x910($s2)
    ctx->pc = 0x2f40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 0));
    // 0x2f40b8: 0x24c61950  addiu       $a2, $a2, 0x1950
    ctx->pc = 0x2f40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6480));
    // 0x2f40bc: 0xae400914  sw          $zero, 0x914($s2)
    ctx->pc = 0x2f40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 0));
    // 0x2f40c0: 0xae5004e4  sw          $s0, 0x4E4($s2)
    ctx->pc = 0x2f40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 16));
    // 0x2f40c4: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f40c8: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F40C8u;
    SET_GPR_U32(ctx, 31, 0x2F40D0u);
    ctx->pc = 0x2F40CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F40C8u;
            // 0x2f40cc: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F40D0u; }
        if (ctx->pc != 0x2F40D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F40D0u; }
        if (ctx->pc != 0x2F40D0u) { return; }
    }
    ctx->pc = 0x2F40D0u;
label_2f40d0:
    // 0x2f40d0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f40d4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2F40D4u;
    {
        const bool branch_taken_0x2f40d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F40D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F40D4u;
            // 0x2f40d8: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40d4) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F40DCu;
label_2f40dc:
    // 0x2f40dc: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f40dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f40e0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F40E0u;
    SET_GPR_U32(ctx, 31, 0x2F40E8u);
    ctx->pc = 0x2F40E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F40E0u;
            // 0x2f40e4: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F40E8u; }
        if (ctx->pc != 0x2F40E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F40E8u; }
        if (ctx->pc != 0x2F40E8u) { return; }
    }
    ctx->pc = 0x2F40E8u;
label_2f40e8:
    // 0x2f40e8: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2F40E8u;
    {
        const bool branch_taken_0x2f40e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f40e8) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F40F0u;
    // 0x2f40f0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f40f4: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F40F4u;
    {
        const bool branch_taken_0x2f40f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F40F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F40F4u;
            // 0x2f40f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40f4) {
            ctx->pc = 0x2F410Cu;
            goto label_2f410c;
        }
    }
    ctx->pc = 0x2F40FCu;
    // 0x2f40fc: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F40FCu;
    SET_GPR_U32(ctx, 31, 0x2F4104u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4104u; }
        if (ctx->pc != 0x2F4104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4104u; }
        if (ctx->pc != 0x2F4104u) { return; }
    }
    ctx->pc = 0x2F4104u;
label_2f4104:
    // 0x2f4104: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2F4104u;
    {
        const bool branch_taken_0x2f4104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4104u;
            // 0x2f4108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4104) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F410Cu;
label_2f410c:
    // 0x2f410c: 0xae45005c  sw          $a1, 0x5C($s2)
    ctx->pc = 0x2f410cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 5));
    // 0x2f4110: 0x8e4504e4  lw          $a1, 0x4E4($s2)
    ctx->pc = 0x2f4110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1252)));
    // 0x2f4114: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f4114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f4118: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F4118u;
    SET_GPR_U32(ctx, 31, 0x2F4120u);
    ctx->pc = 0x2F411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4118u;
            // 0x2f411c: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4120u; }
        if (ctx->pc != 0x2F4120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4120u; }
        if (ctx->pc != 0x2F4120u) { return; }
    }
    ctx->pc = 0x2F4120u;
label_2f4120:
    // 0x2f4120: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4120u;
    {
        const bool branch_taken_0x2f4120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4120u;
            // 0x2f4124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4120) {
            ctx->pc = 0x2F4134u;
            goto label_2f4134;
        }
    }
    ctx->pc = 0x2F4128u;
    // 0x2f4128: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2f4128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2f412c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2F412Cu;
    {
        const bool branch_taken_0x2f412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F412Cu;
            // 0x2f4130: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f412c) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F4134u;
label_2f4134:
    // 0x2f4134: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2F4134u;
    {
        const bool branch_taken_0x2f4134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4134) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F413Cu;
label_2f413c:
    // 0x2f413c: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f4140: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4140u;
    SET_GPR_U32(ctx, 31, 0x2F4148u);
    ctx->pc = 0x2F4144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4140u;
            // 0x2f4144: 0x2646091c  addiu       $a2, $s2, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4148u; }
        if (ctx->pc != 0x2F4148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4148u; }
        if (ctx->pc != 0x2F4148u) { return; }
    }
    ctx->pc = 0x2F4148u;
label_2f4148:
    // 0x2f4148: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2F4148u;
    {
        const bool branch_taken_0x2f4148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4148) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F4150u;
    // 0x2f4150: 0x8e45091c  lw          $a1, 0x91C($s2)
    ctx->pc = 0x2f4150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2332)));
    // 0x2f4154: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4154u;
    {
        const bool branch_taken_0x2f4154 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4154u;
            // 0x2f4158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4154) {
            ctx->pc = 0x2F416Cu;
            goto label_2f416c;
        }
    }
    ctx->pc = 0x2F415Cu;
    // 0x2f415c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F415Cu;
    SET_GPR_U32(ctx, 31, 0x2F4164u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4164u; }
        if (ctx->pc != 0x2F4164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4164u; }
        if (ctx->pc != 0x2F4164u) { return; }
    }
    ctx->pc = 0x2F4164u;
label_2f4164:
    // 0x2f4164: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2F4164u;
    {
        const bool branch_taken_0x2f4164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4164u;
            // 0x2f4168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4164) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F416Cu;
label_2f416c:
    // 0x2f416c: 0x8e420910  lw          $v0, 0x910($s2)
    ctx->pc = 0x2f416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2320)));
    // 0x2f4170: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f4174: 0xae420910  sw          $v0, 0x910($s2)
    ctx->pc = 0x2f4174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2320), GPR_U32(ctx, 2));
    // 0x2f4178: 0x8e430914  lw          $v1, 0x914($s2)
    ctx->pc = 0x2f4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2324)));
    // 0x2f417c: 0x8e42091c  lw          $v0, 0x91C($s2)
    ctx->pc = 0x2f417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2332)));
    // 0x2f4180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4184: 0xae420914  sw          $v0, 0x914($s2)
    ctx->pc = 0x2f4184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 2));
    // 0x2f4188: 0x8e430910  lw          $v1, 0x910($s2)
    ctx->pc = 0x2f4188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2320)));
    // 0x2f418c: 0x8e440918  lw          $a0, 0x918($s2)
    ctx->pc = 0x2f418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2328)));
    // 0x2f4190: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2f4190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f4194: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F4194u;
    {
        const bool branch_taken_0x2f4194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4194u;
            // 0x2f4198: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4194) {
            ctx->pc = 0x2F41C4u;
            goto label_2f41c4;
        }
    }
    ctx->pc = 0x2F419Cu;
    // 0x2f419c: 0xc048d8e  jal         func_123638
    ctx->pc = 0x2F419Cu;
    SET_GPR_U32(ctx, 31, 0x2F41A4u);
    ctx->pc = 0x2F41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F419Cu;
            // 0x2f41a0: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123638u;
    if (runtime->hasFunction(0x123638u)) {
        auto targetFn = runtime->lookupFunction(0x123638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F41A4u; }
        if (ctx->pc != 0x2F41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcFlush_0x123638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F41A4u; }
        if (ctx->pc != 0x2F41A4u) { return; }
    }
    ctx->pc = 0x2F41A4u;
label_2f41a4:
    // 0x2f41a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F41A4u;
    {
        const bool branch_taken_0x2f41a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F41A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F41A4u;
            // 0x2f41a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41a4) {
            ctx->pc = 0x2F41BCu;
            goto label_2f41bc;
        }
    }
    ctx->pc = 0x2F41ACu;
    // 0x2f41ac: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f41b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f41b4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2F41B4u;
    {
        const bool branch_taken_0x2f41b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F41B4u;
            // 0x2f41b8: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41b4) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F41BCu;
label_2f41bc:
    // 0x2f41bc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2F41BCu;
    {
        const bool branch_taken_0x2f41bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41bc) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F41C4u;
label_2f41c4:
    // 0x2f41c4: 0x28410c00  slti        $at, $v0, 0xC00
    ctx->pc = 0x2f41c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x2f41c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F41C8u;
    {
        const bool branch_taken_0x2f41c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F41C8u;
            // 0x2f41cc: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41c8) {
            ctx->pc = 0x2F41D4u;
            goto label_2f41d4;
        }
    }
    ctx->pc = 0x2F41D0u;
    // 0x2f41d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f41d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f41d4:
    // 0x2f41d4: 0x8e4204e4  lw          $v0, 0x4E4($s2)
    ctx->pc = 0x2f41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1252)));
    // 0x2f41d8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f41dc: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F41DCu;
    SET_GPR_U32(ctx, 31, 0x2F41E4u);
    ctx->pc = 0x2F41E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F41DCu;
            // 0x2f41e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F41E4u; }
        if (ctx->pc != 0x2F41E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F41E4u; }
        if (ctx->pc != 0x2F41E4u) { return; }
    }
    ctx->pc = 0x2F41E4u;
label_2f41e4:
    // 0x2f41e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F41E4u;
    {
        const bool branch_taken_0x2f41e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41e4) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F41ECu;
label_2f41ec:
    // 0x2f41ec: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f41ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f41f0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F41F0u;
    SET_GPR_U32(ctx, 31, 0x2F41F8u);
    ctx->pc = 0x2F41F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F41F0u;
            // 0x2f41f4: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F41F8u; }
        if (ctx->pc != 0x2F41F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F41F8u; }
        if (ctx->pc != 0x2F41F8u) { return; }
    }
    ctx->pc = 0x2F41F8u;
label_2f41f8:
    // 0x2f41f8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F41F8u;
    {
        const bool branch_taken_0x2f41f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41f8) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F4200u;
    // 0x2f4200: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f4200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f4204: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4204u;
    {
        const bool branch_taken_0x2f4204 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4204u;
            // 0x2f4208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4204) {
            ctx->pc = 0x2F421Cu;
            goto label_2f421c;
        }
    }
    ctx->pc = 0x2F420Cu;
    // 0x2f420c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F420Cu;
    SET_GPR_U32(ctx, 31, 0x2F4214u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4214u; }
        if (ctx->pc != 0x2F4214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4214u; }
        if (ctx->pc != 0x2F4214u) { return; }
    }
    ctx->pc = 0x2F4214u;
label_2f4214:
    // 0x2f4214: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2F4214u;
    {
        const bool branch_taken_0x2f4214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4214u;
            // 0x2f4218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4214) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F421Cu;
label_2f421c:
    // 0x2f421c: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f421cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f4220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4224: 0xc048a5c  jal         func_122970
    ctx->pc = 0x2F4224u;
    SET_GPR_U32(ctx, 31, 0x2F422Cu);
    ctx->pc = 0x2F4228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4224u;
            // 0x2f4228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F422Cu; }
        if (ctx->pc != 0x2F422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSeek_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F422Cu; }
        if (ctx->pc != 0x2F422Cu) { return; }
    }
    ctx->pc = 0x2F422Cu;
label_2f422c:
    // 0x2f422c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4234: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4234u;
    SET_GPR_U32(ctx, 31, 0x2F423Cu);
    ctx->pc = 0x2F4238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4234u;
            // 0x2f4238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F423Cu; }
        if (ctx->pc != 0x2F423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F423Cu; }
        if (ctx->pc != 0x2F423Cu) { return; }
    }
    ctx->pc = 0x2F423Cu;
label_2f423c:
    // 0x2f423c: 0xc064224  jal         func_190890
    ctx->pc = 0x2F423Cu;
    SET_GPR_U32(ctx, 31, 0x2F4244u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4244u; }
        if (ctx->pc != 0x2F4244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4244u; }
        if (ctx->pc != 0x2F4244u) { return; }
    }
    ctx->pc = 0x2F4244u;
label_2f4244:
    // 0x2f4244: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2f4244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f4248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f424c: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x2f424cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f4250: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F4250u;
    SET_GPR_U32(ctx, 31, 0x2F4258u);
    ctx->pc = 0x2F4254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4250u;
            // 0x2f4254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4258u; }
        if (ctx->pc != 0x2F4258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4258u; }
        if (ctx->pc != 0x2F4258u) { return; }
    }
    ctx->pc = 0x2F4258u;
label_2f4258:
    // 0x2f4258: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f425c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4260: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F4260u;
    {
        const bool branch_taken_0x2f4260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4260u;
            // 0x2f4264: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4260) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F4268u;
label_2f4268:
    // 0x2f4268: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f426c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F426Cu;
    SET_GPR_U32(ctx, 31, 0x2F4274u);
    ctx->pc = 0x2F4270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F426Cu;
            // 0x2f4270: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4274u; }
        if (ctx->pc != 0x2F4274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4274u; }
        if (ctx->pc != 0x2F4274u) { return; }
    }
    ctx->pc = 0x2F4274u;
label_2f4274:
    // 0x2f4274: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F4274u;
    {
        const bool branch_taken_0x2f4274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4274) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F427Cu;
    // 0x2f427c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f427cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f4280: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4280u;
    {
        const bool branch_taken_0x2f4280 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4280u;
            // 0x2f4284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4280) {
            ctx->pc = 0x2F4298u;
            goto label_2f4298;
        }
    }
    ctx->pc = 0x2F4288u;
    // 0x2f4288: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4288u;
    SET_GPR_U32(ctx, 31, 0x2F4290u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4290u; }
        if (ctx->pc != 0x2F4290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4290u; }
        if (ctx->pc != 0x2F4290u) { return; }
    }
    ctx->pc = 0x2F4290u;
label_2f4290:
    // 0x2f4290: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F4290u;
    {
        const bool branch_taken_0x2f4290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4290u;
            // 0x2f4294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4290) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F4298u;
label_2f4298:
    // 0x2f4298: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F4298u;
    SET_GPR_U32(ctx, 31, 0x2F42A0u);
    ctx->pc = 0x2F429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4298u;
            // 0x2f429c: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F42A0u; }
        if (ctx->pc != 0x2F42A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F42A0u; }
        if (ctx->pc != 0x2F42A0u) { return; }
    }
    ctx->pc = 0x2F42A0u;
label_2f42a0:
    // 0x2f42a0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f42a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f42a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F42A8u;
    {
        const bool branch_taken_0x2f42a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F42A8u;
            // 0x2f42ac: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42a8) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F42B0u;
label_2f42b0:
    // 0x2f42b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f42b4: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2f42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2f42b8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F42B8u;
    SET_GPR_U32(ctx, 31, 0x2F42C0u);
    ctx->pc = 0x2F42BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F42B8u;
            // 0x2f42bc: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F42C0u; }
        if (ctx->pc != 0x2F42C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F42C0u; }
        if (ctx->pc != 0x2F42C0u) { return; }
    }
    ctx->pc = 0x2F42C0u;
label_2f42c0:
    // 0x2f42c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F42C0u;
    {
        const bool branch_taken_0x2f42c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f42c0) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F42C8u;
    // 0x2f42c8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f42c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f42cc: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F42CCu;
    {
        const bool branch_taken_0x2f42cc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F42D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F42CCu;
            // 0x2f42d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42cc) {
            ctx->pc = 0x2F42E0u;
            goto label_2f42e0;
        }
    }
    ctx->pc = 0x2F42D4u;
    // 0x2f42d4: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F42D4u;
    SET_GPR_U32(ctx, 31, 0x2F42DCu);
    ctx->pc = 0x2F42D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F42D4u;
            // 0x2f42d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F42DCu; }
        if (ctx->pc != 0x2F42DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F42DCu; }
        if (ctx->pc != 0x2F42DCu) { return; }
    }
    ctx->pc = 0x2F42DCu;
label_2f42dc:
    // 0x2f42dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f42e0:
    // 0x2f42e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F42E0u;
    {
        const bool branch_taken_0x2f42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f42e0) {
            ctx->pc = 0x2F42ECu;
            goto label_2f42ec;
        }
    }
    ctx->pc = 0x2F42E8u;
label_2f42e8:
    // 0x2f42e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f42e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f42ec:
    // 0x2f42ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f42ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f42f0:
    // 0x2f42f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f42f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f42f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f42f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f42f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f42f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f42fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F42FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F42FCu;
            // 0x2f4300: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4304u;
}
