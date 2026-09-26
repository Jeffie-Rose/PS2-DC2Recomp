#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetItemEffect__13CMenuItemInfoFv
// Address: 0x24d110 - 0x24d51c
void SetItemEffect__13CMenuItemInfoFv_0x24d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetItemEffect__13CMenuItemInfoFv_0x24d110");
#endif

    switch (ctx->pc) {
        case 0x24d110u: goto label_24d110;
        case 0x24d114u: goto label_24d114;
        case 0x24d118u: goto label_24d118;
        case 0x24d11cu: goto label_24d11c;
        case 0x24d120u: goto label_24d120;
        case 0x24d124u: goto label_24d124;
        case 0x24d128u: goto label_24d128;
        case 0x24d12cu: goto label_24d12c;
        case 0x24d130u: goto label_24d130;
        case 0x24d134u: goto label_24d134;
        case 0x24d138u: goto label_24d138;
        case 0x24d13cu: goto label_24d13c;
        case 0x24d140u: goto label_24d140;
        case 0x24d144u: goto label_24d144;
        case 0x24d148u: goto label_24d148;
        case 0x24d14cu: goto label_24d14c;
        case 0x24d150u: goto label_24d150;
        case 0x24d154u: goto label_24d154;
        case 0x24d158u: goto label_24d158;
        case 0x24d15cu: goto label_24d15c;
        case 0x24d160u: goto label_24d160;
        case 0x24d164u: goto label_24d164;
        case 0x24d168u: goto label_24d168;
        case 0x24d16cu: goto label_24d16c;
        case 0x24d170u: goto label_24d170;
        case 0x24d174u: goto label_24d174;
        case 0x24d178u: goto label_24d178;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d180u: goto label_24d180;
        case 0x24d184u: goto label_24d184;
        case 0x24d188u: goto label_24d188;
        case 0x24d18cu: goto label_24d18c;
        case 0x24d190u: goto label_24d190;
        case 0x24d194u: goto label_24d194;
        case 0x24d198u: goto label_24d198;
        case 0x24d19cu: goto label_24d19c;
        case 0x24d1a0u: goto label_24d1a0;
        case 0x24d1a4u: goto label_24d1a4;
        case 0x24d1a8u: goto label_24d1a8;
        case 0x24d1acu: goto label_24d1ac;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1b4u: goto label_24d1b4;
        case 0x24d1b8u: goto label_24d1b8;
        case 0x24d1bcu: goto label_24d1bc;
        case 0x24d1c0u: goto label_24d1c0;
        case 0x24d1c4u: goto label_24d1c4;
        case 0x24d1c8u: goto label_24d1c8;
        case 0x24d1ccu: goto label_24d1cc;
        case 0x24d1d0u: goto label_24d1d0;
        case 0x24d1d4u: goto label_24d1d4;
        case 0x24d1d8u: goto label_24d1d8;
        case 0x24d1dcu: goto label_24d1dc;
        case 0x24d1e0u: goto label_24d1e0;
        case 0x24d1e4u: goto label_24d1e4;
        case 0x24d1e8u: goto label_24d1e8;
        case 0x24d1ecu: goto label_24d1ec;
        case 0x24d1f0u: goto label_24d1f0;
        case 0x24d1f4u: goto label_24d1f4;
        case 0x24d1f8u: goto label_24d1f8;
        case 0x24d1fcu: goto label_24d1fc;
        case 0x24d200u: goto label_24d200;
        case 0x24d204u: goto label_24d204;
        case 0x24d208u: goto label_24d208;
        case 0x24d20cu: goto label_24d20c;
        case 0x24d210u: goto label_24d210;
        case 0x24d214u: goto label_24d214;
        case 0x24d218u: goto label_24d218;
        case 0x24d21cu: goto label_24d21c;
        case 0x24d220u: goto label_24d220;
        case 0x24d224u: goto label_24d224;
        case 0x24d228u: goto label_24d228;
        case 0x24d22cu: goto label_24d22c;
        case 0x24d230u: goto label_24d230;
        case 0x24d234u: goto label_24d234;
        case 0x24d238u: goto label_24d238;
        case 0x24d23cu: goto label_24d23c;
        case 0x24d240u: goto label_24d240;
        case 0x24d244u: goto label_24d244;
        case 0x24d248u: goto label_24d248;
        case 0x24d24cu: goto label_24d24c;
        case 0x24d250u: goto label_24d250;
        case 0x24d254u: goto label_24d254;
        case 0x24d258u: goto label_24d258;
        case 0x24d25cu: goto label_24d25c;
        case 0x24d260u: goto label_24d260;
        case 0x24d264u: goto label_24d264;
        case 0x24d268u: goto label_24d268;
        case 0x24d26cu: goto label_24d26c;
        case 0x24d270u: goto label_24d270;
        case 0x24d274u: goto label_24d274;
        case 0x24d278u: goto label_24d278;
        case 0x24d27cu: goto label_24d27c;
        case 0x24d280u: goto label_24d280;
        case 0x24d284u: goto label_24d284;
        case 0x24d288u: goto label_24d288;
        case 0x24d28cu: goto label_24d28c;
        case 0x24d290u: goto label_24d290;
        case 0x24d294u: goto label_24d294;
        case 0x24d298u: goto label_24d298;
        case 0x24d29cu: goto label_24d29c;
        case 0x24d2a0u: goto label_24d2a0;
        case 0x24d2a4u: goto label_24d2a4;
        case 0x24d2a8u: goto label_24d2a8;
        case 0x24d2acu: goto label_24d2ac;
        case 0x24d2b0u: goto label_24d2b0;
        case 0x24d2b4u: goto label_24d2b4;
        case 0x24d2b8u: goto label_24d2b8;
        case 0x24d2bcu: goto label_24d2bc;
        case 0x24d2c0u: goto label_24d2c0;
        case 0x24d2c4u: goto label_24d2c4;
        case 0x24d2c8u: goto label_24d2c8;
        case 0x24d2ccu: goto label_24d2cc;
        case 0x24d2d0u: goto label_24d2d0;
        case 0x24d2d4u: goto label_24d2d4;
        case 0x24d2d8u: goto label_24d2d8;
        case 0x24d2dcu: goto label_24d2dc;
        case 0x24d2e0u: goto label_24d2e0;
        case 0x24d2e4u: goto label_24d2e4;
        case 0x24d2e8u: goto label_24d2e8;
        case 0x24d2ecu: goto label_24d2ec;
        case 0x24d2f0u: goto label_24d2f0;
        case 0x24d2f4u: goto label_24d2f4;
        case 0x24d2f8u: goto label_24d2f8;
        case 0x24d2fcu: goto label_24d2fc;
        case 0x24d300u: goto label_24d300;
        case 0x24d304u: goto label_24d304;
        case 0x24d308u: goto label_24d308;
        case 0x24d30cu: goto label_24d30c;
        case 0x24d310u: goto label_24d310;
        case 0x24d314u: goto label_24d314;
        case 0x24d318u: goto label_24d318;
        case 0x24d31cu: goto label_24d31c;
        case 0x24d320u: goto label_24d320;
        case 0x24d324u: goto label_24d324;
        case 0x24d328u: goto label_24d328;
        case 0x24d32cu: goto label_24d32c;
        case 0x24d330u: goto label_24d330;
        case 0x24d334u: goto label_24d334;
        case 0x24d338u: goto label_24d338;
        case 0x24d33cu: goto label_24d33c;
        case 0x24d340u: goto label_24d340;
        case 0x24d344u: goto label_24d344;
        case 0x24d348u: goto label_24d348;
        case 0x24d34cu: goto label_24d34c;
        case 0x24d350u: goto label_24d350;
        case 0x24d354u: goto label_24d354;
        case 0x24d358u: goto label_24d358;
        case 0x24d35cu: goto label_24d35c;
        case 0x24d360u: goto label_24d360;
        case 0x24d364u: goto label_24d364;
        case 0x24d368u: goto label_24d368;
        case 0x24d36cu: goto label_24d36c;
        case 0x24d370u: goto label_24d370;
        case 0x24d374u: goto label_24d374;
        case 0x24d378u: goto label_24d378;
        case 0x24d37cu: goto label_24d37c;
        case 0x24d380u: goto label_24d380;
        case 0x24d384u: goto label_24d384;
        case 0x24d388u: goto label_24d388;
        case 0x24d38cu: goto label_24d38c;
        case 0x24d390u: goto label_24d390;
        case 0x24d394u: goto label_24d394;
        case 0x24d398u: goto label_24d398;
        case 0x24d39cu: goto label_24d39c;
        case 0x24d3a0u: goto label_24d3a0;
        case 0x24d3a4u: goto label_24d3a4;
        case 0x24d3a8u: goto label_24d3a8;
        case 0x24d3acu: goto label_24d3ac;
        case 0x24d3b0u: goto label_24d3b0;
        case 0x24d3b4u: goto label_24d3b4;
        case 0x24d3b8u: goto label_24d3b8;
        case 0x24d3bcu: goto label_24d3bc;
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d3c4u: goto label_24d3c4;
        case 0x24d3c8u: goto label_24d3c8;
        case 0x24d3ccu: goto label_24d3cc;
        case 0x24d3d0u: goto label_24d3d0;
        case 0x24d3d4u: goto label_24d3d4;
        case 0x24d3d8u: goto label_24d3d8;
        case 0x24d3dcu: goto label_24d3dc;
        case 0x24d3e0u: goto label_24d3e0;
        case 0x24d3e4u: goto label_24d3e4;
        case 0x24d3e8u: goto label_24d3e8;
        case 0x24d3ecu: goto label_24d3ec;
        case 0x24d3f0u: goto label_24d3f0;
        case 0x24d3f4u: goto label_24d3f4;
        case 0x24d3f8u: goto label_24d3f8;
        case 0x24d3fcu: goto label_24d3fc;
        case 0x24d400u: goto label_24d400;
        case 0x24d404u: goto label_24d404;
        case 0x24d408u: goto label_24d408;
        case 0x24d40cu: goto label_24d40c;
        case 0x24d410u: goto label_24d410;
        case 0x24d414u: goto label_24d414;
        case 0x24d418u: goto label_24d418;
        case 0x24d41cu: goto label_24d41c;
        case 0x24d420u: goto label_24d420;
        case 0x24d424u: goto label_24d424;
        case 0x24d428u: goto label_24d428;
        case 0x24d42cu: goto label_24d42c;
        case 0x24d430u: goto label_24d430;
        case 0x24d434u: goto label_24d434;
        case 0x24d438u: goto label_24d438;
        case 0x24d43cu: goto label_24d43c;
        case 0x24d440u: goto label_24d440;
        case 0x24d444u: goto label_24d444;
        case 0x24d448u: goto label_24d448;
        case 0x24d44cu: goto label_24d44c;
        case 0x24d450u: goto label_24d450;
        case 0x24d454u: goto label_24d454;
        case 0x24d458u: goto label_24d458;
        case 0x24d45cu: goto label_24d45c;
        case 0x24d460u: goto label_24d460;
        case 0x24d464u: goto label_24d464;
        case 0x24d468u: goto label_24d468;
        case 0x24d46cu: goto label_24d46c;
        case 0x24d470u: goto label_24d470;
        case 0x24d474u: goto label_24d474;
        case 0x24d478u: goto label_24d478;
        case 0x24d47cu: goto label_24d47c;
        case 0x24d480u: goto label_24d480;
        case 0x24d484u: goto label_24d484;
        case 0x24d488u: goto label_24d488;
        case 0x24d48cu: goto label_24d48c;
        case 0x24d490u: goto label_24d490;
        case 0x24d494u: goto label_24d494;
        case 0x24d498u: goto label_24d498;
        case 0x24d49cu: goto label_24d49c;
        case 0x24d4a0u: goto label_24d4a0;
        case 0x24d4a4u: goto label_24d4a4;
        case 0x24d4a8u: goto label_24d4a8;
        case 0x24d4acu: goto label_24d4ac;
        case 0x24d4b0u: goto label_24d4b0;
        case 0x24d4b4u: goto label_24d4b4;
        case 0x24d4b8u: goto label_24d4b8;
        case 0x24d4bcu: goto label_24d4bc;
        case 0x24d4c0u: goto label_24d4c0;
        case 0x24d4c4u: goto label_24d4c4;
        case 0x24d4c8u: goto label_24d4c8;
        case 0x24d4ccu: goto label_24d4cc;
        case 0x24d4d0u: goto label_24d4d0;
        case 0x24d4d4u: goto label_24d4d4;
        case 0x24d4d8u: goto label_24d4d8;
        case 0x24d4dcu: goto label_24d4dc;
        case 0x24d4e0u: goto label_24d4e0;
        case 0x24d4e4u: goto label_24d4e4;
        case 0x24d4e8u: goto label_24d4e8;
        case 0x24d4ecu: goto label_24d4ec;
        case 0x24d4f0u: goto label_24d4f0;
        case 0x24d4f4u: goto label_24d4f4;
        case 0x24d4f8u: goto label_24d4f8;
        case 0x24d4fcu: goto label_24d4fc;
        case 0x24d500u: goto label_24d500;
        case 0x24d504u: goto label_24d504;
        case 0x24d508u: goto label_24d508;
        case 0x24d50cu: goto label_24d50c;
        case 0x24d510u: goto label_24d510;
        case 0x24d514u: goto label_24d514;
        case 0x24d518u: goto label_24d518;
        default: break;
    }

    ctx->pc = 0x24d110u;

label_24d110:
    // 0x24d110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_24d114:
    // 0x24d114: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24d118:
    // 0x24d118: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24d11c:
    // 0x24d11c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24d120:
    // 0x24d120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24d124:
    // 0x24d124: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24d124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d128:
    // 0x24d128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24d12c:
    // 0x24d12c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24d130:
    // 0x24d130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24d134:
    // 0x24d134: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x24d134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_24d138:
    // 0x24d138: 0xc0a0ed8  jal         func_283B60
label_24d13c:
    if (ctx->pc == 0x24D13Cu) {
        ctx->pc = 0x24D13Cu;
            // 0x24d13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D140u;
        goto label_24d140;
    }
    ctx->pc = 0x24D138u;
    SET_GPR_U32(ctx, 31, 0x24D140u);
    ctx->pc = 0x24D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D138u;
            // 0x24d13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D140u; }
        if (ctx->pc != 0x24D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D140u; }
        if (ctx->pc != 0x24D140u) { return; }
    }
    ctx->pc = 0x24D140u;
label_24d140:
    // 0x24d140: 0x8f83932c  lw          $v1, -0x6CD4($gp)
    ctx->pc = 0x24d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
label_24d144:
    // 0x24d144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d148:
    // 0x24d148: 0x8f829338  lw          $v0, -0x6CC8($gp)
    ctx->pc = 0x24d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939448)));
label_24d14c:
    // 0x24d14c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d150:
    // 0x24d150: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24d150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d154:
    // 0x24d154: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24d154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d158:
    // 0x24d158: 0x3864010f  xori        $a0, $v1, 0x10F
    ctx->pc = 0x24d158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)271);
label_24d15c:
    // 0x24d15c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x24d15cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24d160:
    // 0x24d160: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_24d164:
    if (ctx->pc == 0x24D164u) {
        ctx->pc = 0x24D164u;
            // 0x24d164: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D168u;
        goto label_24d168;
    }
    ctx->pc = 0x24D160u;
    {
        const bool branch_taken_0x24d160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D160u;
            // 0x24d164: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d160) {
            ctx->pc = 0x24D170u;
            goto label_24d170;
        }
    }
    ctx->pc = 0x24D168u;
label_24d168:
    // 0x24d168: 0x38640111  xori        $a0, $v1, 0x111
    ctx->pc = 0x24d168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)273);
label_24d16c:
    // 0x24d16c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x24d16cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24d170:
    // 0x24d170: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_24d174:
    if (ctx->pc == 0x24D174u) {
        ctx->pc = 0x24D178u;
        goto label_24d178;
    }
    ctx->pc = 0x24D170u;
    {
        const bool branch_taken_0x24d170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d170) {
            ctx->pc = 0x24D180u;
            goto label_24d180;
        }
    }
    ctx->pc = 0x24D178u;
label_24d178:
    // 0x24d178: 0x386401aa  xori        $a0, $v1, 0x1AA
    ctx->pc = 0x24d178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)426);
label_24d17c:
    // 0x24d17c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x24d17cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24d180:
    // 0x24d180: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_24d184:
    if (ctx->pc == 0x24D184u) {
        ctx->pc = 0x24D188u;
        goto label_24d188;
    }
    ctx->pc = 0x24D180u;
    {
        const bool branch_taken_0x24d180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d180) {
            ctx->pc = 0x24D190u;
            goto label_24d190;
        }
    }
    ctx->pc = 0x24D188u;
label_24d188:
    // 0x24d188: 0x38640124  xori        $a0, $v1, 0x124
    ctx->pc = 0x24d188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)292);
label_24d18c:
    // 0x24d18c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x24d18cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24d190:
    // 0x24d190: 0x86880110  lh          $t0, 0x110($s4)
    ctx->pc = 0x24d190u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24d194:
    // 0x24d194: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_24d198:
    if (ctx->pc == 0x24D198u) {
        ctx->pc = 0x24D198u;
            // 0x24d198: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x24D19Cu;
        goto label_24d19c;
    }
    ctx->pc = 0x24D194u;
    {
        const bool branch_taken_0x24d194 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D194u;
            // 0x24d198: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d194) {
            ctx->pc = 0x24D1A8u;
            goto label_24d1a8;
        }
    }
    ctx->pc = 0x24D19Cu;
label_24d19c:
    // 0x24d19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d1a0:
    // 0x24d1a0: 0x1504000c  bne         $t0, $a0, . + 4 + (0xC << 2)
label_24d1a4:
    if (ctx->pc == 0x24D1A4u) {
        ctx->pc = 0x24D1A8u;
        goto label_24d1a8;
    }
    ctx->pc = 0x24D1A0u;
    {
        const bool branch_taken_0x24d1a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x24d1a0) {
            ctx->pc = 0x24D1D4u;
            goto label_24d1d4;
        }
    }
    ctx->pc = 0x24D1A8u;
label_24d1a8:
    // 0x24d1a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_24d1ac:
    if (ctx->pc == 0x24D1ACu) {
        ctx->pc = 0x24D1B0u;
        goto label_24d1b0;
    }
    ctx->pc = 0x24D1A8u;
    {
        const bool branch_taken_0x24d1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d1a8) {
            ctx->pc = 0x24D1D4u;
            goto label_24d1d4;
        }
    }
    ctx->pc = 0x24D1B0u;
label_24d1b0:
    // 0x24d1b0: 0x86850114  lh          $a1, 0x114($s4)
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
label_24d1b4:
    // 0x24d1b4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24d1b8:
    // 0x24d1b8: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x24d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
label_24d1bc:
    // 0x24d1bc: 0x8f86933c  lw          $a2, -0x6CC4($gp)
    ctx->pc = 0x24d1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
label_24d1c0:
    // 0x24d1c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24d1c4:
    // 0x24d1c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24d1c8:
    // 0x24d1c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24d1cc:
    // 0x24d1cc: 0x10c40003  beq         $a2, $a0, . + 4 + (0x3 << 2)
label_24d1d0:
    if (ctx->pc == 0x24D1D0u) {
        ctx->pc = 0x24D1D4u;
        goto label_24d1d4;
    }
    ctx->pc = 0x24D1CCu;
    {
        const bool branch_taken_0x24d1cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x24d1cc) {
            ctx->pc = 0x24D1DCu;
            goto label_24d1dc;
        }
    }
    ctx->pc = 0x24D1D4u;
label_24d1d4:
    // 0x24d1d4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_24d1d8:
    if (ctx->pc == 0x24D1D8u) {
        ctx->pc = 0x24D1D8u;
            // 0x24d1d8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24D1DCu;
        goto label_24d1dc;
    }
    ctx->pc = 0x24D1D4u;
    {
        const bool branch_taken_0x24d1d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D1D4u;
            // 0x24d1d8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1d4) {
            ctx->pc = 0x24D1E4u;
            goto label_24d1e4;
        }
    }
    ctx->pc = 0x24D1DCu;
label_24d1dc:
    // 0x24d1dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24d1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d1e0:
    // 0x24d1e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x24d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24d1e4:
    // 0x24d1e4: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
label_24d1e8:
    if (ctx->pc == 0x24D1E8u) {
        ctx->pc = 0x24D1E8u;
            // 0x24d1e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24D1ECu;
        goto label_24d1ec;
    }
    ctx->pc = 0x24D1E4u;
    {
        const bool branch_taken_0x24d1e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x24D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D1E4u;
            // 0x24d1e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1e4) {
            ctx->pc = 0x24D1F4u;
            goto label_24d1f4;
        }
    }
    ctx->pc = 0x24D1ECu;
label_24d1ec:
    // 0x24d1ec: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_24d1f0:
    if (ctx->pc == 0x24D1F0u) {
        ctx->pc = 0x24D1F4u;
        goto label_24d1f4;
    }
    ctx->pc = 0x24D1ECu;
    {
        const bool branch_taken_0x24d1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24d1ec) {
            ctx->pc = 0x24D1FCu;
            goto label_24d1fc;
        }
    }
    ctx->pc = 0x24D1F4u;
label_24d1f4:
    // 0x24d1f4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_24d1f8:
    if (ctx->pc == 0x24D1F8u) {
        ctx->pc = 0x24D1F8u;
            // 0x24d1f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24D1FCu;
        goto label_24d1fc;
    }
    ctx->pc = 0x24D1F4u;
    {
        const bool branch_taken_0x24d1f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D1F4u;
            // 0x24d1f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1f4) {
            ctx->pc = 0x24D204u;
            goto label_24d204;
        }
    }
    ctx->pc = 0x24D1FCu;
label_24d1fc:
    // 0x24d1fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24d1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d200:
    // 0x24d200: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24d204:
    // 0x24d204: 0x1504000a  bne         $t0, $a0, . + 4 + (0xA << 2)
label_24d208:
    if (ctx->pc == 0x24D208u) {
        ctx->pc = 0x24D208u;
            // 0x24d208: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24D20Cu;
        goto label_24d20c;
    }
    ctx->pc = 0x24D204u;
    {
        const bool branch_taken_0x24d204 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x24D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D204u;
            // 0x24d208: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d204) {
            ctx->pc = 0x24D230u;
            goto label_24d230;
        }
    }
    ctx->pc = 0x24D20Cu;
label_24d20c:
    // 0x24d20c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d210:
    // 0x24d210: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
label_24d214:
    if (ctx->pc == 0x24D214u) {
        ctx->pc = 0x24D218u;
        goto label_24d218;
    }
    ctx->pc = 0x24D210u;
    {
        const bool branch_taken_0x24d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x24d210) {
            ctx->pc = 0x24D22Cu;
            goto label_24d22c;
        }
    }
    ctx->pc = 0x24D218u;
label_24d218:
    // 0x24d218: 0x8f85933c  lw          $a1, -0x6CC4($gp)
    ctx->pc = 0x24d218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
label_24d21c:
    // 0x24d21c: 0x8e84017c  lw          $a0, 0x17C($s4)
    ctx->pc = 0x24d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
label_24d220:
    // 0x24d220: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
label_24d224:
    if (ctx->pc == 0x24D224u) {
        ctx->pc = 0x24D228u;
        goto label_24d228;
    }
    ctx->pc = 0x24D220u;
    {
        const bool branch_taken_0x24d220 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x24d220) {
            ctx->pc = 0x24D22Cu;
            goto label_24d22c;
        }
    }
    ctx->pc = 0x24D228u;
label_24d228:
    // 0x24d228: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24d228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24d22c:
    // 0x24d22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d230:
    // 0x24d230: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_24d234:
    if (ctx->pc == 0x24D234u) {
        ctx->pc = 0x24D234u;
            // 0x24d234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24D238u;
        goto label_24d238;
    }
    ctx->pc = 0x24D230u;
    {
        const bool branch_taken_0x24d230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D230u;
            // 0x24d234: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d230) {
            ctx->pc = 0x24D264u;
            goto label_24d264;
        }
    }
    ctx->pc = 0x24D238u;
label_24d238:
    // 0x24d238: 0x8f84933c  lw          $a0, -0x6CC4($gp)
    ctx->pc = 0x24d238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
label_24d23c:
    // 0x24d23c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_24d240:
    if (ctx->pc == 0x24D240u) {
        ctx->pc = 0x24D244u;
        goto label_24d244;
    }
    ctx->pc = 0x24D23Cu;
    {
        const bool branch_taken_0x24d23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d23c) {
            ctx->pc = 0x24D260u;
            goto label_24d260;
        }
    }
    ctx->pc = 0x24D244u;
label_24d244:
    // 0x24d244: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x24d244u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_24d248:
    // 0x24d248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24d248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d24c:
    // 0x24d24c: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_24d250:
    if (ctx->pc == 0x24D250u) {
        ctx->pc = 0x24D250u;
            // 0x24d250: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x24D254u;
        goto label_24d254;
    }
    ctx->pc = 0x24D24Cu;
    {
        const bool branch_taken_0x24d24c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x24D250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D24Cu;
            // 0x24d250: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d24c) {
            ctx->pc = 0x24D25Cu;
            goto label_24d25c;
        }
    }
    ctx->pc = 0x24D254u;
label_24d254:
    // 0x24d254: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
label_24d258:
    if (ctx->pc == 0x24D258u) {
        ctx->pc = 0x24D25Cu;
        goto label_24d25c;
    }
    ctx->pc = 0x24D254u;
    {
        const bool branch_taken_0x24d254 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x24d254) {
            ctx->pc = 0x24D260u;
            goto label_24d260;
        }
    }
    ctx->pc = 0x24D25Cu;
label_24d25c:
    // 0x24d25c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24d25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d260:
    // 0x24d260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d264:
    // 0x24d264: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_24d268:
    if (ctx->pc == 0x24D268u) {
        ctx->pc = 0x24D26Cu;
        goto label_24d26c;
    }
    ctx->pc = 0x24D264u;
    {
        const bool branch_taken_0x24d264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24d264) {
            ctx->pc = 0x24D284u;
            goto label_24d284;
        }
    }
    ctx->pc = 0x24D26Cu;
label_24d26c:
    // 0x24d26c: 0x8f82933c  lw          $v0, -0x6CC4($gp)
    ctx->pc = 0x24d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
label_24d270:
    // 0x24d270: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24d274:
    if (ctx->pc == 0x24D274u) {
        ctx->pc = 0x24D274u;
            // 0x24d274: 0x24020127  addiu       $v0, $zero, 0x127 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
        ctx->pc = 0x24D278u;
        goto label_24d278;
    }
    ctx->pc = 0x24D270u;
    {
        const bool branch_taken_0x24d270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D270u;
            // 0x24d274: 0x24020127  addiu       $v0, $zero, 0x127 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d270) {
            ctx->pc = 0x24D284u;
            goto label_24d284;
        }
    }
    ctx->pc = 0x24D278u;
label_24d278:
    // 0x24d278: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_24d27c:
    if (ctx->pc == 0x24D27Cu) {
        ctx->pc = 0x24D280u;
        goto label_24d280;
    }
    ctx->pc = 0x24D278u;
    {
        const bool branch_taken_0x24d278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d278) {
            ctx->pc = 0x24D284u;
            goto label_24d284;
        }
    }
    ctx->pc = 0x24D280u;
label_24d280:
    // 0x24d280: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24d280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d284:
    // 0x24d284: 0xc08ca88  jal         func_232A20
label_24d288:
    if (ctx->pc == 0x24D288u) {
        ctx->pc = 0x24D28Cu;
        goto label_24d28c;
    }
    ctx->pc = 0x24D284u;
    SET_GPR_U32(ctx, 31, 0x24D28Cu);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D28Cu; }
        if (ctx->pc != 0x24D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D28Cu; }
        if (ctx->pc != 0x24D28Cu) { return; }
    }
    ctx->pc = 0x24D28Cu;
label_24d28c:
    // 0x24d28c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_24d290:
    if (ctx->pc == 0x24D290u) {
        ctx->pc = 0x24D294u;
        goto label_24d294;
    }
    ctx->pc = 0x24D28Cu;
    {
        const bool branch_taken_0x24d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d28c) {
            ctx->pc = 0x24D298u;
            goto label_24d298;
        }
    }
    ctx->pc = 0x24D294u;
label_24d294:
    // 0x24d294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d298:
    // 0x24d298: 0x8f849330  lw          $a0, -0x6CD0($gp)
    ctx->pc = 0x24d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939440)));
label_24d29c:
    // 0x24d29c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x24d29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_24d2a0:
    // 0x24d2a0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_24d2a4:
    if (ctx->pc == 0x24D2A4u) {
        ctx->pc = 0x24D2A4u;
            // 0x24d2a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24D2A8u;
        goto label_24d2a8;
    }
    ctx->pc = 0x24D2A0u;
    {
        const bool branch_taken_0x24d2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2A0u;
            // 0x24d2a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2a0) {
            ctx->pc = 0x24D300u;
            goto label_24d300;
        }
    }
    ctx->pc = 0x24D2A8u;
label_24d2a8:
    // 0x24d2a8: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x24d2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_24d2ac:
    // 0x24d2ac: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_24d2b0:
    if (ctx->pc == 0x24D2B0u) {
        ctx->pc = 0x24D2B0u;
            // 0x24d2b0: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x24D2B4u;
        goto label_24d2b4;
    }
    ctx->pc = 0x24D2ACu;
    {
        const bool branch_taken_0x24d2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2ACu;
            // 0x24d2b0: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2ac) {
            ctx->pc = 0x24D2FCu;
            goto label_24d2fc;
        }
    }
    ctx->pc = 0x24D2B4u;
label_24d2b4:
    // 0x24d2b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24d2b8:
    // 0x24d2b8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_24d2bc:
    if (ctx->pc == 0x24D2BCu) {
        ctx->pc = 0x24D2BCu;
            // 0x24d2bc: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->pc = 0x24D2C0u;
        goto label_24d2c0;
    }
    ctx->pc = 0x24D2B8u;
    {
        const bool branch_taken_0x24d2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2B8u;
            // 0x24d2bc: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2b8) {
            ctx->pc = 0x24D2FCu;
            goto label_24d2fc;
        }
    }
    ctx->pc = 0x24D2C0u;
label_24d2c0:
    // 0x24d2c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24d2c4:
    // 0x24d2c4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_24d2c8:
    if (ctx->pc == 0x24D2C8u) {
        ctx->pc = 0x24D2C8u;
            // 0x24d2c8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->pc = 0x24D2CCu;
        goto label_24d2cc;
    }
    ctx->pc = 0x24D2C4u;
    {
        const bool branch_taken_0x24d2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2C4u;
            // 0x24d2c8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2c4) {
            ctx->pc = 0x24D2FCu;
            goto label_24d2fc;
        }
    }
    ctx->pc = 0x24D2CCu;
label_24d2cc:
    // 0x24d2cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24d2d0:
    // 0x24d2d0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_24d2d4:
    if (ctx->pc == 0x24D2D4u) {
        ctx->pc = 0x24D2D4u;
            // 0x24d2d4: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->pc = 0x24D2D8u;
        goto label_24d2d8;
    }
    ctx->pc = 0x24D2D0u;
    {
        const bool branch_taken_0x24d2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2D0u;
            // 0x24d2d4: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2d0) {
            ctx->pc = 0x24D2FCu;
            goto label_24d2fc;
        }
    }
    ctx->pc = 0x24D2D8u;
label_24d2d8:
    // 0x24d2d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24d2dc:
    // 0x24d2dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_24d2e0:
    if (ctx->pc == 0x24D2E0u) {
        ctx->pc = 0x24D2E0u;
            // 0x24d2e0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x24D2E4u;
        goto label_24d2e4;
    }
    ctx->pc = 0x24D2DCu;
    {
        const bool branch_taken_0x24d2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2DCu;
            // 0x24d2e0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2dc) {
            ctx->pc = 0x24D2FCu;
            goto label_24d2fc;
        }
    }
    ctx->pc = 0x24D2E4u;
label_24d2e4:
    // 0x24d2e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24d2e8:
    // 0x24d2e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_24d2ec:
    if (ctx->pc == 0x24D2ECu) {
        ctx->pc = 0x24D2ECu;
            // 0x24d2ec: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x24D2F0u;
        goto label_24d2f0;
    }
    ctx->pc = 0x24D2E8u;
    {
        const bool branch_taken_0x24d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2E8u;
            // 0x24d2ec: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2e8) {
            ctx->pc = 0x24D2FCu;
            goto label_24d2fc;
        }
    }
    ctx->pc = 0x24D2F0u;
label_24d2f0:
    // 0x24d2f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24d2f4:
    // 0x24d2f4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_24d2f8:
    if (ctx->pc == 0x24D2F8u) {
        ctx->pc = 0x24D2FCu;
        goto label_24d2fc;
    }
    ctx->pc = 0x24D2F4u;
    {
        const bool branch_taken_0x24d2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d2f4) {
            ctx->pc = 0x24D3E4u;
            goto label_24d3e4;
        }
    }
    ctx->pc = 0x24D2FCu;
label_24d2fc:
    // 0x24d2fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d300:
    // 0x24d300: 0x16230038  bne         $s1, $v1, . + 4 + (0x38 << 2)
label_24d304:
    if (ctx->pc == 0x24D304u) {
        ctx->pc = 0x24D304u;
            // 0x24d304: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24D308u;
        goto label_24d308;
    }
    ctx->pc = 0x24D300u;
    {
        const bool branch_taken_0x24d300 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D300u;
            // 0x24d304: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d300) {
            ctx->pc = 0x24D3E4u;
            goto label_24d3e4;
        }
    }
    ctx->pc = 0x24D308u;
label_24d308:
    // 0x24d308: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x24d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24d30c:
    // 0x24d30c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24d30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24d310:
    // 0x24d310: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24d310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_24d314:
    // 0x24d314: 0x320f809  jalr        $t9
label_24d318:
    if (ctx->pc == 0x24D318u) {
        ctx->pc = 0x24D318u;
            // 0x24d318: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x24D31Cu;
        goto label_24d31c;
    }
    ctx->pc = 0x24D314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24D31Cu);
        ctx->pc = 0x24D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D314u;
            // 0x24d318: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24D31Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24D31Cu; }
            if (ctx->pc != 0x24D31Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24D31Cu;
label_24d31c:
    // 0x24d31c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x24d31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d320:
    // 0x24d320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d324:
    // 0x24d324: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_24d328:
    // 0x24d328: 0x320f809  jalr        $t9
label_24d32c:
    if (ctx->pc == 0x24D32Cu) {
        ctx->pc = 0x24D32Cu;
            // 0x24d32c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x24D330u;
        goto label_24d330;
    }
    ctx->pc = 0x24D328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24D330u);
        ctx->pc = 0x24D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D328u;
            // 0x24d32c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24D330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24D330u; }
            if (ctx->pc != 0x24D330u) { return; }
        }
        }
    }
    ctx->pc = 0x24D330u;
label_24d330:
    // 0x24d330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d334:
    // 0x24d334: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24d334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24d338:
    // 0x24d338: 0xaf829678  sw          $v0, -0x6988($gp)
    ctx->pc = 0x24d338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940280), GPR_U32(ctx, 2));
label_24d33c:
    // 0x24d33c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24d33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24d340:
    // 0x24d340: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x24d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24d344:
    // 0x24d344: 0x24a5bac8  addiu       $a1, $a1, -0x4538
    ctx->pc = 0x24d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949576));
label_24d348:
    // 0x24d348: 0x8c22caa0  lw          $v0, -0x3560($at)
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24d34c:
    // 0x24d34c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d350:
    // 0x24d350: 0xac4307dc  sw          $v1, 0x7DC($v0)
    ctx->pc = 0x24d350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
label_24d354:
    // 0x24d354: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24d358:
    // 0x24d358: 0xc0b8498  jal         func_2E1260
label_24d35c:
    if (ctx->pc == 0x24D35Cu) {
        ctx->pc = 0x24D35Cu;
            // 0x24d35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D360u;
        goto label_24d360;
    }
    ctx->pc = 0x24D358u;
    SET_GPR_U32(ctx, 31, 0x24D360u);
    ctx->pc = 0x24D35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D358u;
            // 0x24d35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D360u; }
        if (ctx->pc != 0x24D360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D360u; }
        if (ctx->pc != 0x24D360u) { return; }
    }
    ctx->pc = 0x24D360u;
label_24d360:
    // 0x24d360: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24d364:
    // 0x24d364: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24d364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24d368:
    // 0x24d368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d36c:
    // 0x24d36c: 0xc0b891c  jal         func_2E2470
label_24d370:
    if (ctx->pc == 0x24D370u) {
        ctx->pc = 0x24D370u;
            // 0x24d370: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D374u;
        goto label_24d374;
    }
    ctx->pc = 0x24D36Cu;
    SET_GPR_U32(ctx, 31, 0x24D374u);
    ctx->pc = 0x24D370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D36Cu;
            // 0x24d370: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D374u; }
        if (ctx->pc != 0x24D374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D374u; }
        if (ctx->pc != 0x24D374u) { return; }
    }
    ctx->pc = 0x24D374u;
label_24d374:
    // 0x24d374: 0x8f839330  lw          $v1, -0x6CD0($gp)
    ctx->pc = 0x24d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939440)));
label_24d378:
    // 0x24d378: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_24d37c:
    // 0x24d37c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24d380:
    // 0x24d380: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24d384:
    if (ctx->pc == 0x24D384u) {
        ctx->pc = 0x24D384u;
            // 0x24d384: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D388u;
        goto label_24d388;
    }
    ctx->pc = 0x24D380u;
    {
        const bool branch_taken_0x24d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D380u;
            // 0x24d384: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d380) {
            ctx->pc = 0x24D38Cu;
            goto label_24d38c;
        }
    }
    ctx->pc = 0x24D388u;
label_24d388:
    // 0x24d388: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x24d388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d38c:
    // 0x24d38c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x24d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_24d390:
    // 0x24d390: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24d390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_24d394:
    // 0x24d394: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_24d398:
    // 0x24d398: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24d398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24d39c:
    // 0x24d39c: 0x246313a0  addiu       $v1, $v1, 0x13A0
    ctx->pc = 0x24d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5024));
label_24d3a0:
    // 0x24d3a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24d3a4:
    // 0x24d3a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24d3a8:
    // 0x24d3a8: 0x8c22caa0  lw          $v0, -0x3560($at)
    ctx->pc = 0x24d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24d3ac:
    // 0x24d3ac: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x24d3acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_24d3b0:
    // 0x24d3b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24d3b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d3b4:
    // 0x24d3b4: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x24d3b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_24d3b8:
    // 0x24d3b8: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x24d3b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_24d3bc:
    // 0x24d3bc: 0x8468000c  lh          $t0, 0xC($v1)
    ctx->pc = 0x24d3bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_24d3c0:
    // 0x24d3c0: 0x84690010  lh          $t1, 0x10($v1)
    ctx->pc = 0x24d3c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_24d3c4:
    // 0x24d3c4: 0xc070488  jal         func_1C1220
label_24d3c8:
    if (ctx->pc == 0x24D3C8u) {
        ctx->pc = 0x24D3C8u;
            // 0x24d3c8: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->pc = 0x24D3CCu;
        goto label_24d3cc;
    }
    ctx->pc = 0x24D3C4u;
    SET_GPR_U32(ctx, 31, 0x24D3CCu);
    ctx->pc = 0x24D3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D3C4u;
            // 0x24d3c8: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D3CCu; }
        if (ctx->pc != 0x24D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D3CCu; }
        if (ctx->pc != 0x24D3CCu) { return; }
    }
    ctx->pc = 0x24D3CCu;
label_24d3cc:
    // 0x24d3cc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x24d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_24d3d0:
    // 0x24d3d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24d3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d3d4:
    // 0x24d3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d3d8:
    // 0x24d3d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24d3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d3dc:
    // 0x24d3dc: 0xc0b89c4  jal         func_2E2710
label_24d3e0:
    if (ctx->pc == 0x24D3E0u) {
        ctx->pc = 0x24D3E0u;
            // 0x24d3e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24D3E4u;
        goto label_24d3e4;
    }
    ctx->pc = 0x24D3DCu;
    SET_GPR_U32(ctx, 31, 0x24D3E4u);
    ctx->pc = 0x24D3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D3DCu;
            // 0x24d3e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D3E4u; }
        if (ctx->pc != 0x24D3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D3E4u; }
        if (ctx->pc != 0x24D3E4u) { return; }
    }
    ctx->pc = 0x24D3E4u;
label_24d3e4:
    // 0x24d3e4: 0x8f839330  lw          $v1, -0x6CD0($gp)
    ctx->pc = 0x24d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939440)));
label_24d3e8:
    // 0x24d3e8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x24d3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_24d3ec:
    // 0x24d3ec: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_24d3f0:
    if (ctx->pc == 0x24D3F0u) {
        ctx->pc = 0x24D3F4u;
        goto label_24d3f4;
    }
    ctx->pc = 0x24D3ECu;
    {
        const bool branch_taken_0x24d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d3ec) {
            ctx->pc = 0x24D474u;
            goto label_24d474;
        }
    }
    ctx->pc = 0x24D3F4u;
label_24d3f4:
    // 0x24d3f4: 0xa280016c  sb          $zero, 0x16C($s4)
    ctx->pc = 0x24d3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 364), (uint8_t)GPR_U32(ctx, 0));
label_24d3f8:
    // 0x24d3f8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_24d3fc:
    if (ctx->pc == 0x24D3FCu) {
        ctx->pc = 0x24D3FCu;
            // 0x24d3fc: 0xa280016d  sb          $zero, 0x16D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 365), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x24D400u;
        goto label_24d400;
    }
    ctx->pc = 0x24D3F8u;
    {
        const bool branch_taken_0x24d3f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D3F8u;
            // 0x24d3fc: 0xa280016d  sb          $zero, 0x16D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 365), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3f8) {
            ctx->pc = 0x24D418u;
            goto label_24d418;
        }
    }
    ctx->pc = 0x24D400u;
label_24d400:
    // 0x24d400: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x24d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24d404:
    // 0x24d404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d408:
    // 0x24d408: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x24d408u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_24d40c:
    // 0x24d40c: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x24d40cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_24d410:
    // 0x24d410: 0xa68300c8  sh          $v1, 0xC8($s4)
    ctx->pc = 0x24d410u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 200), (uint16_t)GPR_U32(ctx, 3));
label_24d414:
    // 0x24d414: 0xa283016c  sb          $v1, 0x16C($s4)
    ctx->pc = 0x24d414u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 364), (uint8_t)GPR_U32(ctx, 3));
label_24d418:
    // 0x24d418: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_24d41c:
    if (ctx->pc == 0x24D41Cu) {
        ctx->pc = 0x24D420u;
        goto label_24d420;
    }
    ctx->pc = 0x24D418u;
    {
        const bool branch_taken_0x24d418 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d418) {
            ctx->pc = 0x24D454u;
            goto label_24d454;
        }
    }
    ctx->pc = 0x24D420u;
label_24d420:
    // 0x24d420: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24d420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24d424:
    // 0x24d424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d428:
    // 0x24d428: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x24d428u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_24d42c:
    // 0x24d42c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24d42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d430:
    // 0x24d430: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x24d430u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_24d434:
    // 0x24d434: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x24d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_24d438:
    // 0x24d438: 0xa68300c8  sh          $v1, 0xC8($s4)
    ctx->pc = 0x24d438u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 200), (uint16_t)GPR_U32(ctx, 3));
label_24d43c:
    // 0x24d43c: 0x27859690  addiu       $a1, $gp, -0x6970
    ctx->pc = 0x24d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
label_24d440:
    // 0x24d440: 0xa283016d  sb          $v1, 0x16D($s4)
    ctx->pc = 0x24d440u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 365), (uint8_t)GPR_U32(ctx, 3));
label_24d444:
    // 0x24d444: 0x8f86933c  lw          $a2, -0x6CC4($gp)
    ctx->pc = 0x24d444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
label_24d448:
    // 0x24d448: 0xaf829690  sw          $v0, -0x6970($gp)
    ctx->pc = 0x24d448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940304), GPR_U32(ctx, 2));
label_24d44c:
    // 0x24d44c: 0xc0933dc  jal         func_24CF70
label_24d450:
    if (ctx->pc == 0x24D450u) {
        ctx->pc = 0x24D450u;
            // 0x24d450: 0xaf829694  sw          $v0, -0x696C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940308), GPR_U32(ctx, 2));
        ctx->pc = 0x24D454u;
        goto label_24d454;
    }
    ctx->pc = 0x24D44Cu;
    SET_GPR_U32(ctx, 31, 0x24D454u);
    ctx->pc = 0x24D450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D44Cu;
            // 0x24d450: 0xaf829694  sw          $v0, -0x696C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CF70u;
    if (runtime->hasFunction(0x24CF70u)) {
        auto targetFn = runtime->lookupFunction(0x24CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D454u; }
        if (ctx->pc != 0x24D454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEffectDisplayPosition__13CMenuItemInfoFPiP13CGameDataUsed_0x24cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D454u; }
        if (ctx->pc != 0x24D454u) { return; }
    }
    ctx->pc = 0x24D454u;
label_24d454:
    // 0x24d454: 0x9283016c  lbu         $v1, 0x16C($s4)
    ctx->pc = 0x24d454u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 364)));
label_24d458:
    // 0x24d458: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_24d45c:
    if (ctx->pc == 0x24D45Cu) {
        ctx->pc = 0x24D460u;
        goto label_24d460;
    }
    ctx->pc = 0x24D458u;
    {
        const bool branch_taken_0x24d458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d458) {
            ctx->pc = 0x24D474u;
            goto label_24d474;
        }
    }
    ctx->pc = 0x24D460u;
label_24d460:
    // 0x24d460: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x24d460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24d464:
    // 0x24d464: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x24d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_24d468:
    // 0x24d468: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_24d46c:
    if (ctx->pc == 0x24D46Cu) {
        ctx->pc = 0x24D470u;
        goto label_24d470;
    }
    ctx->pc = 0x24D468u;
    {
        const bool branch_taken_0x24d468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d468) {
            ctx->pc = 0x24D474u;
            goto label_24d474;
        }
    }
    ctx->pc = 0x24D470u;
label_24d470:
    // 0x24d470: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x24d470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_24d474:
    // 0x24d474: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
label_24d478:
    if (ctx->pc == 0x24D478u) {
        ctx->pc = 0x24D47Cu;
        goto label_24d47c;
    }
    ctx->pc = 0x24D474u;
    {
        const bool branch_taken_0x24d474 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d474) {
            ctx->pc = 0x24D4F8u;
            goto label_24d4f8;
        }
    }
    ctx->pc = 0x24D47Cu;
label_24d47c:
    // 0x24d47c: 0x8f86933c  lw          $a2, -0x6CC4($gp)
    ctx->pc = 0x24d47cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
label_24d480:
    // 0x24d480: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x24d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_24d484:
    // 0x24d484: 0xaf829690  sw          $v0, -0x6970($gp)
    ctx->pc = 0x24d484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940304), GPR_U32(ctx, 2));
label_24d488:
    // 0x24d488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d48c:
    // 0x24d48c: 0x27859690  addiu       $a1, $gp, -0x6970
    ctx->pc = 0x24d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
label_24d490:
    // 0x24d490: 0xc0933dc  jal         func_24CF70
label_24d494:
    if (ctx->pc == 0x24D494u) {
        ctx->pc = 0x24D494u;
            // 0x24d494: 0xaf829694  sw          $v0, -0x696C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940308), GPR_U32(ctx, 2));
        ctx->pc = 0x24D498u;
        goto label_24d498;
    }
    ctx->pc = 0x24D490u;
    SET_GPR_U32(ctx, 31, 0x24D498u);
    ctx->pc = 0x24D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D490u;
            // 0x24d494: 0xaf829694  sw          $v0, -0x696C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CF70u;
    if (runtime->hasFunction(0x24CF70u)) {
        auto targetFn = runtime->lookupFunction(0x24CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D498u; }
        if (ctx->pc != 0x24D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEffectDisplayPosition__13CMenuItemInfoFPiP13CGameDataUsed_0x24cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D498u; }
        if (ctx->pc != 0x24D498u) { return; }
    }
    ctx->pc = 0x24D498u;
label_24d498:
    // 0x24d498: 0xc065c4c  jal         func_197130
label_24d49c:
    if (ctx->pc == 0x24D49Cu) {
        ctx->pc = 0x24D49Cu;
            // 0x24d49c: 0x8f84933c  lw          $a0, -0x6CC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
        ctx->pc = 0x24D4A0u;
        goto label_24d4a0;
    }
    ctx->pc = 0x24D498u;
    SET_GPR_U32(ctx, 31, 0x24D4A0u);
    ctx->pc = 0x24D49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D498u;
            // 0x24d49c: 0x8f84933c  lw          $a0, -0x6CC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939452)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197130u;
    if (runtime->hasFunction(0x197130u)) {
        auto targetFn = runtime->lookupFunction(0x197130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4A0u; }
        if (ctx->pc != 0x24D4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWhoEquip__13CGameDataUsedFv_0x197130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4A0u; }
        if (ctx->pc != 0x24D4A0u) { return; }
    }
    ctx->pc = 0x24D4A0u;
label_24d4a0:
    // 0x24d4a0: 0x8f869690  lw          $a2, -0x6970($gp)
    ctx->pc = 0x24d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940304)));
label_24d4a4:
    // 0x24d4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d4a8:
    // 0x24d4a8: 0x8f879694  lw          $a3, -0x696C($gp)
    ctx->pc = 0x24d4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940308)));
label_24d4ac:
    // 0x24d4ac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24d4b0:
    // 0x24d4b0: 0x2484d920  addiu       $a0, $a0, -0x26E0
    ctx->pc = 0x24d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
label_24d4b4:
    // 0x24d4b4: 0xc08ba50  jal         func_22E940
label_24d4b8:
    if (ctx->pc == 0x24D4B8u) {
        ctx->pc = 0x24D4B8u;
            // 0x24d4b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24D4BCu;
        goto label_24d4bc;
    }
    ctx->pc = 0x24D4B4u;
    SET_GPR_U32(ctx, 31, 0x24D4BCu);
    ctx->pc = 0x24D4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D4B4u;
            // 0x24d4b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E940u;
    if (runtime->hasFunction(0x22E940u)) {
        auto targetFn = runtime->lookupFunction(0x22E940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4BCu; }
        if (ctx->pc != 0x24D4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__21CLevelUpEffectManagerFiii_0x22e940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4BCu; }
        if (ctx->pc != 0x24D4BCu) { return; }
    }
    ctx->pc = 0x24D4BCu;
label_24d4bc:
    // 0x24d4bc: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_24d4c0:
    if (ctx->pc == 0x24D4C0u) {
        ctx->pc = 0x24D4C0u;
            // 0x24d4c0: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x24D4C4u;
        goto label_24d4c4;
    }
    ctx->pc = 0x24D4BCu;
    {
        const bool branch_taken_0x24d4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D4BCu;
            // 0x24d4c0: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4bc) {
            ctx->pc = 0x24D4F8u;
            goto label_24d4f8;
        }
    }
    ctx->pc = 0x24D4C4u;
label_24d4c4:
    // 0x24d4c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24d4c8:
    // 0x24d4c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x24d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_24d4cc:
    // 0x24d4cc: 0x24a5ae38  addiu       $a1, $a1, -0x51C8
    ctx->pc = 0x24d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946360));
label_24d4d0:
    // 0x24d4d0: 0xc04b414  jal         func_12D050
label_24d4d4:
    if (ctx->pc == 0x24D4D4u) {
        ctx->pc = 0x24D4D4u;
            // 0x24d4d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24D4D8u;
        goto label_24d4d8;
    }
    ctx->pc = 0x24D4D0u;
    SET_GPR_U32(ctx, 31, 0x24D4D8u);
    ctx->pc = 0x24D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D4D0u;
            // 0x24d4d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4D8u; }
        if (ctx->pc != 0x24D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4D8u; }
        if (ctx->pc != 0x24D4D8u) { return; }
    }
    ctx->pc = 0x24D4D8u;
label_24d4d8:
    // 0x24d4d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24d4dc:
    // 0x24d4dc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24d4e0:
    // 0x24d4e0: 0xac22d924  sw          $v0, -0x26DC($at)
    ctx->pc = 0x24d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957348), GPR_U32(ctx, 2));
label_24d4e4:
    // 0x24d4e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d4e8:
    // 0x24d4e8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24d4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24d4ec:
    // 0x24d4ec: 0x8c26caa0  lw          $a2, -0x3560($at)
    ctx->pc = 0x24d4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24d4f0:
    // 0x24d4f0: 0xc08ba80  jal         func_22EA00
label_24d4f4:
    if (ctx->pc == 0x24D4F4u) {
        ctx->pc = 0x24D4F4u;
            // 0x24d4f4: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->pc = 0x24D4F8u;
        goto label_24d4f8;
    }
    ctx->pc = 0x24D4F0u;
    SET_GPR_U32(ctx, 31, 0x24D4F8u);
    ctx->pc = 0x24D4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D4F0u;
            // 0x24d4f4: 0x2484d920  addiu       $a0, $a0, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22EA00u;
    if (runtime->hasFunction(0x22EA00u)) {
        auto targetFn = runtime->lookupFunction(0x22EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4F8u; }
        if (ctx->pc != 0x24D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__21CLevelUpEffectManagerFiP11CCharacter2_0x22ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D4F8u; }
        if (ctx->pc != 0x24D4F8u) { return; }
    }
    ctx->pc = 0x24D4F8u;
label_24d4f8:
    // 0x24d4f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24d4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24d4fc:
    // 0x24d4fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24d4fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24d500:
    // 0x24d500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24d500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24d504:
    // 0x24d504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d508:
    // 0x24d508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24d50c:
    // 0x24d50c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24d510:
    // 0x24d510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24d514:
    // 0x24d514: 0x3e00008  jr          $ra
label_24d518:
    if (ctx->pc == 0x24D518u) {
        ctx->pc = 0x24D518u;
            // 0x24d518: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x24D51Cu;
        goto label_fallthrough_0x24d514;
    }
    ctx->pc = 0x24D514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D514u;
            // 0x24d518: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24d514:
    ctx->pc = 0x24D51Cu;
}
