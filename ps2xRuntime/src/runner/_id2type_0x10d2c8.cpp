#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _id2type
// Address: 0x10d2c8 - 0x10d4c4
void _id2type_0x10d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_id2type_0x10d2c8");
#endif

    switch (ctx->pc) {
        case 0x10d378u: goto label_10d378;
        default: break;
    }

    ctx->pc = 0x10d2c8u;

    // 0x10d2c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d2cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10d2d0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x10d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10d2d4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x10d2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x10d2d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10d2dc: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x10d2dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x10d2e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10d2e4: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x10d2e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x10d2e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10d2ec: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x10d2ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10d2f0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x10d2f0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x10d2f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10d2f8: 0x246304f8  addiu       $v1, $v1, 0x4F8
    ctx->pc = 0x10d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1272));
    // 0x10d2fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d300: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10d300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d304: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d308: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d310: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x10d310u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10d314: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x10d314u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x10d318: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x10d318u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x10d31c: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x10d31cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x10d320: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x10d320u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d324: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x10d324u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x10d328: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x10d328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d32c: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x10d32cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x10d330: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x10d330u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x10d334: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x10d334u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48416);
    // 0x10d338: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x10d338u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x10d33c: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x10d33cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48512);
    // 0x10d340: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x10d340u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x10d344: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x10d344u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48528);
    // 0x10d348: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x10d348u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x10d34c: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x10d34cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48544);
    // 0x10d350: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x10d350u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x10d354: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x10d354u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x10d358: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x10d358u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x10d35c: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x10d35cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x10d360: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x10d360u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x10d364: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x10d364u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x10d368: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x10d368u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x10d36c: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x10d36cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x10d370: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x10d370u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x10d374: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x10d374u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_10d378:
    // 0x10d378: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D378u;
    {
        const bool branch_taken_0x10d378 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x10D37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D378u;
            // 0x10d37c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d378) {
            ctx->pc = 0x10D3C0u;
            goto label_10d3c0;
        }
    }
    ctx->pc = 0x10D380u;
    // 0x10d380: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D380u;
    {
        const bool branch_taken_0x10d380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d380) {
            ctx->pc = 0x10D398u;
            goto label_10d398;
        }
    }
    ctx->pc = 0x10D388u;
    // 0x10d388: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x10D388u;
    {
        const bool branch_taken_0x10d388 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x10d388) {
            ctx->pc = 0x10D38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D388u;
            // 0x10d38c: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D42Cu;
            goto label_10d42c;
        }
    }
    ctx->pc = 0x10D390u;
    // 0x10d390: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10D390u;
    {
        const bool branch_taken_0x10d390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D390u;
            // 0x10d394: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d390) {
            ctx->pc = 0x10D484u;
            goto label_10d484;
        }
    }
    ctx->pc = 0x10D398u;
label_10d398:
    // 0x10d398: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x10D398u;
    {
        const bool branch_taken_0x10d398 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x10d398) {
            ctx->pc = 0x10D39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D398u;
            // 0x10d39c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D484u;
            goto label_10d484;
        }
    }
    ctx->pc = 0x10D3A0u;
    // 0x10d3a0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x10d3a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d3a4: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x10d3a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x10d3a8: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x10D3A8u;
    {
        const bool branch_taken_0x10d3a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d3a8) {
            ctx->pc = 0x10D3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3A8u;
            // 0x10d3ac: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D484u;
            goto label_10d484;
        }
    }
    ctx->pc = 0x10D3B0u;
    // 0x10d3b0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x10d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x10d3b4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x10d3b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d3b8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x10D3B8u;
    {
        const bool branch_taken_0x10d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3B8u;
            // 0x10d3bc: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3b8) {
            ctx->pc = 0x10D480u;
            goto label_10d480;
        }
    }
    ctx->pc = 0x10D3C0u;
label_10d3c0:
    // 0x10d3c0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x10d3c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d3c4: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x10d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
    // 0x10d3c8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10d3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10d3cc: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D3CCu;
    {
        const bool branch_taken_0x10d3cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3CCu;
            // 0x10d3d0: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3cc) {
            ctx->pc = 0x10D414u;
            goto label_10d414;
        }
    }
    ctx->pc = 0x10D3D4u;
    // 0x10d3d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D3D4u;
    {
        const bool branch_taken_0x10d3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d3d4) {
            ctx->pc = 0x10D3F4u;
            goto label_10d3f4;
        }
    }
    ctx->pc = 0x10D3DCu;
    // 0x10d3dc: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x10D3DCu;
    {
        const bool branch_taken_0x10d3dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x10D3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3DCu;
            // 0x10d3e0: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3dc) {
            ctx->pc = 0x10D40Cu;
            goto label_10d40c;
        }
    }
    ctx->pc = 0x10D3E4u;
    // 0x10d3e4: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x10D3E4u;
    {
        const bool branch_taken_0x10d3e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x10D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3E4u;
            // 0x10d3e8: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3e4) {
            ctx->pc = 0x10D414u;
            goto label_10d414;
        }
    }
    ctx->pc = 0x10D3ECu;
    // 0x10d3ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D3ECu;
    {
        const bool branch_taken_0x10d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3ECu;
            // 0x10d3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3ec) {
            ctx->pc = 0x10D41Cu;
            goto label_10d41c;
        }
    }
    ctx->pc = 0x10D3F4u;
label_10d3f4:
    // 0x10d3f4: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D3F4u;
    {
        const bool branch_taken_0x10d3f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x10D3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3F4u;
            // 0x10d3f8: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3f4) {
            ctx->pc = 0x10D418u;
            goto label_10d418;
        }
    }
    ctx->pc = 0x10D3FCu;
    // 0x10d3fc: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D3FCu;
    {
        const bool branch_taken_0x10d3fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x10D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3FCu;
            // 0x10d400: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3fc) {
            ctx->pc = 0x10D414u;
            goto label_10d414;
        }
    }
    ctx->pc = 0x10D404u;
    // 0x10d404: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10D404u;
    {
        const bool branch_taken_0x10d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D404u;
            // 0x10d408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d404) {
            ctx->pc = 0x10D41Cu;
            goto label_10d41c;
        }
    }
    ctx->pc = 0x10D40Cu;
label_10d40c:
    // 0x10d40c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D40Cu;
    {
        const bool branch_taken_0x10d40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D40Cu;
            // 0x10d410: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d40c) {
            ctx->pc = 0x10D41Cu;
            goto label_10d41c;
        }
    }
    ctx->pc = 0x10D414u;
label_10d414:
    // 0x10d414: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x10d414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
label_10d418:
    // 0x10d418: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10d41c:
    // 0x10d41c: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10D41Cu;
    {
        const bool branch_taken_0x10d41c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x10d41c) {
            ctx->pc = 0x10D420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D41Cu;
            // 0x10d420: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D484u;
            goto label_10d484;
        }
    }
    ctx->pc = 0x10D424u;
    // 0x10d424: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10D424u;
    {
        const bool branch_taken_0x10d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D424u;
            // 0x10d428: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d424) {
            ctx->pc = 0x10D46Cu;
            goto label_10d46c;
        }
    }
    ctx->pc = 0x10D42Cu;
label_10d42c:
    // 0x10d42c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x10d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x10d430: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10d434: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D434u;
    {
        const bool branch_taken_0x10d434 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d434) {
            ctx->pc = 0x10D448u;
            goto label_10d448;
        }
    }
    ctx->pc = 0x10D43Cu;
    // 0x10d43c: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x10d43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x10d440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10D440u;
    {
        const bool branch_taken_0x10d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D440u;
            // 0x10d444: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d440) {
            ctx->pc = 0x10D460u;
            goto label_10d460;
        }
    }
    ctx->pc = 0x10D448u;
label_10d448:
    // 0x10d448: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D448u;
    {
        const bool branch_taken_0x10d448 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x10D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D448u;
            // 0x10d44c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d448) {
            ctx->pc = 0x10D45Cu;
            goto label_10d45c;
        }
    }
    ctx->pc = 0x10D450u;
    // 0x10d450: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x10d450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x10d454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D454u;
    {
        const bool branch_taken_0x10d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D454u;
            // 0x10d458: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d454) {
            ctx->pc = 0x10D460u;
            goto label_10d460;
        }
    }
    ctx->pc = 0x10D45Cu;
label_10d45c:
    // 0x10d45c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d460:
    // 0x10d460: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D460u;
    {
        const bool branch_taken_0x10d460 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x10d460) {
            ctx->pc = 0x10D464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D460u;
            // 0x10d464: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D484u;
            goto label_10d484;
        }
    }
    ctx->pc = 0x10D468u;
    // 0x10d468: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x10d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_10d46c:
    // 0x10d46c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x10d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x10d470: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10d474: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10d474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10d478: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x10d478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d47c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_10d480:
    // 0x10d480: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x10d480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_10d484:
    // 0x10d484: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x10d484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x10d488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D488u;
    {
        const bool branch_taken_0x10d488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D488u;
            // 0x10d48c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d488) {
            ctx->pc = 0x10D498u;
            goto label_10d498;
        }
    }
    ctx->pc = 0x10D490u;
    // 0x10d490: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x10D490u;
    {
        const bool branch_taken_0x10d490 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d490) {
            ctx->pc = 0x10D494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D490u;
            // 0x10d494: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d378;
        }
    }
    ctx->pc = 0x10D498u;
label_10d498:
    // 0x10d498: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x10d498u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d49c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x10d49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4a0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10d4a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d4a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10d4a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d4a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10d4a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d4ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10d4acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d4b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d4b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D4BCu;
            // 0x10d4c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D4C4u;
}
