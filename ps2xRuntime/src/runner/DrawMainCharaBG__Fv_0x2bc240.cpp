#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMainCharaBG__Fv
// Address: 0x2bc240 - 0x2bc34c
void DrawMainCharaBG__Fv_0x2bc240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMainCharaBG__Fv_0x2bc240");
#endif

    switch (ctx->pc) {
        case 0x2bc268u: goto label_2bc268;
        case 0x2bc280u: goto label_2bc280;
        case 0x2bc2a4u: goto label_2bc2a4;
        case 0x2bc2c0u: goto label_2bc2c0;
        case 0x2bc2ccu: goto label_2bc2cc;
        case 0x2bc2d8u: goto label_2bc2d8;
        case 0x2bc2f8u: goto label_2bc2f8;
        case 0x2bc314u: goto label_2bc314;
        case 0x2bc340u: goto label_2bc340;
        default: break;
    }

    ctx->pc = 0x2bc240u;

    // 0x2bc240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bc244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bc244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc24c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2bc24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x2bc250: 0x8f839c14  lw          $v1, -0x63EC($gp)
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    // 0x2bc254: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BC254u;
    {
        const bool branch_taken_0x2bc254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc254) {
            ctx->pc = 0x2BC2A4u;
            goto label_2bc2a4;
        }
    }
    ctx->pc = 0x2BC25Cu;
    // 0x2bc25c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2bc25cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc260: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2BC260u;
    SET_GPR_U32(ctx, 31, 0x2BC268u);
    ctx->pc = 0x2BC264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC260u;
            // 0x2bc264: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC268u; }
        if (ctx->pc != 0x2BC268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC268u; }
        if (ctx->pc != 0x2BC268u) { return; }
    }
    ctx->pc = 0x2BC268u;
label_2bc268:
    // 0x2bc268: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bc26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc274: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2bc274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2bc278: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2BC278u;
    SET_GPR_U32(ctx, 31, 0x2BC280u);
    ctx->pc = 0x2BC27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC278u;
            // 0x2bc27c: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC280u; }
        if (ctx->pc != 0x2BC280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC280u; }
        if (ctx->pc != 0x2BC280u) { return; }
    }
    ctx->pc = 0x2BC280u;
label_2bc280:
    // 0x2bc280: 0x8f849c14  lw          $a0, -0x63EC($gp)
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941716)));
    // 0x2bc284: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2bc284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2bc288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc28c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2bc28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bc290: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2bc290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc294: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2bc294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc298: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bc298u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc29c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2BC29Cu;
    SET_GPR_U32(ctx, 31, 0x2BC2A4u);
    ctx->pc = 0x2BC2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC29Cu;
            // 0x2bc2a0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2A4u; }
        if (ctx->pc != 0x2BC2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2A4u; }
        if (ctx->pc != 0x2BC2A4u) { return; }
    }
    ctx->pc = 0x2BC2A4u;
label_2bc2a4:
    // 0x2bc2a4: 0x87839c18  lh          $v1, -0x63E8($gp)
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941720)));
    // 0x2bc2a8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2bc2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2bc2ac: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC2ACu;
    {
        const bool branch_taken_0x2bc2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2ACu;
            // 0x2bc2b0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2ac) {
            ctx->pc = 0x2BC2E0u;
            goto label_2bc2e0;
        }
    }
    ctx->pc = 0x2BC2B4u;
    // 0x2bc2b4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2bc2b8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2BC2B8u;
    SET_GPR_U32(ctx, 31, 0x2BC2C0u);
    ctx->pc = 0x2BC2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2B8u;
            // 0x2bc2bc: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2C0u; }
        if (ctx->pc != 0x2BC2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2C0u; }
        if (ctx->pc != 0x2BC2C0u) { return; }
    }
    ctx->pc = 0x2BC2C0u;
label_2bc2c0:
    // 0x2bc2c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bc2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2bc2c4: 0xc087898  jal         func_21E260
    ctx->pc = 0x2BC2C4u;
    SET_GPR_U32(ctx, 31, 0x2BC2CCu);
    ctx->pc = 0x2BC2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2C4u;
            // 0x2bc2c8: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2CCu; }
        if (ctx->pc != 0x2BC2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2CCu; }
        if (ctx->pc != 0x2BC2CCu) { return; }
    }
    ctx->pc = 0x2BC2CCu;
label_2bc2cc:
    // 0x2bc2cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2bc2d0: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2BC2D0u;
    SET_GPR_U32(ctx, 31, 0x2BC2D8u);
    ctx->pc = 0x2BC2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2D0u;
            // 0x2bc2d4: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2D8u; }
        if (ctx->pc != 0x2BC2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2D8u; }
        if (ctx->pc != 0x2BC2D8u) { return; }
    }
    ctx->pc = 0x2BC2D8u;
label_2bc2d8:
    // 0x2bc2d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BC2D8u;
    {
        const bool branch_taken_0x2bc2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2D8u;
            // 0x2bc2dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2d8) {
            ctx->pc = 0x2BC344u;
            goto label_2bc344;
        }
    }
    ctx->pc = 0x2BC2E0u;
label_2bc2e0:
    // 0x2bc2e0: 0x8f839c08  lw          $v1, -0x63F8($gp)
    ctx->pc = 0x2bc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941704)));
    // 0x2bc2e4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BC2E4u;
    {
        const bool branch_taken_0x2bc2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2e4) {
            ctx->pc = 0x2BC340u;
            goto label_2bc340;
        }
    }
    ctx->pc = 0x2BC2ECu;
    // 0x2bc2ec: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2bc2ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc2f0: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2BC2F0u;
    SET_GPR_U32(ctx, 31, 0x2BC2F8u);
    ctx->pc = 0x2BC2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2F0u;
            // 0x2bc2f4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2F8u; }
        if (ctx->pc != 0x2BC2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2F8u; }
        if (ctx->pc != 0x2BC2F8u) { return; }
    }
    ctx->pc = 0x2BC2F8u;
label_2bc2f8:
    // 0x2bc2f8: 0x878284ec  lh          $v0, -0x7B14($gp)
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x2bc2fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bc2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc304: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2bc304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2bc308: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2bc308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bc30c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2BC30Cu;
    SET_GPR_U32(ctx, 31, 0x2BC314u);
    ctx->pc = 0x2BC310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC30Cu;
            // 0x2bc310: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC314u; }
        if (ctx->pc != 0x2BC314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC314u; }
        if (ctx->pc != 0x2BC314u) { return; }
    }
    ctx->pc = 0x2BC314u;
label_2bc314:
    // 0x2bc314: 0xc7809c0c  lwc1        $f0, -0x63F4($gp)
    ctx->pc = 0x2bc314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc318: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2bc318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2bc31c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2bc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2bc320: 0x8f849c08  lw          $a0, -0x63F8($gp)
    ctx->pc = 0x2bc320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941704)));
    // 0x2bc324: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bc324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bc328: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc32c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2bc32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc330: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2bc330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc334: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2bc334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc338: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2BC338u;
    SET_GPR_U32(ctx, 31, 0x2BC340u);
    ctx->pc = 0x2BC33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC338u;
            // 0x2bc33c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC340u; }
        if (ctx->pc != 0x2BC340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC340u; }
        if (ctx->pc != 0x2BC340u) { return; }
    }
    ctx->pc = 0x2BC340u;
label_2bc340:
    // 0x2bc340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc344:
    // 0x2bc344: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC344u;
            // 0x2bc348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC34Cu;
}
