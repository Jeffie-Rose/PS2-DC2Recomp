#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRot__10CEohMotherFiPf
// Address: 0x25e1c0 - 0x25e394
void GetRot__10CEohMotherFiPf_0x25e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRot__10CEohMotherFiPf_0x25e1c0");
#endif

    switch (ctx->pc) {
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e250u: goto label_25e250;
        case 0x25e254u: goto label_25e254;
        case 0x25e258u: goto label_25e258;
        case 0x25e25cu: goto label_25e25c;
        case 0x25e260u: goto label_25e260;
        case 0x25e264u: goto label_25e264;
        case 0x25e268u: goto label_25e268;
        case 0x25e26cu: goto label_25e26c;
        case 0x25e270u: goto label_25e270;
        case 0x25e274u: goto label_25e274;
        case 0x25e278u: goto label_25e278;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e280u: goto label_25e280;
        case 0x25e284u: goto label_25e284;
        case 0x25e288u: goto label_25e288;
        case 0x25e28cu: goto label_25e28c;
        case 0x25e290u: goto label_25e290;
        case 0x25e294u: goto label_25e294;
        case 0x25e298u: goto label_25e298;
        case 0x25e29cu: goto label_25e29c;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2a4u: goto label_25e2a4;
        case 0x25e2a8u: goto label_25e2a8;
        case 0x25e2acu: goto label_25e2ac;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2b8u: goto label_25e2b8;
        case 0x25e2bcu: goto label_25e2bc;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c4u: goto label_25e2c4;
        case 0x25e2c8u: goto label_25e2c8;
        case 0x25e2ccu: goto label_25e2cc;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2d4u: goto label_25e2d4;
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        default: break;
    }

    ctx->pc = 0x25e1c0u;

label_25e1c0:
    // 0x25e1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25e1c4:
    // 0x25e1c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_25e1c8:
    // 0x25e1c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25e1cc:
    // 0x25e1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25e1d0:
    // 0x25e1d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25e1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e1d4:
    // 0x25e1d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25e1d8:
    // 0x25e1d8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e1dc:
    if (ctx->pc == 0x25E1DCu) {
        ctx->pc = 0x25E1DCu;
            // 0x25e1dc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E1E0u;
        goto label_25e1e0;
    }
    ctx->pc = 0x25E1D8u;
    {
        const bool branch_taken_0x25e1d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E1D8u;
            // 0x25e1dc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1d8) {
            ctx->pc = 0x25E1ECu;
            goto label_25e1ec;
        }
    }
    ctx->pc = 0x25E1E0u;
label_25e1e0:
    // 0x25e1e0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e1e4:
    // 0x25e1e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e1e8:
    if (ctx->pc == 0x25E1E8u) {
        ctx->pc = 0x25E1E8u;
            // 0x25e1e8: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E1ECu;
        goto label_25e1ec;
    }
    ctx->pc = 0x25E1E4u;
    {
        const bool branch_taken_0x25e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E1E4u;
            // 0x25e1e8: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1e4) {
            ctx->pc = 0x25E1F4u;
            goto label_25e1f4;
        }
    }
    ctx->pc = 0x25E1ECu;
label_25e1ec:
    // 0x25e1ec: 0x10000063  b           . + 4 + (0x63 << 2)
label_25e1f0:
    if (ctx->pc == 0x25E1F0u) {
        ctx->pc = 0x25E1F0u;
            // 0x25e1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E1F4u;
        goto label_25e1f4;
    }
    ctx->pc = 0x25E1ECu;
    {
        const bool branch_taken_0x25e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E1ECu;
            // 0x25e1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1ec) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E1F4u;
label_25e1f4:
    // 0x25e1f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25e1f8:
    // 0x25e1f8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x25e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_25e1fc:
    // 0x25e1fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e200:
    // 0x25e200: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
label_25e204:
    if (ctx->pc == 0x25E204u) {
        ctx->pc = 0x25E204u;
            // 0x25e204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25E208u;
        goto label_25e208;
    }
    ctx->pc = 0x25E200u;
    {
        const bool branch_taken_0x25e200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E200u;
            // 0x25e204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e200) {
            ctx->pc = 0x25E334u;
            goto label_25e334;
        }
    }
    ctx->pc = 0x25E208u;
label_25e208:
    // 0x25e208: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_25e20c:
    if (ctx->pc == 0x25E20Cu) {
        ctx->pc = 0x25E20Cu;
            // 0x25e20c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25E210u;
        goto label_25e210;
    }
    ctx->pc = 0x25E208u;
    {
        const bool branch_taken_0x25e208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E208u;
            // 0x25e20c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e208) {
            ctx->pc = 0x25E300u;
            goto label_25e300;
        }
    }
    ctx->pc = 0x25E210u;
label_25e210:
    // 0x25e210: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_25e214:
    if (ctx->pc == 0x25E214u) {
        ctx->pc = 0x25E214u;
            // 0x25e214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E218u;
        goto label_25e218;
    }
    ctx->pc = 0x25E210u;
    {
        const bool branch_taken_0x25e210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E210u;
            // 0x25e214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e210) {
            ctx->pc = 0x25E2D4u;
            goto label_25e2d4;
        }
    }
    ctx->pc = 0x25E218u;
label_25e218:
    // 0x25e218: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_25e21c:
    if (ctx->pc == 0x25E21Cu) {
        ctx->pc = 0x25E220u;
        goto label_25e220;
    }
    ctx->pc = 0x25E218u;
    {
        const bool branch_taken_0x25e218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e218) {
            ctx->pc = 0x25E278u;
            goto label_25e278;
        }
    }
    ctx->pc = 0x25E220u;
label_25e220:
    // 0x25e220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25e224:
    if (ctx->pc == 0x25E224u) {
        ctx->pc = 0x25E228u;
        goto label_25e228;
    }
    ctx->pc = 0x25E220u;
    {
        const bool branch_taken_0x25e220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e220) {
            ctx->pc = 0x25E230u;
            goto label_25e230;
        }
    }
    ctx->pc = 0x25E228u;
label_25e228:
    // 0x25e228: 0x10000054  b           . + 4 + (0x54 << 2)
label_25e22c:
    if (ctx->pc == 0x25E22Cu) {
        ctx->pc = 0x25E22Cu;
            // 0x25e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E230u;
        goto label_25e230;
    }
    ctx->pc = 0x25E228u;
    {
        const bool branch_taken_0x25e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E228u;
            // 0x25e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e228) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E230u;
label_25e230:
    // 0x25e230: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e234:
    // 0x25e234: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e238:
    if (ctx->pc == 0x25E238u) {
        ctx->pc = 0x25E238u;
            // 0x25e238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E23Cu;
        goto label_25e23c;
    }
    ctx->pc = 0x25E234u;
    {
        const bool branch_taken_0x25e234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E234u;
            // 0x25e238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e234) {
            ctx->pc = 0x25E244u;
            goto label_25e244;
        }
    }
    ctx->pc = 0x25E23Cu;
label_25e23c:
    // 0x25e23c: 0x10000050  b           . + 4 + (0x50 << 2)
label_25e240:
    if (ctx->pc == 0x25E240u) {
        ctx->pc = 0x25E240u;
            // 0x25e240: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x25E244u;
        goto label_25e244;
    }
    ctx->pc = 0x25E23Cu;
    {
        const bool branch_taken_0x25e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E23Cu;
            // 0x25e240: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e23c) {
            ctx->pc = 0x25E380u;
            goto label_25e380;
        }
    }
    ctx->pc = 0x25E244u;
label_25e244:
    // 0x25e244: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e248:
    // 0x25e248: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x25e248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_25e24c:
    // 0x25e24c: 0x320f809  jalr        $t9
label_25e250:
    if (ctx->pc == 0x25E250u) {
        ctx->pc = 0x25E250u;
            // 0x25e250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E254u;
        goto label_25e254;
    }
    ctx->pc = 0x25E24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E254u);
        ctx->pc = 0x25E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E24Cu;
            // 0x25e250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E254u; }
            if (ctx->pc != 0x25E254u) { return; }
        }
        }
    }
    ctx->pc = 0x25E254u;
label_25e254:
    // 0x25e254: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25e258:
    // 0x25e258: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x25e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e25c:
    // 0x25e25c: 0xc420e444  lwc1        $f0, -0x1BBC($at)
    ctx->pc = 0x25e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e260:
    // 0x25e260: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x25e260u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25e264:
    // 0x25e264: 0xc04c374  jal         func_130DD0
label_25e268:
    if (ctx->pc == 0x25E268u) {
        ctx->pc = 0x25E268u;
            // 0x25e268: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->pc = 0x25E26Cu;
        goto label_25e26c;
    }
    ctx->pc = 0x25E264u;
    SET_GPR_U32(ctx, 31, 0x25E26Cu);
    ctx->pc = 0x25E268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E264u;
            // 0x25e268: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E26Cu; }
        if (ctx->pc != 0x25E26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E26Cu; }
        if (ctx->pc != 0x25E26Cu) { return; }
    }
    ctx->pc = 0x25E26Cu;
label_25e26c:
    // 0x25e26c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25e26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_25e270:
    // 0x25e270: 0x10000042  b           . + 4 + (0x42 << 2)
label_25e274:
    if (ctx->pc == 0x25E274u) {
        ctx->pc = 0x25E274u;
            // 0x25e274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E278u;
        goto label_25e278;
    }
    ctx->pc = 0x25E270u;
    {
        const bool branch_taken_0x25e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E270u;
            // 0x25e274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e270) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E278u;
label_25e278:
    // 0x25e278: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e27c:
    // 0x25e27c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e280:
    if (ctx->pc == 0x25E280u) {
        ctx->pc = 0x25E280u;
            // 0x25e280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E284u;
        goto label_25e284;
    }
    ctx->pc = 0x25E27Cu;
    {
        const bool branch_taken_0x25e27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E27Cu;
            // 0x25e280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e27c) {
            ctx->pc = 0x25E28Cu;
            goto label_25e28c;
        }
    }
    ctx->pc = 0x25E284u;
label_25e284:
    // 0x25e284: 0x1000003d  b           . + 4 + (0x3D << 2)
label_25e288:
    if (ctx->pc == 0x25E288u) {
        ctx->pc = 0x25E28Cu;
        goto label_25e28c;
    }
    ctx->pc = 0x25E284u;
    {
        const bool branch_taken_0x25e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e284) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E28Cu;
label_25e28c:
    // 0x25e28c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e290:
    // 0x25e290: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x25e290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_25e294:
    // 0x25e294: 0x320f809  jalr        $t9
label_25e298:
    if (ctx->pc == 0x25E298u) {
        ctx->pc = 0x25E298u;
            // 0x25e298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E29Cu;
        goto label_25e29c;
    }
    ctx->pc = 0x25E294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E29Cu);
        ctx->pc = 0x25E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E294u;
            // 0x25e298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E29Cu; }
            if (ctx->pc != 0x25E29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E29Cu;
label_25e29c:
    // 0x25e29c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x25e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_25e2a0:
    // 0x25e2a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25e2a4:
    // 0x25e2a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25e2a8:
    if (ctx->pc == 0x25E2A8u) {
        ctx->pc = 0x25E2A8u;
            // 0x25e2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E2ACu;
        goto label_25e2ac;
    }
    ctx->pc = 0x25E2A4u;
    {
        const bool branch_taken_0x25e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E2A4u;
            // 0x25e2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2a4) {
            ctx->pc = 0x25E2CCu;
            goto label_25e2cc;
        }
    }
    ctx->pc = 0x25E2ACu;
label_25e2ac:
    // 0x25e2ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25e2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25e2b0:
    // 0x25e2b0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x25e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e2b4:
    // 0x25e2b4: 0xc420e444  lwc1        $f0, -0x1BBC($at)
    ctx->pc = 0x25e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e2b8:
    // 0x25e2b8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x25e2b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25e2bc:
    // 0x25e2bc: 0xc04c374  jal         func_130DD0
label_25e2c0:
    if (ctx->pc == 0x25E2C0u) {
        ctx->pc = 0x25E2C0u;
            // 0x25e2c0: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->pc = 0x25E2C4u;
        goto label_25e2c4;
    }
    ctx->pc = 0x25E2BCu;
    SET_GPR_U32(ctx, 31, 0x25E2C4u);
    ctx->pc = 0x25E2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E2BCu;
            // 0x25e2c0: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E2C4u; }
        if (ctx->pc != 0x25E2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E2C4u; }
        if (ctx->pc != 0x25E2C4u) { return; }
    }
    ctx->pc = 0x25E2C4u;
label_25e2c4:
    // 0x25e2c4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25e2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_25e2c8:
    // 0x25e2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e2cc:
    // 0x25e2cc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_25e2d0:
    if (ctx->pc == 0x25E2D0u) {
        ctx->pc = 0x25E2D4u;
        goto label_25e2d4;
    }
    ctx->pc = 0x25E2CCu;
    {
        const bool branch_taken_0x25e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2cc) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E2D4u;
label_25e2d4:
    // 0x25e2d4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e2d8:
    // 0x25e2d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e2dc:
    if (ctx->pc == 0x25E2DCu) {
        ctx->pc = 0x25E2DCu;
            // 0x25e2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E2E0u;
        goto label_25e2e0;
    }
    ctx->pc = 0x25E2D8u;
    {
        const bool branch_taken_0x25e2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E2D8u;
            // 0x25e2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2d8) {
            ctx->pc = 0x25E2E8u;
            goto label_25e2e8;
        }
    }
    ctx->pc = 0x25E2E0u;
label_25e2e0:
    // 0x25e2e0: 0x10000026  b           . + 4 + (0x26 << 2)
label_25e2e4:
    if (ctx->pc == 0x25E2E4u) {
        ctx->pc = 0x25E2E8u;
        goto label_25e2e8;
    }
    ctx->pc = 0x25E2E0u;
    {
        const bool branch_taken_0x25e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2e0) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E2E8u;
label_25e2e8:
    // 0x25e2e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e2ec:
    // 0x25e2ec: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x25e2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_25e2f0:
    // 0x25e2f0: 0x320f809  jalr        $t9
label_25e2f4:
    if (ctx->pc == 0x25E2F4u) {
        ctx->pc = 0x25E2F4u;
            // 0x25e2f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E2F8u;
        goto label_25e2f8;
    }
    ctx->pc = 0x25E2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E2F8u);
        ctx->pc = 0x25E2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E2F0u;
            // 0x25e2f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E2F8u; }
            if (ctx->pc != 0x25E2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x25E2F8u;
label_25e2f8:
    // 0x25e2f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_25e2fc:
    if (ctx->pc == 0x25E2FCu) {
        ctx->pc = 0x25E2FCu;
            // 0x25e2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E300u;
        goto label_25e300;
    }
    ctx->pc = 0x25E2F8u;
    {
        const bool branch_taken_0x25e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E2F8u;
            // 0x25e2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2f8) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E300u;
label_25e300:
    // 0x25e300: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e304:
    // 0x25e304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e308:
    if (ctx->pc == 0x25E308u) {
        ctx->pc = 0x25E308u;
            // 0x25e308: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x25E30Cu;
        goto label_25e30c;
    }
    ctx->pc = 0x25E304u;
    {
        const bool branch_taken_0x25e304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E304u;
            // 0x25e308: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e304) {
            ctx->pc = 0x25E314u;
            goto label_25e314;
        }
    }
    ctx->pc = 0x25E30Cu;
label_25e30c:
    // 0x25e30c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_25e310:
    if (ctx->pc == 0x25E310u) {
        ctx->pc = 0x25E310u;
            // 0x25e310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E314u;
        goto label_25e314;
    }
    ctx->pc = 0x25E30Cu;
    {
        const bool branch_taken_0x25e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E30Cu;
            // 0x25e310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e30c) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E314u;
label_25e314:
    // 0x25e314: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x25e314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_25e318:
    // 0x25e318: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25e318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_25e31c:
    // 0x25e31c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x25e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_25e320:
    // 0x25e320: 0xc0a4314  jal         func_290C50
label_25e324:
    if (ctx->pc == 0x25E324u) {
        ctx->pc = 0x25E324u;
            // 0x25e324: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x25E328u;
        goto label_25e328;
    }
    ctx->pc = 0x25E320u;
    SET_GPR_U32(ctx, 31, 0x25E328u);
    ctx->pc = 0x25E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E320u;
            // 0x25e324: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290C50u;
    if (runtime->hasFunction(0x290C50u)) {
        auto targetFn = runtime->lookupFunction(0x290C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E328u; }
        if (ctx->pc != 0x25E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRotZ__13CEventSprite2Fv_0x290c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E328u; }
        if (ctx->pc != 0x25E328u) { return; }
    }
    ctx->pc = 0x25E328u;
label_25e328:
    // 0x25e328: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_25e32c:
    // 0x25e32c: 0x10000013  b           . + 4 + (0x13 << 2)
label_25e330:
    if (ctx->pc == 0x25E330u) {
        ctx->pc = 0x25E330u;
            // 0x25e330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E334u;
        goto label_25e334;
    }
    ctx->pc = 0x25E32Cu;
    {
        const bool branch_taken_0x25e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E32Cu;
            // 0x25e330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e32c) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E334u;
label_25e334:
    // 0x25e334: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25e334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e338:
    // 0x25e338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e33c:
    if (ctx->pc == 0x25E33Cu) {
        ctx->pc = 0x25E340u;
        goto label_25e340;
    }
    ctx->pc = 0x25E338u;
    {
        const bool branch_taken_0x25e338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e338) {
            ctx->pc = 0x25E348u;
            goto label_25e348;
        }
    }
    ctx->pc = 0x25E340u;
label_25e340:
    // 0x25e340: 0x1000000e  b           . + 4 + (0xE << 2)
label_25e344:
    if (ctx->pc == 0x25E344u) {
        ctx->pc = 0x25E344u;
            // 0x25e344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E348u;
        goto label_25e348;
    }
    ctx->pc = 0x25E340u;
    {
        const bool branch_taken_0x25e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E340u;
            // 0x25e344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e340) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E348u;
label_25e348:
    // 0x25e348: 0x78420190  lq          $v0, 0x190($v0)
    ctx->pc = 0x25e348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 400)));
label_25e34c:
    // 0x25e34c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x25e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_25e350:
    // 0x25e350: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25e354:
    // 0x25e354: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25e358:
    if (ctx->pc == 0x25E358u) {
        ctx->pc = 0x25E358u;
            // 0x25e358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E35Cu;
        goto label_25e35c;
    }
    ctx->pc = 0x25E354u;
    {
        const bool branch_taken_0x25e354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E354u;
            // 0x25e358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e354) {
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E35Cu;
label_25e35c:
    // 0x25e35c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25e35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25e360:
    // 0x25e360: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x25e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25e364:
    // 0x25e364: 0xc420e444  lwc1        $f0, -0x1BBC($at)
    ctx->pc = 0x25e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e368:
    // 0x25e368: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x25e368u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25e36c:
    // 0x25e36c: 0xc04c374  jal         func_130DD0
label_25e370:
    if (ctx->pc == 0x25E370u) {
        ctx->pc = 0x25E370u;
            // 0x25e370: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->pc = 0x25E374u;
        goto label_25e374;
    }
    ctx->pc = 0x25E36Cu;
    SET_GPR_U32(ctx, 31, 0x25E374u);
    ctx->pc = 0x25E370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E36Cu;
            // 0x25e370: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E374u; }
        if (ctx->pc != 0x25E374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E374u; }
        if (ctx->pc != 0x25E374u) { return; }
    }
    ctx->pc = 0x25E374u;
label_25e374:
    // 0x25e374: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25e374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_25e378:
    // 0x25e378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e37c:
    // 0x25e37c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25e37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e380:
    // 0x25e380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e384:
    // 0x25e384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e388:
    // 0x25e388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25e38c:
    // 0x25e38c: 0x3e00008  jr          $ra
label_25e390:
    if (ctx->pc == 0x25E390u) {
        ctx->pc = 0x25E390u;
            // 0x25e390: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x25E394u;
        goto label_fallthrough_0x25e38c;
    }
    ctx->pc = 0x25E38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E38Cu;
            // 0x25e390: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e38c:
    ctx->pc = 0x25E394u;
}
