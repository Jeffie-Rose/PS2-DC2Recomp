#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Format__18CMemoryCardManagerFv
// Address: 0x2f48e0 - 0x2f4a70
void Format__18CMemoryCardManagerFv_0x2f48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Format__18CMemoryCardManagerFv_0x2f48e0");
#endif

    switch (ctx->pc) {
        case 0x2f495cu: goto label_2f495c;
        case 0x2f4970u: goto label_2f4970;
        case 0x2f499cu: goto label_2f499c;
        case 0x2f49b8u: goto label_2f49b8;
        case 0x2f49e0u: goto label_2f49e0;
        case 0x2f4a14u: goto label_2f4a14;
        case 0x2f4a30u: goto label_2f4a30;
        default: break;
    }

    ctx->pc = 0x2f48e0u;

    // 0x2f48e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f48e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f48e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f48e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f48e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f48ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f48ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f48f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f48f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f48f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f48f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f48f8: 0x8c8404c8  lw          $a0, 0x4C8($a0)
    ctx->pc = 0x2f48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f48fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F48FCu;
    {
        const bool branch_taken_0x2f48fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F48FCu;
            // 0x2f4900: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48fc) {
            ctx->pc = 0x2F4914u;
            goto label_2f4914;
        }
    }
    ctx->pc = 0x2F4904u;
    // 0x2f4904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4908: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4908u;
    {
        const bool branch_taken_0x2f4908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F490Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4908u;
            // 0x2f490c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4908) {
            ctx->pc = 0x2F491Cu;
            goto label_2f491c;
        }
    }
    ctx->pc = 0x2F4910u;
    // 0x2f4910: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2f4910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f4914:
    // 0x2f4914: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f4914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f4918: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2f4918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f491c:
    // 0x2f491c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2f491cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f4920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f4924: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F4924u;
    {
        const bool branch_taken_0x2f4924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4924u;
            // 0x2f4928: 0x265104d0  addiu       $s1, $s2, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4924) {
            ctx->pc = 0x2F4A04u;
            goto label_2f4a04;
        }
    }
    ctx->pc = 0x2F492Cu;
    // 0x2f492c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4930: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F4930u;
    {
        const bool branch_taken_0x2f4930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4930u;
            // 0x2f4934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4930) {
            ctx->pc = 0x2F49D0u;
            goto label_2f49d0;
        }
    }
    ctx->pc = 0x2F4938u;
    // 0x2f4938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f493c: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F493Cu;
    {
        const bool branch_taken_0x2f493c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F4940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F493Cu;
            // 0x2f4940: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f493c) {
            ctx->pc = 0x2F4994u;
            goto label_2f4994;
        }
    }
    ctx->pc = 0x2F4944u;
    // 0x2f4944: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4944u;
    {
        const bool branch_taken_0x2f4944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4944u;
            // 0x2f4948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4944) {
            ctx->pc = 0x2F4954u;
            goto label_2f4954;
        }
    }
    ctx->pc = 0x2F494Cu;
    // 0x2f494c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2F494Cu;
    {
        const bool branch_taken_0x2f494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F494Cu;
            // 0x2f4950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f494c) {
            ctx->pc = 0x2F4A58u;
            goto label_2f4a58;
        }
    }
    ctx->pc = 0x2F4954u;
label_2f4954:
    // 0x2f4954: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4954u;
    SET_GPR_U32(ctx, 31, 0x2F495Cu);
    ctx->pc = 0x2F4958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4954u;
            // 0x2f4958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F495Cu; }
        if (ctx->pc != 0x2F495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F495Cu; }
        if (ctx->pc != 0x2F495Cu) { return; }
    }
    ctx->pc = 0x2F495Cu;
label_2f495c:
    // 0x2f495c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F495Cu;
    {
        const bool branch_taken_0x2f495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f495c) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F4964u;
    // 0x2f4964: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f4964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f4968: 0xc048d12  jal         func_123448
    ctx->pc = 0x2F4968u;
    SET_GPR_U32(ctx, 31, 0x2F4970u);
    ctx->pc = 0x2F496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4968u;
            // 0x2f496c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123448u;
    if (runtime->hasFunction(0x123448u)) {
        auto targetFn = runtime->lookupFunction(0x123448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4970u; }
        if (ctx->pc != 0x2F4970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcFormat_0x123448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4970u; }
        if (ctx->pc != 0x2F4970u) { return; }
    }
    ctx->pc = 0x2F4970u;
label_2f4970:
    // 0x2f4970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4970u;
    {
        const bool branch_taken_0x2f4970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4970u;
            // 0x2f4974: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4970) {
            ctx->pc = 0x2F4988u;
            goto label_2f4988;
        }
    }
    ctx->pc = 0x2F4978u;
    // 0x2f4978: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f497c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4980: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F4980u;
    {
        const bool branch_taken_0x2f4980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4980u;
            // 0x2f4984: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4980) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F4988u;
label_2f4988:
    // 0x2f4988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f498c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F498Cu;
    {
        const bool branch_taken_0x2f498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F498Cu;
            // 0x2f4990: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f498c) {
            ctx->pc = 0x2F4A58u;
            goto label_2f4a58;
        }
    }
    ctx->pc = 0x2F4994u;
label_2f4994:
    // 0x2f4994: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4994u;
    SET_GPR_U32(ctx, 31, 0x2F499Cu);
    ctx->pc = 0x2F4998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4994u;
            // 0x2f4998: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F499Cu; }
        if (ctx->pc != 0x2F499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F499Cu; }
        if (ctx->pc != 0x2F499Cu) { return; }
    }
    ctx->pc = 0x2F499Cu;
label_2f499c:
    // 0x2f499c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F499Cu;
    {
        const bool branch_taken_0x2f499c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f499c) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F49A4u;
    // 0x2f49a4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2f49a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2f49a8: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F49A8u;
    {
        const bool branch_taken_0x2f49a8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F49ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49A8u;
            // 0x2f49ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49a8) {
            ctx->pc = 0x2F49C0u;
            goto label_2f49c0;
        }
    }
    ctx->pc = 0x2F49B0u;
    // 0x2f49b0: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F49B0u;
    SET_GPR_U32(ctx, 31, 0x2F49B8u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F49B8u; }
        if (ctx->pc != 0x2F49B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F49B8u; }
        if (ctx->pc != 0x2F49B8u) { return; }
    }
    ctx->pc = 0x2F49B8u;
label_2f49b8:
    // 0x2f49b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2F49B8u;
    {
        const bool branch_taken_0x2f49b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49B8u;
            // 0x2f49bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49b8) {
            ctx->pc = 0x2F4A58u;
            goto label_2f4a58;
        }
    }
    ctx->pc = 0x2F49C0u;
label_2f49c0:
    // 0x2f49c0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f49c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f49c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F49C8u;
    {
        const bool branch_taken_0x2f49c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49C8u;
            // 0x2f49cc: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49c8) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F49D0u;
label_2f49d0:
    // 0x2f49d0: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x2f49d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2f49d4: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x2f49d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2f49d8: 0xc048bc8  jal         func_122F20
    ctx->pc = 0x2F49D8u;
    SET_GPR_U32(ctx, 31, 0x2F49E0u);
    ctx->pc = 0x2F49DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49D8u;
            // 0x2f49dc: 0x26080008  addiu       $t0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F20u;
    if (runtime->hasFunction(0x122F20u)) {
        auto targetFn = runtime->lookupFunction(0x122F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F49E0u; }
        if (ctx->pc != 0x2F49E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetInfo_0x122f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F49E0u; }
        if (ctx->pc != 0x2F49E0u) { return; }
    }
    ctx->pc = 0x2F49E0u;
label_2f49e0:
    // 0x2f49e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F49E0u;
    {
        const bool branch_taken_0x2f49e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F49E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49E0u;
            // 0x2f49e4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49e0) {
            ctx->pc = 0x2F49F8u;
            goto label_2f49f8;
        }
    }
    ctx->pc = 0x2F49E8u;
    // 0x2f49e8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f49ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f49f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F49F0u;
    {
        const bool branch_taken_0x2f49f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49F0u;
            // 0x2f49f4: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49f0) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F49F8u;
label_2f49f8:
    // 0x2f49f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f49fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F49FCu;
    {
        const bool branch_taken_0x2f49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49FCu;
            // 0x2f4a00: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49fc) {
            ctx->pc = 0x2F4A58u;
            goto label_2f4a58;
        }
    }
    ctx->pc = 0x2F4A04u;
label_2f4a04:
    // 0x2f4a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4a08: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2f4a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2f4a0c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A14u);
    ctx->pc = 0x2F4A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A0Cu;
            // 0x2f4a10: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4A14u; }
        if (ctx->pc != 0x2F4A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4A14u; }
        if (ctx->pc != 0x2F4A14u) { return; }
    }
    ctx->pc = 0x2F4A14u;
label_2f4a14:
    // 0x2f4a14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F4A14u;
    {
        const bool branch_taken_0x2f4a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a14) {
            ctx->pc = 0x2F4A54u;
            goto label_2f4a54;
        }
    }
    ctx->pc = 0x2F4A1Cu;
    // 0x2f4a1c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2f4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2f4a20: 0x4a1000a  bgez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4A20u;
    {
        const bool branch_taken_0x2f4a20 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A20u;
            // 0x2f4a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a20) {
            ctx->pc = 0x2F4A4Cu;
            goto label_2f4a4c;
        }
    }
    ctx->pc = 0x2F4A28u;
    // 0x2f4a28: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4A28u;
    SET_GPR_U32(ctx, 31, 0x2F4A30u);
    ctx->pc = 0x2F4A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A28u;
            // 0x2f4a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4A30u; }
        if (ctx->pc != 0x2F4A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4A30u; }
        if (ctx->pc != 0x2F4A30u) { return; }
    }
    ctx->pc = 0x2F4A30u;
label_2f4a30:
    // 0x2f4a30: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2f4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2f4a34: 0x2841fff7  slti        $at, $v0, -0x9
    ctx->pc = 0x2f4a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x2f4a38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4A38u;
    {
        const bool branch_taken_0x2f4a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A38u;
            // 0x2f4a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a38) {
            ctx->pc = 0x2F4A44u;
            goto label_2f4a44;
        }
    }
    ctx->pc = 0x2F4A40u;
    // 0x2f4a40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f4a44:
    // 0x2f4a44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4A44u;
    {
        const bool branch_taken_0x2f4a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A44u;
            // 0x2f4a48: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a44) {
            ctx->pc = 0x2F4A5Cu;
            goto label_2f4a5c;
        }
    }
    ctx->pc = 0x2F4A4Cu;
label_2f4a4c:
    // 0x2f4a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4A4Cu;
    {
        const bool branch_taken_0x2f4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A4Cu;
            // 0x2f4a50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a4c) {
            ctx->pc = 0x2F4A58u;
            goto label_2f4a58;
        }
    }
    ctx->pc = 0x2F4A54u;
label_2f4a54:
    // 0x2f4a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4a58:
    // 0x2f4a58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f4a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4a5c:
    // 0x2f4a5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f4a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4a68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A68u;
            // 0x2f4a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4A70u;
}
