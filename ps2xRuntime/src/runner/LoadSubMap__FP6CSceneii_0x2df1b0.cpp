#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSubMap__FP6CSceneii
// Address: 0x2df1b0 - 0x2df364
void LoadSubMap__FP6CSceneii_0x2df1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSubMap__FP6CSceneii_0x2df1b0");
#endif

    switch (ctx->pc) {
        case 0x2df1e4u: goto label_2df1e4;
        case 0x2df1fcu: goto label_2df1fc;
        case 0x2df20cu: goto label_2df20c;
        case 0x2df220u: goto label_2df220;
        case 0x2df228u: goto label_2df228;
        case 0x2df230u: goto label_2df230;
        case 0x2df270u: goto label_2df270;
        case 0x2df290u: goto label_2df290;
        case 0x2df2a0u: goto label_2df2a0;
        case 0x2df2b4u: goto label_2df2b4;
        case 0x2df2c0u: goto label_2df2c0;
        case 0x2df2ccu: goto label_2df2cc;
        case 0x2df2d8u: goto label_2df2d8;
        case 0x2df2e4u: goto label_2df2e4;
        case 0x2df2f0u: goto label_2df2f0;
        case 0x2df308u: goto label_2df308;
        case 0x2df320u: goto label_2df320;
        case 0x2df338u: goto label_2df338;
        default: break;
    }

    ctx->pc = 0x2df1b0u;

    // 0x2df1b0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2df1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2df1b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2df1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2df1b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2df1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2df1bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2df1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2df1c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2df1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2df1c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2df1c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df1d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2df1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2df1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1dc: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2DF1DCu;
    SET_GPR_U32(ctx, 31, 0x2DF1E4u);
    ctx->pc = 0x2DF1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1DCu;
            // 0x2df1e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF1E4u; }
        if (ctx->pc != 0x2DF1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF1E4u; }
        if (ctx->pc != 0x2DF1E4u) { return; }
    }
    ctx->pc = 0x2DF1E4u;
label_2df1e4:
    // 0x2df1e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1e8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF1E8u;
    {
        const bool branch_taken_0x2df1e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1E8u;
            // 0x2df1ec: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1e8) {
            ctx->pc = 0x2DF204u;
            goto label_2df204;
        }
    }
    ctx->pc = 0x2DF1F0u;
    // 0x2df1f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2df1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1f4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2DF1F4u;
    SET_GPR_U32(ctx, 31, 0x2DF1FCu);
    ctx->pc = 0x2DF1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1F4u;
            // 0x2df1f8: 0x24840f10  addiu       $a0, $a0, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF1FCu; }
        if (ctx->pc != 0x2DF1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF1FCu; }
        if (ctx->pc != 0x2DF1FCu) { return; }
    }
    ctx->pc = 0x2DF1FCu;
label_2df1fc:
    // 0x2df1fc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2DF1FCu;
    {
        const bool branch_taken_0x2df1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1FCu;
            // 0x2df200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1fc) {
            ctx->pc = 0x2DF344u;
            goto label_2df344;
        }
    }
    ctx->pc = 0x2DF204u;
label_2df204:
    // 0x2df204: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x2DF204u;
    SET_GPR_U32(ctx, 31, 0x2DF20Cu);
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF20Cu; }
        if (ctx->pc != 0x2DF20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF20Cu; }
        if (ctx->pc != 0x2DF20Cu) { return; }
    }
    ctx->pc = 0x2DF20Cu;
label_2df20c:
    // 0x2df20c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2df210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df214: 0x8c258d70  lw          $a1, -0x7290($at)
    ctx->pc = 0x2df214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2df218: 0xc0a179c  jal         func_285E70
    ctx->pc = 0x2DF218u;
    SET_GPR_U32(ctx, 31, 0x2DF220u);
    ctx->pc = 0x2DF21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF218u;
            // 0x2df21c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    if (runtime->hasFunction(0x285E70u)) {
        auto targetFn = runtime->lookupFunction(0x285E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF220u; }
        if (ctx->pc != 0x2DF220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMap__6CSceneFii_0x285e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF220u; }
        if (ctx->pc != 0x2DF220u) { return; }
    }
    ctx->pc = 0x2DF220u;
label_2df220:
    // 0x2df220: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x2DF220u;
    SET_GPR_U32(ctx, 31, 0x2DF228u);
    ctx->pc = 0x2DF224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF220u;
            // 0x2df224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF228u; }
        if (ctx->pc != 0x2DF228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF228u; }
        if (ctx->pc != 0x2DF228u) { return; }
    }
    ctx->pc = 0x2DF228u;
label_2df228:
    // 0x2df228: 0xc0a1454  jal         func_285150
    ctx->pc = 0x2DF228u;
    SET_GPR_U32(ctx, 31, 0x2DF230u);
    ctx->pc = 0x2DF22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF228u;
            // 0x2df22c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF230u; }
        if (ctx->pc != 0x2DF230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF230u; }
        if (ctx->pc != 0x2DF230u) { return; }
    }
    ctx->pc = 0x2DF230u;
label_2df230:
    // 0x2df230: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df234: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x2df234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2df238: 0x8c278d74  lw          $a3, -0x728C($at)
    ctx->pc = 0x2df238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937972)));
    // 0x2df23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2df240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df244: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df248: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2df248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2df24c: 0x8c268d78  lw          $a2, -0x7288($at)
    ctx->pc = 0x2df24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937976)));
    // 0x2df250: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df254: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x2df254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x2df258: 0x8c238d84  lw          $v1, -0x727C($at)
    ctx->pc = 0x2df258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937988)));
    // 0x2df25c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df260: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2df260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x2df264: 0x8c228d7c  lw          $v0, -0x7284($at)
    ctx->pc = 0x2df264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937980)));
    // 0x2df268: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF268u;
    SET_GPR_U32(ctx, 31, 0x2DF270u);
    ctx->pc = 0x2DF26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF268u;
            // 0x2df26c: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF270u; }
        if (ctx->pc != 0x2DF270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF270u; }
        if (ctx->pc != 0x2DF270u) { return; }
    }
    ctx->pc = 0x2DF270u;
label_2df270:
    // 0x2df270: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x2df270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2df274: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2df278: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF278u;
    {
        const bool branch_taken_0x2df278 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DF27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF278u;
            // 0x2df27c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df278) {
            ctx->pc = 0x2DF288u;
            goto label_2df288;
        }
    }
    ctx->pc = 0x2DF280u;
    // 0x2df280: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2df280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2df284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2df284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2df288:
    // 0x2df288: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x2DF288u;
    SET_GPR_U32(ctx, 31, 0x2DF290u);
    ctx->pc = 0x2DF28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF288u;
            // 0x2df28c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF290u; }
        if (ctx->pc != 0x2DF290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF290u; }
        if (ctx->pc != 0x2DF290u) { return; }
    }
    ctx->pc = 0x2DF290u;
label_2df290:
    // 0x2df290: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2df290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2df294: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2df294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2df298: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x2DF298u;
    SET_GPR_U32(ctx, 31, 0x2DF2A0u);
    ctx->pc = 0x2DF29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF298u;
            // 0x2df29c: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2A0u; }
        if (ctx->pc != 0x2DF2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2A0u; }
        if (ctx->pc != 0x2DF2A0u) { return; }
    }
    ctx->pc = 0x2DF2A0u;
label_2df2a0:
    // 0x2df2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df2a4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2df2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2df2a8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2df2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2df2ac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF2ACu;
    SET_GPR_U32(ctx, 31, 0x2DF2B4u);
    ctx->pc = 0x2DF2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2ACu;
            // 0x2df2b0: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2B4u; }
        if (ctx->pc != 0x2DF2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2B4u; }
        if (ctx->pc != 0x2DF2B4u) { return; }
    }
    ctx->pc = 0x2DF2B4u;
label_2df2b4:
    // 0x2df2b4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2df2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2df2b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF2B8u;
    SET_GPR_U32(ctx, 31, 0x2DF2C0u);
    ctx->pc = 0x2DF2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2B8u;
            // 0x2df2bc: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2C0u; }
        if (ctx->pc != 0x2DF2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2C0u; }
        if (ctx->pc != 0x2DF2C0u) { return; }
    }
    ctx->pc = 0x2DF2C0u;
label_2df2c0:
    // 0x2df2c0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2df2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2df2c4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF2C4u;
    SET_GPR_U32(ctx, 31, 0x2DF2CCu);
    ctx->pc = 0x2DF2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2C4u;
            // 0x2df2c8: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2CCu; }
        if (ctx->pc != 0x2DF2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2CCu; }
        if (ctx->pc != 0x2DF2CCu) { return; }
    }
    ctx->pc = 0x2DF2CCu;
label_2df2cc:
    // 0x2df2cc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2df2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2df2d0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF2D0u;
    SET_GPR_U32(ctx, 31, 0x2DF2D8u);
    ctx->pc = 0x2DF2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2D0u;
            // 0x2df2d4: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2D8u; }
        if (ctx->pc != 0x2DF2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2D8u; }
        if (ctx->pc != 0x2DF2D8u) { return; }
    }
    ctx->pc = 0x2DF2D8u;
label_2df2d8:
    // 0x2df2d8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2df2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2df2dc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF2DCu;
    SET_GPR_U32(ctx, 31, 0x2DF2E4u);
    ctx->pc = 0x2DF2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2DCu;
            // 0x2df2e0: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2E4u; }
        if (ctx->pc != 0x2DF2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2E4u; }
        if (ctx->pc != 0x2DF2E4u) { return; }
    }
    ctx->pc = 0x2DF2E4u;
label_2df2e4:
    // 0x2df2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2e8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF2E8u;
    SET_GPR_U32(ctx, 31, 0x2DF2F0u);
    ctx->pc = 0x2DF2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2E8u;
            // 0x2df2ec: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2F0u; }
        if (ctx->pc != 0x2DF2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2F0u; }
        if (ctx->pc != 0x2DF2F0u) { return; }
    }
    ctx->pc = 0x2DF2F0u;
label_2df2f0:
    // 0x2df2f0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df2f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2df2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2f8: 0x8c258d70  lw          $a1, -0x7290($at)
    ctx->pc = 0x2df2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2df2fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2df2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df300: 0xc0a1738  jal         func_285CE0
    ctx->pc = 0x2DF300u;
    SET_GPR_U32(ctx, 31, 0x2DF308u);
    ctx->pc = 0x2DF304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF300u;
            // 0x2df304: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285CE0u;
    if (runtime->hasFunction(0x285CE0u)) {
        auto targetFn = runtime->lookupFunction(0x285CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF308u; }
        if (ctx->pc != 0x2DF308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i_0x285ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF308u; }
        if (ctx->pc != 0x2DF308u) { return; }
    }
    ctx->pc = 0x2DF308u;
label_2df308:
    // 0x2df308: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF308u;
    {
        const bool branch_taken_0x2df308 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DF30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF308u;
            // 0x2df30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df308) {
            ctx->pc = 0x2DF318u;
            goto label_2df318;
        }
    }
    ctx->pc = 0x2DF310u;
    // 0x2df310: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DF310u;
    {
        const bool branch_taken_0x2df310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF310u;
            // 0x2df314: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df310) {
            ctx->pc = 0x2DF348u;
            goto label_2df348;
        }
    }
    ctx->pc = 0x2DF318u;
label_2df318:
    // 0x2df318: 0xc064220  jal         func_190880
    ctx->pc = 0x2DF318u;
    SET_GPR_U32(ctx, 31, 0x2DF320u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF320u; }
        if (ctx->pc != 0x2DF320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF320u; }
        if (ctx->pc != 0x2DF320u) { return; }
    }
    ctx->pc = 0x2DF320u;
label_2df320:
    // 0x2df320: 0x87839eb0  lh          $v1, -0x6150($gp)
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294942384)));
    // 0x2df324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2df324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df328: 0x24501a18  addiu       $s0, $v0, 0x1A18
    ctx->pc = 0x2df328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x2df32c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2df32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df330: 0xc0a12e0  jal         func_284B80
    ctx->pc = 0x2DF330u;
    SET_GPR_U32(ctx, 31, 0x2DF338u);
    ctx->pc = 0x2DF334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF330u;
            // 0x2df334: 0xa4431a1e  sh          $v1, 0x1A1E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6686), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B80u;
    if (runtime->hasFunction(0x284B80u)) {
        auto targetFn = runtime->lookupFunction(0x284B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF338u; }
        if (ctx->pc != 0x2DF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowSubMapNo__6CSceneFi_0x284b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF338u; }
        if (ctx->pc != 0x2DF338u) { return; }
    }
    ctx->pc = 0x2DF338u;
label_2df338:
    // 0x2df338: 0xaf939eb0  sw          $s3, -0x6150($gp)
    ctx->pc = 0x2df338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942384), GPR_U32(ctx, 19));
    // 0x2df33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df340: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x2df340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
label_2df344:
    // 0x2df344: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2df344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2df348:
    // 0x2df348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2df348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df34c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2df34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df35c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF35Cu;
            // 0x2df360: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF364u;
}
