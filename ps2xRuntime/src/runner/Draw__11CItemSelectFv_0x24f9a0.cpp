#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CItemSelectFv
// Address: 0x24f9a0 - 0x2503a4
void Draw__11CItemSelectFv_0x24f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CItemSelectFv_0x24f9a0");
#endif

    switch (ctx->pc) {
        case 0x24fa00u: goto label_24fa00;
        case 0x24fa08u: goto label_24fa08;
        case 0x24fa24u: goto label_24fa24;
        case 0x24fa40u: goto label_24fa40;
        case 0x24fa54u: goto label_24fa54;
        case 0x24fa70u: goto label_24fa70;
        case 0x24fa78u: goto label_24fa78;
        case 0x24fa84u: goto label_24fa84;
        case 0x24fa90u: goto label_24fa90;
        case 0x24fb08u: goto label_24fb08;
        case 0x24fb20u: goto label_24fb20;
        case 0x24fb38u: goto label_24fb38;
        case 0x24fb40u: goto label_24fb40;
        case 0x24fb80u: goto label_24fb80;
        case 0x24fb94u: goto label_24fb94;
        case 0x24fbd8u: goto label_24fbd8;
        case 0x24fc08u: goto label_24fc08;
        case 0x24fc40u: goto label_24fc40;
        case 0x24fc5cu: goto label_24fc5c;
        case 0x24fc70u: goto label_24fc70;
        case 0x24fc8cu: goto label_24fc8c;
        case 0x24fce8u: goto label_24fce8;
        case 0x24fcf0u: goto label_24fcf0;
        case 0x24fd10u: goto label_24fd10;
        case 0x24fd44u: goto label_24fd44;
        case 0x24fd50u: goto label_24fd50;
        case 0x24fd5cu: goto label_24fd5c;
        case 0x24fd84u: goto label_24fd84;
        case 0x24fda8u: goto label_24fda8;
        case 0x24fdccu: goto label_24fdcc;
        case 0x24fde4u: goto label_24fde4;
        case 0x24fdfcu: goto label_24fdfc;
        case 0x24fe20u: goto label_24fe20;
        case 0x24fe28u: goto label_24fe28;
        case 0x24fee0u: goto label_24fee0;
        case 0x24fef8u: goto label_24fef8;
        case 0x24ff04u: goto label_24ff04;
        case 0x24ff10u: goto label_24ff10;
        case 0x24ff28u: goto label_24ff28;
        case 0x24ff34u: goto label_24ff34;
        case 0x24ff48u: goto label_24ff48;
        case 0x24ff50u: goto label_24ff50;
        case 0x25001cu: goto label_25001c;
        case 0x250028u: goto label_250028;
        case 0x250040u: goto label_250040;
        case 0x250048u: goto label_250048;
        case 0x250054u: goto label_250054;
        case 0x25006cu: goto label_25006c;
        case 0x25007cu: goto label_25007c;
        case 0x250094u: goto label_250094;
        case 0x2500acu: goto label_2500ac;
        case 0x2500c0u: goto label_2500c0;
        case 0x2500d8u: goto label_2500d8;
        case 0x2500e8u: goto label_2500e8;
        case 0x250100u: goto label_250100;
        case 0x250114u: goto label_250114;
        case 0x25012cu: goto label_25012c;
        case 0x25013cu: goto label_25013c;
        case 0x250144u: goto label_250144;
        case 0x25015cu: goto label_25015c;
        case 0x250184u: goto label_250184;
        case 0x250284u: goto label_250284;
        case 0x2502b8u: goto label_2502b8;
        case 0x2502dcu: goto label_2502dc;
        case 0x25030cu: goto label_25030c;
        case 0x250328u: goto label_250328;
        case 0x250340u: goto label_250340;
        case 0x250350u: goto label_250350;
        case 0x25035cu: goto label_25035c;
        case 0x250368u: goto label_250368;
        default: break;
    }

    ctx->pc = 0x24f9a0u;

    // 0x24f9a0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x24f9a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24f9a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x24f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x24f9ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x24f9b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x24f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x24f9b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24f9b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24f9bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24f9c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24f9c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24f9c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24f9cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x24f9ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24f9d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x24f9d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24f9d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24f9d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24f9d8: 0x8c83043c  lw          $v1, 0x43C($a0)
    ctx->pc = 0x24f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1084)));
    // 0x24f9dc: 0x10600262  beqz        $v1, . + 4 + (0x262 << 2)
    ctx->pc = 0x24F9DCu;
    {
        const bool branch_taken_0x24f9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F9DCu;
            // 0x24f9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9dc) {
            ctx->pc = 0x250368u;
            goto label_250368;
        }
    }
    ctx->pc = 0x24F9E4u;
    // 0x24f9e4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x24f9e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f9e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x24f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x24f9ec: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x24f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x24f9f0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24f9f4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x24f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24f9f8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x24F9F8u;
    SET_GPR_U32(ctx, 31, 0x24FA00u);
    ctx->pc = 0x24F9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F9F8u;
            // 0x24f9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA00u; }
        if (ctx->pc != 0x24FA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA00u; }
        if (ctx->pc != 0x24FA00u) { return; }
    }
    ctx->pc = 0x24FA00u;
label_24fa00:
    // 0x24fa00: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x24FA00u;
    SET_GPR_U32(ctx, 31, 0x24FA08u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA08u; }
        if (ctx->pc != 0x24FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA08u; }
        if (ctx->pc != 0x24FA08u) { return; }
    }
    ctx->pc = 0x24FA08u;
label_24fa08:
    // 0x24fa08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24fa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa0c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24fa10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fa14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24fa14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa18: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x24fa18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x24fa1c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24FA1Cu;
    SET_GPR_U32(ctx, 31, 0x24FA24u);
    ctx->pc = 0x24FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA1Cu;
            // 0x24fa20: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA24u; }
        if (ctx->pc != 0x24FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA24u; }
        if (ctx->pc != 0x24FA24u) { return; }
    }
    ctx->pc = 0x24FA24u;
label_24fa24:
    // 0x24fa24: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x24fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x24fa28: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x24fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x24fa2c: 0xc6140414  lwc1        $f20, 0x414($s0)
    ctx->pc = 0x24fa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24fa30: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x24fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x24fa34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fa38: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24FA38u;
    SET_GPR_U32(ctx, 31, 0x24FA40u);
    ctx->pc = 0x24FA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA38u;
            // 0x24fa3c: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA40u; }
        if (ctx->pc != 0x24FA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA40u; }
        if (ctx->pc != 0x24FA40u) { return; }
    }
    ctx->pc = 0x24FA40u;
label_24fa40:
    // 0x24fa40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24fa40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa44: 0x3c024313  lui         $v0, 0x4313
    ctx->pc = 0x24fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17171 << 16));
    // 0x24fa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fa4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24FA4Cu;
    SET_GPR_U32(ctx, 31, 0x24FA54u);
    ctx->pc = 0x24FA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA4Cu;
            // 0x24fa50: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA54u; }
        if (ctx->pc != 0x24FA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA54u; }
        if (ctx->pc != 0x24FA54u) { return; }
    }
    ctx->pc = 0x24FA54u;
label_24fa54:
    // 0x24fa54: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24fa54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24fa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa5c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x24fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x24fa60: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24fa64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24fa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa68: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24FA68u;
    SET_GPR_U32(ctx, 31, 0x24FA70u);
    ctx->pc = 0x24FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA68u;
            // 0x24fa6c: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA70u; }
        if (ctx->pc != 0x24FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA70u; }
        if (ctx->pc != 0x24FA70u) { return; }
    }
    ctx->pc = 0x24FA70u;
label_24fa70:
    // 0x24fa70: 0xc088050  jal         func_220140
    ctx->pc = 0x24FA70u;
    SET_GPR_U32(ctx, 31, 0x24FA78u);
    ctx->pc = 0x24FA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA70u;
            // 0x24fa74: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA78u; }
        if (ctx->pc != 0x24FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA78u; }
        if (ctx->pc != 0x24FA78u) { return; }
    }
    ctx->pc = 0x24FA78u;
label_24fa78:
    // 0x24fa78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa7c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x24FA7Cu;
    SET_GPR_U32(ctx, 31, 0x24FA84u);
    ctx->pc = 0x24FA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA7Cu;
            // 0x24fa80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA84u; }
        if (ctx->pc != 0x24FA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA84u; }
        if (ctx->pc != 0x24FA84u) { return; }
    }
    ctx->pc = 0x24FA84u;
label_24fa84:
    // 0x24fa84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa88: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24FA88u;
    SET_GPR_U32(ctx, 31, 0x24FA90u);
    ctx->pc = 0x24FA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA88u;
            // 0x24fa8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA90u; }
        if (ctx->pc != 0x24FA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA90u; }
        if (ctx->pc != 0x24FA90u) { return; }
    }
    ctx->pc = 0x24FA90u;
label_24fa90:
    // 0x24fa90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fa94: 0xc6000444  lwc1        $f0, 0x444($s0)
    ctx->pc = 0x24fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa98: 0xc6010424  lwc1        $f1, 0x424($s0)
    ctx->pc = 0x24fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fa9c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24faa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24faa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24faa4: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x24faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x24faa8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24faa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24faac: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x24faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x24fab0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x24fab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24fab4: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x24fab4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24fab8: 0x460020dd  msub.s      $f3, $f4, $f0
    ctx->pc = 0x24fab8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x24fabc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x24fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x24fac0: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x24fac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x24fac4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x24fac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24fac8: 0x0  nop
    ctx->pc = 0x24fac8u;
    // NOP
    // 0x24facc: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x24faccu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x24fad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24fad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24fad4: 0xe6000424  swc1        $f0, 0x424($s0)
    ctx->pc = 0x24fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    // 0x24fad8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fadc: 0xc6000424  lwc1        $f0, 0x424($s0)
    ctx->pc = 0x24fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fae0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fae4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24fae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24fae8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24faec: 0x0  nop
    ctx->pc = 0x24faecu;
    // NOP
    // 0x24faf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24FAF0u;
    {
        const bool branch_taken_0x24faf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24faf0) {
            ctx->pc = 0x24FAFCu;
            goto label_24fafc;
        }
    }
    ctx->pc = 0x24FAF8u;
    // 0x24faf8: 0xe6030424  swc1        $f3, 0x424($s0)
    ctx->pc = 0x24faf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
label_24fafc:
    // 0x24fafc: 0x8e05043c  lw          $a1, 0x43C($s0)
    ctx->pc = 0x24fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x24fb00: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24FB00u;
    SET_GPR_U32(ctx, 31, 0x24FB08u);
    ctx->pc = 0x24FB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB00u;
            // 0x24fb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB08u; }
        if (ctx->pc != 0x24FB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB08u; }
        if (ctx->pc != 0x24FB08u) { return; }
    }
    ctx->pc = 0x24FB08u;
label_24fb08:
    // 0x24fb08: 0x8e080404  lw          $t0, 0x404($s0)
    ctx->pc = 0x24fb08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24fb0c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24fb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24fb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb18: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24FB18u;
    SET_GPR_U32(ctx, 31, 0x24FB20u);
    ctx->pc = 0x24FB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB18u;
            // 0x24fb1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB20u; }
        if (ctx->pc != 0x24FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB20u; }
        if (ctx->pc != 0x24FB20u) { return; }
    }
    ctx->pc = 0x24FB20u;
label_24fb20:
    // 0x24fb20: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x24fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24fb24: 0x24050111  addiu       $a1, $zero, 0x111
    ctx->pc = 0x24fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x24fb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24fb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb2c: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x24fb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x24fb30: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24FB30u;
    SET_GPR_U32(ctx, 31, 0x24FB38u);
    ctx->pc = 0x24FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB30u;
            // 0x24fb34: 0x24080037  addiu       $t0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB38u; }
        if (ctx->pc != 0x24FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB38u; }
        if (ctx->pc != 0x24FB38u) { return; }
    }
    ctx->pc = 0x24FB38u;
label_24fb38:
    // 0x24fb38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24fb38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24fb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fb40:
    // 0x24fb40: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x24fb40u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fb44: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x24fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x24fb48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24fb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24fb4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24fb4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24fb50: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x24fb54: 0xc6030424  lwc1        $f3, 0x424($s0)
    ctx->pc = 0x24fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fb58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24fb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24fb5c: 0x46011d00  add.s       $f20, $f3, $f1
    ctx->pc = 0x24fb5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x24fb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fb64: 0x0  nop
    ctx->pc = 0x24fb64u;
    // NOP
    // 0x24fb68: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x24fb68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb6c: 0x0  nop
    ctx->pc = 0x24fb6cu;
    // NOP
    // 0x24fb70: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x24FB70u;
    {
        const bool branch_taken_0x24fb70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fb70) {
            ctx->pc = 0x24FBBCu;
            goto label_24fbbc;
        }
    }
    ctx->pc = 0x24FB78u;
    // 0x24fb78: 0xc6150420  lwc1        $f21, 0x420($s0)
    ctx->pc = 0x24fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24fb7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24fb7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fb80:
    // 0x24fb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x24fb84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24fb88: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x24fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24fb8c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24FB8Cu;
    SET_GPR_U32(ctx, 31, 0x24FB94u);
    ctx->pc = 0x24FB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB8Cu;
            // 0x24fb90: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB94u; }
        if (ctx->pc != 0x24FB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB94u; }
        if (ctx->pc != 0x24FB94u) { return; }
    }
    ctx->pc = 0x24FB94u;
label_24fb94:
    // 0x24fb94: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x24fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
    // 0x24fb98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24fb98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24fb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fba0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x24fba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24fba4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24FBA4u;
    {
        const bool branch_taken_0x24fba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FBA4u;
            // 0x24fba8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fba4) {
            ctx->pc = 0x24FB80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24fb80;
        }
    }
    ctx->pc = 0x24FBACu;
    // 0x24fbac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x24fbacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24fbb0: 0x2a810005  slti        $at, $s4, 0x5
    ctx->pc = 0x24fbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24fbb4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FBB4u;
    {
        const bool branch_taken_0x24fbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fbb4) {
            ctx->pc = 0x24FBD0u;
            goto label_24fbd0;
        }
    }
    ctx->pc = 0x24FBBCu;
label_24fbbc:
    // 0x24fbbc: 0x0  nop
    ctx->pc = 0x24fbbcu;
    // NOP
    // 0x24fbc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24fbc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24fbc4: 0x2a420032  slti        $v0, $s2, 0x32
    ctx->pc = 0x24fbc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x24fbc8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x24FBC8u;
    {
        const bool branch_taken_0x24fbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fbc8) {
            ctx->pc = 0x24FB40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24fb40;
        }
    }
    ctx->pc = 0x24FBD0u;
label_24fbd0:
    // 0x24fbd0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24FBD0u;
    SET_GPR_U32(ctx, 31, 0x24FBD8u);
    ctx->pc = 0x24FBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FBD0u;
            // 0x24fbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBD8u; }
        if (ctx->pc != 0x24FBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBD8u; }
        if (ctx->pc != 0x24FBD8u) { return; }
    }
    ctx->pc = 0x24FBD8u;
label_24fbd8:
    // 0x24fbd8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x24fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x24fbdc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24fbe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24fbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fbe4: 0xc6020420  lwc1        $f2, 0x420($s0)
    ctx->pc = 0x24fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fbe8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x24fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x24fbec: 0xc6000424  lwc1        $f0, 0x424($s0)
    ctx->pc = 0x24fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fbf0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x24fbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24fbf4: 0xc60e0428  lwc1        $f14, 0x428($s0)
    ctx->pc = 0x24fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24fbf8: 0xc60f042c  lwc1        $f15, 0x42C($s0)
    ctx->pc = 0x24fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24fbfc: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x24fbfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24fc00: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x24FC00u;
    SET_GPR_U32(ctx, 31, 0x24FC08u);
    ctx->pc = 0x24FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC00u;
            // 0x24fc04: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC08u; }
        if (ctx->pc != 0x24FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC08u; }
        if (ctx->pc != 0x24FC08u) { return; }
    }
    ctx->pc = 0x24FC08u;
label_24fc08:
    // 0x24fc08: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x24fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24fc0c: 0xc78083ec  lwc1        $f0, -0x7C14($gp)
    ctx->pc = 0x24fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fc10: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x24fc14: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x24fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x24fc18: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x24fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x24fc1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24fc20: 0x27a201ec  addiu       $v0, $sp, 0x1EC
    ctx->pc = 0x24fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x24fc24: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x24fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x24fc28: 0x24a5bbd8  addiu       $a1, $a1, -0x4428
    ctx->pc = 0x24fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949848));
    // 0x24fc2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24fc30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24fc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24fc34: 0x82020404  lb          $v0, 0x404($s0)
    ctx->pc = 0x24fc34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24fc38: 0xc04b414  jal         func_12D050
    ctx->pc = 0x24FC38u;
    SET_GPR_U32(ctx, 31, 0x24FC40u);
    ctx->pc = 0x24FC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC38u;
            // 0x24fc3c: 0xa3a201ef  sb          $v0, 0x1EF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 495), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC40u; }
        if (ctx->pc != 0x24FC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC40u; }
        if (ctx->pc != 0x24FC40u) { return; }
    }
    ctx->pc = 0x24FC40u;
label_24fc40:
    // 0x24fc40: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x24fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x24fc44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x24fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24fc48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24fc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc4c: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x24fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x24fc50: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24fc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24fc54: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24FC54u;
    SET_GPR_U32(ctx, 31, 0x24FC5Cu);
    ctx->pc = 0x24FC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC54u;
            // 0x24fc58: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC5Cu; }
        if (ctx->pc != 0x24FC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC5Cu; }
        if (ctx->pc != 0x24FC5Cu) { return; }
    }
    ctx->pc = 0x24FC5Cu;
label_24fc5c:
    // 0x24fc5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24fc5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc60: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x24fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x24fc64: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x24fc64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc68: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x24FC68u;
    {
        const bool branch_taken_0x24fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC68u;
            // 0x24fc6c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc68) {
            ctx->pc = 0x24FEB0u;
            goto label_24feb0;
        }
    }
    ctx->pc = 0x24FC70u;
label_24fc70:
    // 0x24fc70: 0xc6010420  lwc1        $f1, 0x420($s0)
    ctx->pc = 0x24fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fc74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x24fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x24fc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fc7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24fc7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc80: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x24fc80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24fc84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24fc88: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x24fc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_24fc8c:
    // 0x24fc8c: 0x0  nop
    ctx->pc = 0x24fc8cu;
    // NOP
    // 0x24fc90: 0x27b70124  addiu       $s7, $sp, 0x124
    ctx->pc = 0x24fc90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x24fc94: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x24fc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fc98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24fc98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fc9c: 0x0  nop
    ctx->pc = 0x24fc9cu;
    // NOP
    // 0x24fca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24fca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fca4: 0x0  nop
    ctx->pc = 0x24fca4u;
    // NOP
    // 0x24fca8: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x24FCA8u;
    {
        const bool branch_taken_0x24fca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fca8) {
            ctx->pc = 0x24FE40u;
            goto label_24fe40;
        }
    }
    ctx->pc = 0x24FCB0u;
    // 0x24fcb0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x24fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x24fcb4: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x24fcb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24fcb8: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x24FCB8u;
    {
        const bool branch_taken_0x24fcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCB8u;
            // 0x24fcbc: 0x2161021  addu        $v0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcb8) {
            ctx->pc = 0x24FE58u;
            goto label_24fe58;
        }
    }
    ctx->pc = 0x24FCC0u;
    // 0x24fcc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcc4: 0x24530114  addiu       $s3, $v0, 0x114
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
    // 0x24fcc8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x24fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24fccc: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x24fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x24fcd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24fcd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24fcd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcd8: 0x27a901ec  addiu       $t1, $sp, 0x1EC
    ctx->pc = 0x24fcd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x24fcdc: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x24fcdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24fce0: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x24FCE0u;
    SET_GPR_U32(ctx, 31, 0x24FCE8u);
    ctx->pc = 0x24FCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCE0u;
            // 0x24fce4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCE8u; }
        if (ctx->pc != 0x24FCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCE8u; }
        if (ctx->pc != 0x24FCE8u) { return; }
    }
    ctx->pc = 0x24FCE8u;
label_24fce8:
    // 0x24fce8: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x24FCE8u;
    SET_GPR_U32(ctx, 31, 0x24FCF0u);
    ctx->pc = 0x24FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCE8u;
            // 0x24fcec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCF0u; }
        if (ctx->pc != 0x24FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FCF0u; }
        if (ctx->pc != 0x24FCF0u) { return; }
    }
    ctx->pc = 0x24FCF0u;
label_24fcf0:
    // 0x24fcf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24fcf4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24fcf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcf8: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x24fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x24fcfc: 0x84730002  lh          $s3, 0x2($v1)
    ctx->pc = 0x24fcfcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24fd00: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24FD00u;
    {
        const bool branch_taken_0x24fd00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fd00) {
            ctx->pc = 0x24FD20u;
            goto label_24fd20;
        }
    }
    ctx->pc = 0x24FD08u;
    // 0x24fd08: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x24FD08u;
    SET_GPR_U32(ctx, 31, 0x24FD10u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD10u; }
        if (ctx->pc != 0x24FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD10u; }
        if (ctx->pc != 0x24FD10u) { return; }
    }
    ctx->pc = 0x24FD10u;
label_24fd10:
    // 0x24fd10: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x24fd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x24fd14: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24fd14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x24fd18: 0x84344da0  lh          $s4, 0x4DA0($at)
    ctx->pc = 0x24fd18u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
    // 0x24fd1c: 0x0  nop
    ctx->pc = 0x24fd1cu;
    // NOP
label_24fd20:
    // 0x24fd20: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x24fd20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24fd24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FD24u;
    {
        const bool branch_taken_0x24fd24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD24u;
            // 0x24fd28: 0x24020137  addiu       $v0, $zero, 0x137 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd24) {
            ctx->pc = 0x24FD34u;
            goto label_24fd34;
        }
    }
    ctx->pc = 0x24FD2Cu;
    // 0x24fd2c: 0x1662003e  bne         $s3, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x24FD2Cu;
    {
        const bool branch_taken_0x24fd2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fd2c) {
            ctx->pc = 0x24FE28u;
            goto label_24fe28;
        }
    }
    ctx->pc = 0x24FD34u;
label_24fd34:
    // 0x24fd34: 0x0  nop
    ctx->pc = 0x24fd34u;
    // NOP
    // 0x24fd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd3c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x24FD3Cu;
    SET_GPR_U32(ctx, 31, 0x24FD44u);
    ctx->pc = 0x24FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD3Cu;
            // 0x24fd40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD44u; }
        if (ctx->pc != 0x24FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD44u; }
        if (ctx->pc != 0x24FD44u) { return; }
    }
    ctx->pc = 0x24FD44u;
label_24fd44:
    // 0x24fd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd48: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24FD48u;
    SET_GPR_U32(ctx, 31, 0x24FD50u);
    ctx->pc = 0x24FD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD48u;
            // 0x24fd4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD50u; }
        if (ctx->pc != 0x24FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD50u; }
        if (ctx->pc != 0x24FD50u) { return; }
    }
    ctx->pc = 0x24FD50u;
label_24fd50:
    // 0x24fd50: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x24fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x24fd54: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24FD54u;
    SET_GPR_U32(ctx, 31, 0x24FD5Cu);
    ctx->pc = 0x24FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD54u;
            // 0x24fd58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD5Cu; }
        if (ctx->pc != 0x24FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD5Cu; }
        if (ctx->pc != 0x24FD5Cu) { return; }
    }
    ctx->pc = 0x24FD5Cu;
label_24fd5c:
    // 0x24fd5c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x24fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24fd60: 0x8042036c  lb          $v0, 0x36C($v0)
    ctx->pc = 0x24fd60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x24fd64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FD64u;
    {
        const bool branch_taken_0x24fd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fd64) {
            ctx->pc = 0x24FD8Cu;
            goto label_24fd8c;
        }
    }
    ctx->pc = 0x24FD6Cu;
    // 0x24fd6c: 0x8e080404  lw          $t0, 0x404($s0)
    ctx->pc = 0x24fd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24fd70: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x24fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x24fd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24fd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd7c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24FD7Cu;
    SET_GPR_U32(ctx, 31, 0x24FD84u);
    ctx->pc = 0x24FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD7Cu;
            // 0x24fd80: 0x24070094  addiu       $a3, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD84u; }
        if (ctx->pc != 0x24FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD84u; }
        if (ctx->pc != 0x24FD84u) { return; }
    }
    ctx->pc = 0x24FD84u;
label_24fd84:
    // 0x24fd84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24FD84u;
    {
        const bool branch_taken_0x24fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fd84) {
            ctx->pc = 0x24FDA8u;
            goto label_24fda8;
        }
    }
    ctx->pc = 0x24FD8Cu;
label_24fd8c:
    // 0x24fd8c: 0x0  nop
    ctx->pc = 0x24fd8cu;
    // NOP
    // 0x24fd90: 0x8e080404  lw          $t0, 0x404($s0)
    ctx->pc = 0x24fd90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24fd94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24fd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24fd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fda0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24FDA0u;
    SET_GPR_U32(ctx, 31, 0x24FDA8u);
    ctx->pc = 0x24FDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDA0u;
            // 0x24fda4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDA8u; }
        if (ctx->pc != 0x24FDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDA8u; }
        if (ctx->pc != 0x24FDA8u) { return; }
    }
    ctx->pc = 0x24FDA8u;
label_24fda8:
    // 0x24fda8: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x24fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x24fdac: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24FDACu;
    {
        const bool branch_taken_0x24fdac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fdac) {
            ctx->pc = 0x24FDCCu;
            goto label_24fdcc;
        }
    }
    ctx->pc = 0x24FDB4u;
    // 0x24fdb4: 0x8e080404  lw          $t0, 0x404($s0)
    ctx->pc = 0x24fdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24fdb8: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x24fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x24fdbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24fdc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdc4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24FDC4u;
    SET_GPR_U32(ctx, 31, 0x24FDCCu);
    ctx->pc = 0x24FDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDC4u;
            // 0x24fdc8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDCCu; }
        if (ctx->pc != 0x24FDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDCCu; }
        if (ctx->pc != 0x24FDCCu) { return; }
    }
    ctx->pc = 0x24FDCCu;
label_24fdcc:
    // 0x24fdcc: 0x0  nop
    ctx->pc = 0x24fdccu;
    // NOP
    // 0x24fdd0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x24fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x24fdd4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x24fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fdd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24fdd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fddc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24FDDCu;
    SET_GPR_U32(ctx, 31, 0x24FDE4u);
    ctx->pc = 0x24FDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDDCu;
            // 0x24fde0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDE4u; }
        if (ctx->pc != 0x24FDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDE4u; }
        if (ctx->pc != 0x24FDE4u) { return; }
    }
    ctx->pc = 0x24FDE4u;
label_24fde4:
    // 0x24fde4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x24fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fde8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24fde8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdec: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x24fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x24fdf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24fdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fdf4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24FDF4u;
    SET_GPR_U32(ctx, 31, 0x24FDFCu);
    ctx->pc = 0x24FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDF4u;
            // 0x24fdf8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDFCu; }
        if (ctx->pc != 0x24FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDFCu; }
        if (ctx->pc != 0x24FDFCu) { return; }
    }
    ctx->pc = 0x24FDFCu;
label_24fdfc:
    // 0x24fdfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24fdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24fe00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24fe04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24fe0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe10: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x24fe10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24fe14: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x24fe14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24fe18: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x24FE18u;
    SET_GPR_U32(ctx, 31, 0x24FE20u);
    ctx->pc = 0x24FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE18u;
            // 0x24fe1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FE20u; }
        if (ctx->pc != 0x24FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FE20u; }
        if (ctx->pc != 0x24FE20u) { return; }
    }
    ctx->pc = 0x24FE20u;
label_24fe20:
    // 0x24fe20: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24FE20u;
    SET_GPR_U32(ctx, 31, 0x24FE28u);
    ctx->pc = 0x24FE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE20u;
            // 0x24fe24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FE28u; }
        if (ctx->pc != 0x24FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FE28u; }
        if (ctx->pc != 0x24FE28u) { return; }
    }
    ctx->pc = 0x24FE28u;
label_24fe28:
    // 0x24fe28: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x24fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
    // 0x24fe2c: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x24fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fe30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fe30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fe34: 0x0  nop
    ctx->pc = 0x24fe34u;
    // NOP
    // 0x24fe38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24fe38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24fe3c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x24fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_24fe40:
    // 0x24fe40: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24fe40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x24fe44: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x24fe44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24fe48: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x24fe48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x24fe4c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x24fe4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x24fe50: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x24FE50u;
    {
        const bool branch_taken_0x24fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE50u;
            // 0x24fe54: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe50) {
            ctx->pc = 0x24FC8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24fc8c;
        }
    }
    ctx->pc = 0x24FE58u;
label_24fe58:
    // 0x24fe58: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x24fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x24fe5c: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x24fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fe60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fe60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fe64: 0x0  nop
    ctx->pc = 0x24fe64u;
    // NOP
    // 0x24fe68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24fe68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24fe6c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x24fe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x24fe70: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x24fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x24fe74: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x24fe74u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x24fe78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24fe7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24fe7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fe80: 0x0  nop
    ctx->pc = 0x24fe80u;
    // NOP
    // 0x24fe84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24fe84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24fe88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24fe88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fe8c: 0x0  nop
    ctx->pc = 0x24fe8cu;
    // NOP
    // 0x24fe90: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x24FE90u;
    {
        const bool branch_taken_0x24fe90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fe90) {
            ctx->pc = 0x24FED8u;
            goto label_24fed8;
        }
    }
    ctx->pc = 0x24FE98u;
    // 0x24fe98: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x24fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24fe9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fea0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x24fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x24fea4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24fea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24feac: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x24feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_24feb0:
    // 0x24feb0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x24feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x24feb4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x24feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24feb8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x24feb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24febc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FEBCu;
    {
        const bool branch_taken_0x24febc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24febc) {
            ctx->pc = 0x24FED8u;
            goto label_24fed8;
        }
    }
    ctx->pc = 0x24FEC4u;
    // 0x24fec4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x24fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24fec8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24fecc: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x24feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x24fed0: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x24FED0u;
    {
        const bool branch_taken_0x24fed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fed0) {
            ctx->pc = 0x24FC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24fc70;
        }
    }
    ctx->pc = 0x24FED8u;
label_24fed8:
    // 0x24fed8: 0xc088070  jal         func_2201C0
    ctx->pc = 0x24FED8u;
    SET_GPR_U32(ctx, 31, 0x24FEE0u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEE0u; }
        if (ctx->pc != 0x24FEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEE0u; }
        if (ctx->pc != 0x24FEE0u) { return; }
    }
    ctx->pc = 0x24FEE0u;
label_24fee0:
    // 0x24fee0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fee8: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x24fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24feec: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x24feecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24fef0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x24FEF0u;
    SET_GPR_U32(ctx, 31, 0x24FEF8u);
    ctx->pc = 0x24FEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FEF0u;
            // 0x24fef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEF8u; }
        if (ctx->pc != 0x24FEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEF8u; }
        if (ctx->pc != 0x24FEF8u) { return; }
    }
    ctx->pc = 0x24FEF8u;
label_24fef8:
    // 0x24fef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fefc: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x24FEFCu;
    SET_GPR_U32(ctx, 31, 0x24FF04u);
    ctx->pc = 0x24FF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FEFCu;
            // 0x24ff00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF04u; }
        if (ctx->pc != 0x24FF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF04u; }
        if (ctx->pc != 0x24FF04u) { return; }
    }
    ctx->pc = 0x24FF04u;
label_24ff04:
    // 0x24ff04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff08: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24FF08u;
    SET_GPR_U32(ctx, 31, 0x24FF10u);
    ctx->pc = 0x24FF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FF08u;
            // 0x24ff0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF10u; }
        if (ctx->pc != 0x24FF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF10u; }
        if (ctx->pc != 0x24FF10u) { return; }
    }
    ctx->pc = 0x24FF10u;
label_24ff10:
    // 0x24ff10: 0x8e080404  lw          $t0, 0x404($s0)
    ctx->pc = 0x24ff10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24ff14: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24ff18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24ff1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff20: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24FF20u;
    SET_GPR_U32(ctx, 31, 0x24FF28u);
    ctx->pc = 0x24FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FF20u;
            // 0x24ff24: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF28u; }
        if (ctx->pc != 0x24FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF28u; }
        if (ctx->pc != 0x24FF28u) { return; }
    }
    ctx->pc = 0x24FF28u;
label_24ff28:
    // 0x24ff28: 0x8e05043c  lw          $a1, 0x43C($s0)
    ctx->pc = 0x24ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x24ff2c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24FF2Cu;
    SET_GPR_U32(ctx, 31, 0x24FF34u);
    ctx->pc = 0x24FF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FF2Cu;
            // 0x24ff30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF34u; }
        if (ctx->pc != 0x24FF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF34u; }
        if (ctx->pc != 0x24FF34u) { return; }
    }
    ctx->pc = 0x24FF34u;
label_24ff34:
    // 0x24ff34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24ff34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24ff38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff3c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x24ff3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x24ff40: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x24FF40u;
    SET_GPR_U32(ctx, 31, 0x24FF48u);
    ctx->pc = 0x24FF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FF40u;
            // 0x24ff44: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF48u; }
        if (ctx->pc != 0x24FF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF48u; }
        if (ctx->pc != 0x24FF48u) { return; }
    }
    ctx->pc = 0x24FF48u;
label_24ff48:
    // 0x24ff48: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24FF48u;
    SET_GPR_U32(ctx, 31, 0x24FF50u);
    ctx->pc = 0x24FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FF48u;
            // 0x24ff4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF50u; }
        if (ctx->pc != 0x24FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FF50u; }
        if (ctx->pc != 0x24FF50u) { return; }
    }
    ctx->pc = 0x24FF50u;
label_24ff50:
    // 0x24ff50: 0xc6000448  lwc1        $f0, 0x448($s0)
    ctx->pc = 0x24ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ff54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24ff58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24ff58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ff5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24ff5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ff60: 0x0  nop
    ctx->pc = 0x24ff60u;
    // NOP
    // 0x24ff64: 0x460200c1  sub.s       $f3, $f0, $f2
    ctx->pc = 0x24ff64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24ff68: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x24ff68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ff6c: 0x0  nop
    ctx->pc = 0x24ff6cu;
    // NOP
    // 0x24ff70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24FF70u;
    {
        const bool branch_taken_0x24ff70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FF70u;
            // 0x24ff74: 0x3c0242f0  lui         $v0, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff70) {
            ctx->pc = 0x24FF84u;
            goto label_24ff84;
        }
    }
    ctx->pc = 0x24FF78u;
    // 0x24ff78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24ff7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x24ff7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24ff80: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_24ff84:
    // 0x24ff84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x24ff84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24ff88: 0xc6010444  lwc1        $f1, 0x444($s0)
    ctx->pc = 0x24ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ff8c: 0x46032503  div.s       $f20, $f4, $f3
    ctx->pc = 0x24ff8cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x24ff90: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x24ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x24ff94: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x24ff94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24ff98: 0x46142041  sub.s       $f1, $f4, $f20
    ctx->pc = 0x24ff98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x24ff9c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x24ff9cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x24ffa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ffa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ffa4: 0x0  nop
    ctx->pc = 0x24ffa4u;
    // NOP
    // 0x24ffa8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24ffa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24ffac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x24ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x24ffb0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x24ffb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x24ffb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x24ffb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ffb8: 0xc6050438  lwc1        $f5, 0x438($s0)
    ctx->pc = 0x24ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ffbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ffbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ffc0: 0x0  nop
    ctx->pc = 0x24ffc0u;
    // NOP
    // 0x24ffc4: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x24ffc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ffc8: 0x0  nop
    ctx->pc = 0x24ffc8u;
    // NOP
    // 0x24ffcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24FFCCu;
    {
        const bool branch_taken_0x24ffcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ffcc) {
            ctx->pc = 0x24FFDCu;
            goto label_24ffdc;
        }
    }
    ctx->pc = 0x24FFD4u;
    // 0x24ffd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24FFD4u;
    {
        const bool branch_taken_0x24ffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FFD4u;
            // 0x24ffd8: 0xe6010438  swc1        $f1, 0x438($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffd4) {
            ctx->pc = 0x24FFF8u;
            goto label_24fff8;
        }
    }
    ctx->pc = 0x24FFDCu;
label_24ffdc:
    // 0x24ffdc: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x24ffdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x24ffe0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x24ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x24ffe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ffe8: 0x0  nop
    ctx->pc = 0x24ffe8u;
    // NOP
    // 0x24ffec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ffecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24fff0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x24fff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x24fff4: 0xe6000438  swc1        $f0, 0x438($s0)
    ctx->pc = 0x24fff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
label_24fff8:
    // 0x24fff8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fffc: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x24fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x250000: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x250000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x250004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250008: 0xc6150438  lwc1        $f21, 0x438($s0)
    ctx->pc = 0x250008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25000c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250010: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x250010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250014: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x250014u;
    SET_GPR_U32(ctx, 31, 0x25001Cu);
    ctx->pc = 0x250018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250014u;
            // 0x250018: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25001Cu; }
        if (ctx->pc != 0x25001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25001Cu; }
        if (ctx->pc != 0x25001Cu) { return; }
    }
    ctx->pc = 0x25001Cu;
label_25001c:
    // 0x25001c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250020: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x250020u;
    SET_GPR_U32(ctx, 31, 0x250028u);
    ctx->pc = 0x250024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250020u;
            // 0x250024: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250028u; }
        if (ctx->pc != 0x250028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250028u; }
        if (ctx->pc != 0x250028u) { return; }
    }
    ctx->pc = 0x250028u;
label_250028:
    // 0x250028: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x250028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x25002c: 0x2405013e  addiu       $a1, $zero, 0x13E
    ctx->pc = 0x25002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x250030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250034: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x250034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x250038: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x250038u;
    SET_GPR_U32(ctx, 31, 0x250040u);
    ctx->pc = 0x25003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250038u;
            // 0x25003c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250040u; }
        if (ctx->pc != 0x250040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250040u; }
        if (ctx->pc != 0x250040u) { return; }
    }
    ctx->pc = 0x250040u;
label_250040:
    // 0x250040: 0xc0a248c  jal         func_289230
    ctx->pc = 0x250040u;
    SET_GPR_U32(ctx, 31, 0x250048u);
    ctx->pc = 0x250044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250040u;
            // 0x250044: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250048u; }
        if (ctx->pc != 0x250048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250048u; }
        if (ctx->pc != 0x250048u) { return; }
    }
    ctx->pc = 0x250048u;
label_250048:
    // 0x250048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x250048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25004c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25004Cu;
    SET_GPR_U32(ctx, 31, 0x250054u);
    ctx->pc = 0x250050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25004Cu;
            // 0x250050: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250054u; }
        if (ctx->pc != 0x250054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250054u; }
        if (ctx->pc != 0x250054u) { return; }
    }
    ctx->pc = 0x250054u;
label_250054:
    // 0x250054: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x250054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250058: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x25005c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25005cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250060: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x250060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x250064: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x250064u;
    SET_GPR_U32(ctx, 31, 0x25006Cu);
    ctx->pc = 0x250068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250064u;
            // 0x250068: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25006Cu; }
        if (ctx->pc != 0x25006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25006Cu; }
        if (ctx->pc != 0x25006Cu) { return; }
    }
    ctx->pc = 0x25006Cu;
label_25006c:
    // 0x25006c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250070: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x250070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x250074: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x250074u;
    SET_GPR_U32(ctx, 31, 0x25007Cu);
    ctx->pc = 0x250078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250074u;
            // 0x250078: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25007Cu; }
        if (ctx->pc != 0x25007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25007Cu; }
        if (ctx->pc != 0x25007Cu) { return; }
    }
    ctx->pc = 0x25007Cu;
label_25007c:
    // 0x25007c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x25007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x250080: 0x2405013e  addiu       $a1, $zero, 0x13E
    ctx->pc = 0x250080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x250084: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x250084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x250088: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x250088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25008c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x25008Cu;
    SET_GPR_U32(ctx, 31, 0x250094u);
    ctx->pc = 0x250090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25008Cu;
            // 0x250090: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250094u; }
        if (ctx->pc != 0x250094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250094u; }
        if (ctx->pc != 0x250094u) { return; }
    }
    ctx->pc = 0x250094u;
label_250094:
    // 0x250094: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x250094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x250098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25009c: 0x0  nop
    ctx->pc = 0x25009cu;
    // NOP
    // 0x2500a0: 0x46150540  add.s       $f21, $f0, $f21
    ctx->pc = 0x2500a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2500a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2500A4u;
    SET_GPR_U32(ctx, 31, 0x2500ACu);
    ctx->pc = 0x2500A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2500A4u;
            // 0x2500a8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500ACu; }
        if (ctx->pc != 0x2500ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500ACu; }
        if (ctx->pc != 0x2500ACu) { return; }
    }
    ctx->pc = 0x2500ACu;
label_2500ac:
    // 0x2500ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2500acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500b0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2500b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2500b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2500b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2500b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2500B8u;
    SET_GPR_U32(ctx, 31, 0x2500C0u);
    ctx->pc = 0x2500BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2500B8u;
            // 0x2500bc: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500C0u; }
        if (ctx->pc != 0x2500C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500C0u; }
        if (ctx->pc != 0x2500C0u) { return; }
    }
    ctx->pc = 0x2500C0u;
label_2500c0:
    // 0x2500c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2500c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500c4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2500c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500c8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2500c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2500cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2500ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2500D0u;
    SET_GPR_U32(ctx, 31, 0x2500D8u);
    ctx->pc = 0x2500D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2500D0u;
            // 0x2500d4: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500D8u; }
        if (ctx->pc != 0x2500D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500D8u; }
        if (ctx->pc != 0x2500D8u) { return; }
    }
    ctx->pc = 0x2500D8u;
label_2500d8:
    // 0x2500d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2500d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2500dc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2500dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2500e0: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2500E0u;
    SET_GPR_U32(ctx, 31, 0x2500E8u);
    ctx->pc = 0x2500E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2500E0u;
            // 0x2500e4: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500E8u; }
        if (ctx->pc != 0x2500E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2500E8u; }
        if (ctx->pc != 0x2500E8u) { return; }
    }
    ctx->pc = 0x2500E8u;
label_2500e8:
    // 0x2500e8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2500e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2500ec: 0x2405013e  addiu       $a1, $zero, 0x13E
    ctx->pc = 0x2500ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2500f0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2500f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2500f4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2500f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2500f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2500F8u;
    SET_GPR_U32(ctx, 31, 0x250100u);
    ctx->pc = 0x2500FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2500F8u;
            // 0x2500fc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250100u; }
        if (ctx->pc != 0x250100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250100u; }
        if (ctx->pc != 0x250100u) { return; }
    }
    ctx->pc = 0x250100u;
label_250100:
    // 0x250100: 0x4614a840  add.s       $f1, $f21, $f20
    ctx->pc = 0x250100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x250104: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x250104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x250108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25010c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25010Cu;
    SET_GPR_U32(ctx, 31, 0x250114u);
    ctx->pc = 0x250110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25010Cu;
            // 0x250110: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250114u; }
        if (ctx->pc != 0x250114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250114u; }
        if (ctx->pc != 0x250114u) { return; }
    }
    ctx->pc = 0x250114u;
label_250114:
    // 0x250114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x250114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250118: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x250118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25011c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x25011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x250120: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x250120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x250124: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x250124u;
    SET_GPR_U32(ctx, 31, 0x25012Cu);
    ctx->pc = 0x250128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250124u;
            // 0x250128: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25012Cu; }
        if (ctx->pc != 0x25012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25012Cu; }
        if (ctx->pc != 0x25012Cu) { return; }
    }
    ctx->pc = 0x25012Cu;
label_25012c:
    // 0x25012c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250130: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x250130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x250134: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x250134u;
    SET_GPR_U32(ctx, 31, 0x25013Cu);
    ctx->pc = 0x250138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250134u;
            // 0x250138: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25013Cu; }
        if (ctx->pc != 0x25013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25013Cu; }
        if (ctx->pc != 0x25013Cu) { return; }
    }
    ctx->pc = 0x25013Cu;
label_25013c:
    // 0x25013c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x25013Cu;
    SET_GPR_U32(ctx, 31, 0x250144u);
    ctx->pc = 0x250140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25013Cu;
            // 0x250140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250144u; }
        if (ctx->pc != 0x250144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250144u; }
        if (ctx->pc != 0x250144u) { return; }
    }
    ctx->pc = 0x250144u;
label_250144:
    // 0x250144: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250148: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x250148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25014c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x25014cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x250150: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x250150u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x250154: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x250154u;
    SET_GPR_U32(ctx, 31, 0x25015Cu);
    ctx->pc = 0x250158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250154u;
            // 0x250158: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25015Cu; }
        if (ctx->pc != 0x25015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25015Cu; }
        if (ctx->pc != 0x25015Cu) { return; }
    }
    ctx->pc = 0x25015Cu;
label_25015c:
    // 0x25015c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x250160: 0xc60c0420  lwc1        $f12, 0x420($s0)
    ctx->pc = 0x250160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250164: 0xc60e0428  lwc1        $f14, 0x428($s0)
    ctx->pc = 0x250164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x250168: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x250168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25016c: 0xc60f042c  lwc1        $f15, 0x42C($s0)
    ctx->pc = 0x25016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x250170: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x250170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250174: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x250174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x250178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25017c: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x25017Cu;
    SET_GPR_U32(ctx, 31, 0x250184u);
    ctx->pc = 0x250180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25017Cu;
            // 0x250180: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250184u; }
        if (ctx->pc != 0x250184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250184u; }
        if (ctx->pc != 0x250184u) { return; }
    }
    ctx->pc = 0x250184u;
label_250184:
    // 0x250184: 0x8e050440  lw          $a1, 0x440($s0)
    ctx->pc = 0x250184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x250188: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x250188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25018c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x25018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x250190: 0x27a60144  addiu       $a2, $sp, 0x144
    ctx->pc = 0x250190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x250194: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x250194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x250198: 0xc6020428  lwc1        $f2, 0x428($s0)
    ctx->pc = 0x250198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25019c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x25019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2501a0: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x2501a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2501a4: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x2501a4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2501a8: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2501a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2501ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2501acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2501b0: 0x1010  mfhi        $v0
    ctx->pc = 0x2501b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2501b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2501b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2501b8: 0x0  nop
    ctx->pc = 0x2501b8u;
    // NOP
    // 0x2501bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2501bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2501c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2501c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2501c4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2501c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2501c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2501c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2501cc: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x2501ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2501d0: 0x8e040440  lw          $a0, 0x440($s0)
    ctx->pc = 0x2501d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x2501d4: 0xc602042c  lwc1        $f2, 0x42C($s0)
    ctx->pc = 0x2501d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2501d8: 0x8e020444  lw          $v0, 0x444($s0)
    ctx->pc = 0x2501d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x2501dc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2501dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2501e0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2501e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2501e4: 0x0  nop
    ctx->pc = 0x2501e4u;
    // NOP
    // 0x2501e8: 0x0  nop
    ctx->pc = 0x2501e8u;
    // NOP
    // 0x2501ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2501ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2501f0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2501f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2501f4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2501f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2501f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2501f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2501fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250200: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x250200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250204: 0x0  nop
    ctx->pc = 0x250204u;
    // NOP
    // 0x250208: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x250208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x25020c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x25020cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x250210: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x250210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x250214: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x250214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x250218: 0xc6010430  lwc1        $f1, 0x430($s0)
    ctx->pc = 0x250218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25021c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25021cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250220: 0x0  nop
    ctx->pc = 0x250220u;
    // NOP
    // 0x250224: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x250224u;
    {
        const bool branch_taken_0x250224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250224) {
            ctx->pc = 0x250240u;
            goto label_250240;
        }
    }
    ctx->pc = 0x25022Cu;
    // 0x25022c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250230: 0xe6000430  swc1        $f0, 0x430($s0)
    ctx->pc = 0x250230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1072), bits); }
    // 0x250234: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x250234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250238: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250238u;
    {
        const bool branch_taken_0x250238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250238u;
            // 0x25023c: 0xe6000434  swc1        $f0, 0x434($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250238) {
            ctx->pc = 0x25026Cu;
            goto label_25026c;
        }
    }
    ctx->pc = 0x250240u;
label_250240:
    // 0x250240: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x250240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250244: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x250244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x250248: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x250248u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x25024c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25024cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x250250: 0xe6000430  swc1        $f0, 0x430($s0)
    ctx->pc = 0x250250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1072), bits); }
    // 0x250254: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x250254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250258: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x250258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25025c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25025cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x250260: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x250260u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x250264: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x250264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x250268: 0xe6000434  swc1        $f0, 0x434($s0)
    ctx->pc = 0x250268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
label_25026c:
    // 0x25026c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x25026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x250270: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x250270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x250274: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x250274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x250278: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x250278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x25027c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x25027Cu;
    SET_GPR_U32(ctx, 31, 0x250284u);
    ctx->pc = 0x250280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25027Cu;
            // 0x250280: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250284u; }
        if (ctx->pc != 0x250284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250284u; }
        if (ctx->pc != 0x250284u) { return; }
    }
    ctx->pc = 0x250284u;
label_250284:
    // 0x250284: 0xc6030430  lwc1        $f3, 0x430($s0)
    ctx->pc = 0x250284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250288: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x250288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x25028c: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x25028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250290: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x250290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x250294: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x250294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250298: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x250298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25029c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25029cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2502a0: 0xc7ae0148  lwc1        $f14, 0x148($sp)
    ctx->pc = 0x2502a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2502a4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2502a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2502a8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2502a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2502ac: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x2502acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2502b0: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2502B0u;
    SET_GPR_U32(ctx, 31, 0x2502B8u);
    ctx->pc = 0x2502B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2502B0u;
            // 0x2502b4: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2502B8u; }
        if (ctx->pc != 0x2502B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2502B8u; }
        if (ctx->pc != 0x2502B8u) { return; }
    }
    ctx->pc = 0x2502B8u;
label_2502b8:
    // 0x2502b8: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x2502b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2502bc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2502bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2502c0: 0x8e070404  lw          $a3, 0x404($s0)
    ctx->pc = 0x2502c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x2502c4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2502c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2502c8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2502c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2502cc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2502ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502d0: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2502d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2502d4: 0xc089414  jal         func_225050
    ctx->pc = 0x2502D4u;
    SET_GPR_U32(ctx, 31, 0x2502DCu);
    ctx->pc = 0x2502D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2502D4u;
            // 0x2502d8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225050u;
    if (runtime->hasFunction(0x225050u)) {
        auto targetFn = runtime->lookupFunction(0x225050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2502DCu; }
        if (ctx->pc != 0x2502DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuWakuRect__FP10mgCTexture9mgRect_f_9mgRect_i_iiii_0x225050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2502DCu; }
        if (ctx->pc != 0x2502DCu) { return; }
    }
    ctx->pc = 0x2502DCu;
label_2502dc:
    // 0x2502dc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x2502dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2502e0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2502E0u;
    {
        const bool branch_taken_0x2502e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2502e0) {
            ctx->pc = 0x250368u;
            goto label_250368;
        }
    }
    ctx->pc = 0x2502E8u;
    // 0x2502e8: 0xdf839780  ld          $v1, -0x6880($gp)
    ctx->pc = 0x2502e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940544)));
    // 0x2502ec: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2502ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2502f0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2502f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2502f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2502f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2502f8: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2502f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2502fc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2502fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x250300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x250300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250304: 0xc0a248c  jal         func_289230
    ctx->pc = 0x250304u;
    SET_GPR_U32(ctx, 31, 0x25030Cu);
    ctx->pc = 0x250308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250304u;
            // 0x250308: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25030Cu; }
        if (ctx->pc != 0x25030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25030Cu; }
        if (ctx->pc != 0x25030Cu) { return; }
    }
    ctx->pc = 0x25030Cu;
label_25030c:
    // 0x25030c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x25030cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x250310: 0x3c034324  lui         $v1, 0x4324
    ctx->pc = 0x250310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17188 << 16));
    // 0x250314: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x250314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x250318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x250318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25031c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250320: 0xc0a248c  jal         func_289230
    ctx->pc = 0x250320u;
    SET_GPR_U32(ctx, 31, 0x250328u);
    ctx->pc = 0x250324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250320u;
            // 0x250324: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250328u; }
        if (ctx->pc != 0x250328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250328u; }
        if (ctx->pc != 0x250328u) { return; }
    }
    ctx->pc = 0x250328u;
label_250328:
    // 0x250328: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x250328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x25032c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x250330: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x250330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x250334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250338: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x250338u;
    SET_GPR_U32(ctx, 31, 0x250340u);
    ctx->pc = 0x25033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250338u;
            // 0x25033c: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250340u; }
        if (ctx->pc != 0x250340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250340u; }
        if (ctx->pc != 0x250340u) { return; }
    }
    ctx->pc = 0x250340u;
label_250340:
    // 0x250340: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x250340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250344: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x250348: 0xc0876b0  jal         func_21DAC0
    ctx->pc = 0x250348u;
    SET_GPR_U32(ctx, 31, 0x250350u);
    ctx->pc = 0x25034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250348u;
            // 0x25034c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250350u; }
        if (ctx->pc != 0x250350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250350u; }
        if (ctx->pc != 0x250350u) { return; }
    }
    ctx->pc = 0x250350u;
label_250350:
    // 0x250350: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x250350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250354: 0xc087898  jal         func_21E260
    ctx->pc = 0x250354u;
    SET_GPR_U32(ctx, 31, 0x25035Cu);
    ctx->pc = 0x250358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250354u;
            // 0x250358: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25035Cu; }
        if (ctx->pc != 0x25035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25035Cu; }
        if (ctx->pc != 0x25035Cu) { return; }
    }
    ctx->pc = 0x25035Cu;
label_25035c:
    // 0x25035c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25035cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250360: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x250360u;
    SET_GPR_U32(ctx, 31, 0x250368u);
    ctx->pc = 0x250364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250360u;
            // 0x250364: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250368u; }
        if (ctx->pc != 0x250368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250368u; }
        if (ctx->pc != 0x250368u) { return; }
    }
    ctx->pc = 0x250368u;
label_250368:
    // 0x250368: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x250368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25036c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x250370: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x250370u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250374: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x250374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x250378: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x250378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25037c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250380: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x250380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250384: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x250384u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250388: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x250388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25038c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25038cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250390: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x250390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250394: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x250394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x250398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25039c: 0x3e00008  jr          $ra
    ctx->pc = 0x25039Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2503A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25039Cu;
            // 0x2503a0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2503A4u;
}
