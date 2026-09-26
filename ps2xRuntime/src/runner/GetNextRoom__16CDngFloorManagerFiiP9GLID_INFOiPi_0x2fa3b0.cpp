#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextRoom__16CDngFloorManagerFiiP9GLID_INFOiPi
// Address: 0x2fa3b0 - 0x2fa4d4
void GetNextRoom__16CDngFloorManagerFiiP9GLID_INFOiPi_0x2fa3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextRoom__16CDngFloorManagerFiiP9GLID_INFOiPi_0x2fa3b0");
#endif

    switch (ctx->pc) {
        case 0x2fa3d8u: goto label_2fa3d8;
        case 0x2fa43cu: goto label_2fa43c;
        case 0x2fa464u: goto label_2fa464;
        case 0x2fa48cu: goto label_2fa48c;
        default: break;
    }

    ctx->pc = 0x2fa3b0u;

    // 0x2fa3b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fa3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fa3b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fa3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2fa3b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fa3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fa3bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fa3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fa3c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fa3c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa3c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa3c8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2fa3c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fa3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fa3d0: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA3D0u;
    SET_GPR_U32(ctx, 31, 0x2FA3D8u);
    ctx->pc = 0x2FA3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA3D0u;
            // 0x2fa3d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA3D8u; }
        if (ctx->pc != 0x2FA3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA3D8u; }
        if (ctx->pc != 0x2FA3D8u) { return; }
    }
    ctx->pc = 0x2FA3D8u;
label_2fa3d8:
    // 0x2fa3d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA3D8u;
    {
        const bool branch_taken_0x2fa3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3d8) {
            ctx->pc = 0x2FA3E8u;
            goto label_2fa3e8;
        }
    }
    ctx->pc = 0x2FA3E0u;
    // 0x2fa3e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FA3E0u;
    {
        const bool branch_taken_0x2fa3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA3E0u;
            // 0x2fa3e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3e0) {
            ctx->pc = 0x2FA4B8u;
            goto label_2fa4b8;
        }
    }
    ctx->pc = 0x2FA3E8u;
label_2fa3e8:
    // 0x2fa3e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2fa3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa3f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA3F0u;
    {
        const bool branch_taken_0x2fa3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FA3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA3F0u;
            // 0x2fa3f4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3f0) {
            ctx->pc = 0x2FA400u;
            goto label_2fa400;
        }
    }
    ctx->pc = 0x2FA3F8u;
    // 0x2fa3f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FA3F8u;
    {
        const bool branch_taken_0x2fa3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA3F8u;
            // 0x2fa3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3f8) {
            ctx->pc = 0x2FA4B8u;
            goto label_2fa4b8;
        }
    }
    ctx->pc = 0x2FA400u;
label_2fa400:
    // 0x2fa400: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fa400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fa404: 0x2484d190  addiu       $a0, $a0, -0x2E70
    ctx->pc = 0x2fa404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955408));
    // 0x2fa408: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fa408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fa40c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fa40cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa410: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fa410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa414: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x2fa414u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fa418: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2fa418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2fa41c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2fa41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fa420: 0x24490020  addiu       $t1, $v0, 0x20
    ctx->pc = 0x2fa420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2fa424: 0x24700050  addiu       $s0, $v1, 0x50
    ctx->pc = 0x2fa424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2fa428: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fa428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa42c: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x2fa42cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fa430: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x2fa430u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x2fa434: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x2fa434u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x2fa438: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x2fa438u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
label_2fa43c:
    // 0x2fa43c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fa43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fa440: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x2fa440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fa444: 0x0  nop
    ctx->pc = 0x2fa444u;
    // NOP
    // 0x2fa448: 0x0  nop
    ctx->pc = 0x2fa448u;
    // NOP
    // 0x2fa44c: 0x0  nop
    ctx->pc = 0x2fa44cu;
    // NOP
    // 0x2fa450: 0x0  nop
    ctx->pc = 0x2fa450u;
    // NOP
    // 0x2fa454: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FA454u;
    {
        const bool branch_taken_0x2fa454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa454) {
            ctx->pc = 0x2FA43Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa43c;
        }
    }
    ctx->pc = 0x2FA45Cu;
    // 0x2fa45c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fa45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa464:
    // 0x2fa464: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x2fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2fa468: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fa468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa46c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2fa46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2fa470: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2fa470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2fa474: 0x8465002e  lh          $a1, 0x2E($v1)
    ctx->pc = 0x2fa474u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2fa478: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x2fa478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2fa47c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA47Cu;
    {
        const bool branch_taken_0x2fa47c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa47c) {
            ctx->pc = 0x2FA4A4u;
            goto label_2fa4a4;
        }
    }
    ctx->pc = 0x2FA484u;
    // 0x2fa484: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA484u;
    SET_GPR_U32(ctx, 31, 0x2FA48Cu);
    ctx->pc = 0x2FA488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA484u;
            // 0x2fa488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA48Cu; }
        if (ctx->pc != 0x2FA48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA48Cu; }
        if (ctx->pc != 0x2FA48Cu) { return; }
    }
    ctx->pc = 0x2FA48Cu;
label_2fa48c:
    // 0x2fa48c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA48Cu;
    {
        const bool branch_taken_0x2fa48c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA48Cu;
            // 0x2fa490: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa48c) {
            ctx->pc = 0x2FA4B4u;
            goto label_2fa4b4;
        }
    }
    ctx->pc = 0x2FA494u;
    // 0x2fa494: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2fa494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2fa498: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fa498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa49c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA49Cu;
    {
        const bool branch_taken_0x2fa49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA49Cu;
            // 0x2fa4a0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa49c) {
            ctx->pc = 0x2FA4B4u;
            goto label_2fa4b4;
        }
    }
    ctx->pc = 0x2FA4A4u;
label_2fa4a4:
    // 0x2fa4a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fa4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fa4a8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2fa4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fa4ac: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2FA4ACu;
    {
        const bool branch_taken_0x2fa4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA4ACu;
            // 0x2fa4b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4ac) {
            ctx->pc = 0x2FA464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa464;
        }
    }
    ctx->pc = 0x2FA4B4u;
label_2fa4b4:
    // 0x2fa4b4: 0x0  nop
    ctx->pc = 0x2fa4b4u;
    // NOP
label_2fa4b8:
    // 0x2fa4b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fa4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa4bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fa4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa4c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fa4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa4c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa4c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA4CCu;
            // 0x2fa4d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA4D4u;
}
