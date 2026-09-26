#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShopSellListDraw__FRiPf
// Address: 0x294180 - 0x29474c
void ShopSellListDraw__FRiPf_0x294180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShopSellListDraw__FRiPf_0x294180");
#endif

    switch (ctx->pc) {
        case 0x2941d0u: goto label_2941d0;
        case 0x2941e8u: goto label_2941e8;
        case 0x294200u: goto label_294200;
        case 0x294218u: goto label_294218;
        case 0x294230u: goto label_294230;
        case 0x29427cu: goto label_29427c;
        case 0x294294u: goto label_294294;
        case 0x2942acu: goto label_2942ac;
        case 0x2942e0u: goto label_2942e0;
        case 0x2942e8u: goto label_2942e8;
        case 0x2942f8u: goto label_2942f8;
        case 0x294324u: goto label_294324;
        case 0x294398u: goto label_294398;
        case 0x29441cu: goto label_29441c;
        case 0x294428u: goto label_294428;
        case 0x294434u: goto label_294434;
        case 0x29444cu: goto label_29444c;
        case 0x294470u: goto label_294470;
        case 0x294494u: goto label_294494;
        case 0x2944e8u: goto label_2944e8;
        case 0x2944fcu: goto label_2944fc;
        case 0x294520u: goto label_294520;
        case 0x294538u: goto label_294538;
        case 0x294540u: goto label_294540;
        case 0x294554u: goto label_294554;
        case 0x294578u: goto label_294578;
        case 0x294588u: goto label_294588;
        case 0x294594u: goto label_294594;
        case 0x2945acu: goto label_2945ac;
        case 0x2945bcu: goto label_2945bc;
        case 0x2945c4u: goto label_2945c4;
        case 0x2945e4u: goto label_2945e4;
        case 0x294614u: goto label_294614;
        case 0x294620u: goto label_294620;
        case 0x294638u: goto label_294638;
        case 0x294650u: goto label_294650;
        case 0x2946c0u: goto label_2946c0;
        case 0x2946c8u: goto label_2946c8;
        case 0x2946f0u: goto label_2946f0;
        default: break;
    }

    ctx->pc = 0x294180u;

    // 0x294180: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x294180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x294184: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x294184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x294188: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x294188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x29418c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x29418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x294190: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x294190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x294194: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x294194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x294198: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x294198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x29419c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2941a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2941a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2941a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2941a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2941a8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2941a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2941ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2941acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2941b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2941b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2941b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2941b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2941b8: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x2941b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2941bc: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2941bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2941c0: 0x10600153  beqz        $v1, . + 4 + (0x153 << 2)
    ctx->pc = 0x2941C0u;
    {
        const bool branch_taken_0x2941c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2941C0u;
            // 0x2941c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941c0) {
            ctx->pc = 0x294710u;
            goto label_294710;
        }
    }
    ctx->pc = 0x2941C8u;
    // 0x2941c8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2941C8u;
    SET_GPR_U32(ctx, 31, 0x2941D0u);
    ctx->pc = 0x2941CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941C8u;
            // 0x2941cc: 0x84650000  lh          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941D0u; }
        if (ctx->pc != 0x2941D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941D0u; }
        if (ctx->pc != 0x2941D0u) { return; }
    }
    ctx->pc = 0x2941D0u;
label_2941d0:
    // 0x2941d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2941d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2941d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2941d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941d8: 0x240600c4  addiu       $a2, $zero, 0xC4
    ctx->pc = 0x2941d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2941dc: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x2941dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2941e0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2941E0u;
    SET_GPR_U32(ctx, 31, 0x2941E8u);
    ctx->pc = 0x2941E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941E0u;
            // 0x2941e4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941E8u; }
        if (ctx->pc != 0x2941E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2941E8u; }
        if (ctx->pc != 0x2941E8u) { return; }
    }
    ctx->pc = 0x2941E8u;
label_2941e8:
    // 0x2941e8: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2941e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2941ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2941ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2941f0: 0x240600c4  addiu       $a2, $zero, 0xC4
    ctx->pc = 0x2941f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2941f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2941f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2941F8u;
    SET_GPR_U32(ctx, 31, 0x294200u);
    ctx->pc = 0x2941FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941F8u;
            // 0x2941fc: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294200u; }
        if (ctx->pc != 0x294200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294200u; }
        if (ctx->pc != 0x294200u) { return; }
    }
    ctx->pc = 0x294200u;
label_294200:
    // 0x294200: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x294204: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x294204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x294208: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x294208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29420c: 0x240600c2  addiu       $a2, $zero, 0xC2
    ctx->pc = 0x29420cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x294210: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x294210u;
    SET_GPR_U32(ctx, 31, 0x294218u);
    ctx->pc = 0x294214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294210u;
            // 0x294214: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294218u; }
        if (ctx->pc != 0x294218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294218u; }
        if (ctx->pc != 0x294218u) { return; }
    }
    ctx->pc = 0x294218u;
label_294218:
    // 0x294218: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x294218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29421c: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x29421cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x294220: 0x2406009e  addiu       $a2, $zero, 0x9E
    ctx->pc = 0x294220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x294224: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x294224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x294228: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x294228u;
    SET_GPR_U32(ctx, 31, 0x294230u);
    ctx->pc = 0x29422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294228u;
            // 0x29422c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294230u; }
        if (ctx->pc != 0x294230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294230u; }
        if (ctx->pc != 0x294230u) { return; }
    }
    ctx->pc = 0x294230u;
label_294230:
    // 0x294230: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x294230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x294234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294238: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294238u;
    {
        const bool branch_taken_0x294238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29423Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294238u;
            // 0x29423c: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294238) {
            ctx->pc = 0x294244u;
            goto label_294244;
        }
    }
    ctx->pc = 0x294240u;
    // 0x294240: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x294240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_294244:
    // 0x294244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x294244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294248: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294248u;
    {
        const bool branch_taken_0x294248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294248u;
            // 0x29424c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294248) {
            ctx->pc = 0x294268u;
            goto label_294268;
        }
    }
    ctx->pc = 0x294250u;
    // 0x294250: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x294250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x294254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294258: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294258u;
    {
        const bool branch_taken_0x294258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294258u;
            // 0x29425c: 0x27b100c0  addiu       $s1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294258) {
            ctx->pc = 0x294264u;
            goto label_294264;
        }
    }
    ctx->pc = 0x294260u;
    // 0x294260: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x294260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_294264:
    // 0x294264: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x294264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_294268:
    // 0x294268: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x29426c: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x29426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x294270: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x294274: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x294274u;
    SET_GPR_U32(ctx, 31, 0x29427Cu);
    ctx->pc = 0x294278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294274u;
            // 0x294278: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29427Cu; }
        if (ctx->pc != 0x29427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29427Cu; }
        if (ctx->pc != 0x29427Cu) { return; }
    }
    ctx->pc = 0x29427Cu;
label_29427c:
    // 0x29427c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x294280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294284: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x294288: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x294288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29428c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x29428Cu;
    SET_GPR_U32(ctx, 31, 0x294294u);
    ctx->pc = 0x294290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29428Cu;
            // 0x294290: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294294u; }
        if (ctx->pc != 0x294294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294294u; }
        if (ctx->pc != 0x294294u) { return; }
    }
    ctx->pc = 0x294294u;
label_294294:
    // 0x294294: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x294294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x294298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29429c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2942a0: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x2942a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2942a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2942A4u;
    SET_GPR_U32(ctx, 31, 0x2942ACu);
    ctx->pc = 0x2942A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2942A4u;
            // 0x2942a8: 0x24080017  addiu       $t0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942ACu; }
        if (ctx->pc != 0x2942ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942ACu; }
        if (ctx->pc != 0x2942ACu) { return; }
    }
    ctx->pc = 0x2942ACu;
label_2942ac:
    // 0x2942ac: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2942acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2942b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2942b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2942b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2942B4u;
    {
        const bool branch_taken_0x2942b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2942B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2942B4u;
            // 0x2942b8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942b4) {
            ctx->pc = 0x2942CCu;
            goto label_2942cc;
        }
    }
    ctx->pc = 0x2942BCu;
    // 0x2942bc: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2942bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2942c0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2942c4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2942c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2942c8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2942c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2942cc:
    // 0x2942cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2942ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942d0: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x2942d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2942d4: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2942d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2942d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2942D8u;
    SET_GPR_U32(ctx, 31, 0x2942E0u);
    ctx->pc = 0x2942DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2942D8u;
            // 0x2942dc: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942E0u; }
        if (ctx->pc != 0x2942E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942E0u; }
        if (ctx->pc != 0x2942E0u) { return; }
    }
    ctx->pc = 0x2942E0u;
label_2942e0:
    // 0x2942e0: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x2942E0u;
    SET_GPR_U32(ctx, 31, 0x2942E8u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942E8u; }
        if (ctx->pc != 0x2942E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942E8u; }
        if (ctx->pc != 0x2942E8u) { return; }
    }
    ctx->pc = 0x2942E8u;
label_2942e8:
    // 0x2942e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2942e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2942ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942f0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2942F0u;
    SET_GPR_U32(ctx, 31, 0x2942F8u);
    ctx->pc = 0x2942F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2942F0u;
            // 0x2942f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942F8u; }
        if (ctx->pc != 0x2942F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942F8u; }
        if (ctx->pc != 0x2942F8u) { return; }
    }
    ctx->pc = 0x2942F8u;
label_2942f8:
    // 0x2942f8: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2942f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2942fc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2942fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x294300: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x294300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x294304: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x294304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294308: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x294308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
    // 0x29430c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x29430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294310: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x294310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x294314: 0x0  nop
    ctx->pc = 0x294314u;
    // NOP
    // 0x294318: 0x46011580  add.s       $f22, $f2, $f1
    ctx->pc = 0x294318u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29431c: 0xc065c24  jal         func_197090
    ctx->pc = 0x29431Cu;
    SET_GPR_U32(ctx, 31, 0x294324u);
    ctx->pc = 0x294320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29431Cu;
            // 0x294320: 0x46001dc0  add.s       $f23, $f3, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294324u; }
        if (ctx->pc != 0x294324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294324u; }
        if (ctx->pc != 0x294324u) { return; }
    }
    ctx->pc = 0x294324u;
label_294324:
    // 0x294324: 0x3c0342b8  lui         $v1, 0x42B8
    ctx->pc = 0x294324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17080 << 16));
    // 0x294328: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x294328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x29432c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29432cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294334: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x294334u;
    {
        const bool branch_taken_0x294334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x294338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294334u;
            // 0x294338: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294334) {
            ctx->pc = 0x29435Cu;
            goto label_29435c;
        }
    }
    ctx->pc = 0x29433Cu;
    // 0x29433c: 0x8784983c  lh          $a0, -0x67C4($gp)
    ctx->pc = 0x29433cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x294340: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294344: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294344u;
    {
        const bool branch_taken_0x294344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294344u;
            // 0x294348: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294344) {
            ctx->pc = 0x294360u;
            goto label_294360;
        }
    }
    ctx->pc = 0x29434Cu;
    // 0x29434c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x29434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x294350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294354: 0x0  nop
    ctx->pc = 0x294354u;
    // NOP
    // 0x294358: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x294358u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_29435c:
    // 0x29435c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294360:
    // 0x294360: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294360u;
    {
        const bool branch_taken_0x294360 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x294364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294360u;
            // 0x294364: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294360) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x294368u;
    // 0x294368: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x29436c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29436Cu;
    {
        const bool branch_taken_0x29436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x294370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29436Cu;
            // 0x294370: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29436c) {
            ctx->pc = 0x294380u;
            goto label_294380;
        }
    }
    ctx->pc = 0x294374u;
    // 0x294374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294378: 0x0  nop
    ctx->pc = 0x294378u;
    // NOP
    // 0x29437c: 0x4600a540  add.s       $f21, $f20, $f0
    ctx->pc = 0x29437cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_294380:
    // 0x294380: 0x8f839840  lw          $v1, -0x67C0($gp)
    ctx->pc = 0x294380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x294384: 0x8c770004  lw          $s7, 0x4($v1)
    ctx->pc = 0x294384u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x294388: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x294388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x29438c: 0x102000df  beqz        $at, . + 4 + (0xDF << 2)
    ctx->pc = 0x29438Cu;
    {
        const bool branch_taken_0x29438c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29438Cu;
            // 0x294390: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29438c) {
            ctx->pc = 0x29470Cu;
            goto label_29470c;
        }
    }
    ctx->pc = 0x294394u;
    // 0x294394: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x294394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294398:
    // 0x294398: 0x3c034230  lui         $v1, 0x4230
    ctx->pc = 0x294398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16944 << 16));
    // 0x29439c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29439cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2943a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2943a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943a4: 0x0  nop
    ctx->pc = 0x2943a4u;
    // NOP
    // 0x2943a8: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2943a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x2943ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2943acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2943b0: 0x0  nop
    ctx->pc = 0x2943b0u;
    // NOP
    // 0x2943b4: 0x450100ce  bc1t        . + 4 + (0xCE << 2)
    ctx->pc = 0x2943B4u;
    {
        const bool branch_taken_0x2943b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2943b4) {
            ctx->pc = 0x2946F0u;
            goto label_2946f0;
        }
    }
    ctx->pc = 0x2943BCu;
    // 0x2943bc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2943BCu;
    {
        const bool branch_taken_0x2943bc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2943C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2943BCu;
            // 0x2943c0: 0x8f849840  lw          $a0, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943bc) {
            ctx->pc = 0x2943D4u;
            goto label_2943d4;
        }
    }
    ctx->pc = 0x2943C4u;
    // 0x2943c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2943c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2943c8: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x2943c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2943cc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2943CCu;
    {
        const bool branch_taken_0x2943cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2943cc) {
            ctx->pc = 0x2943E0u;
            goto label_2943e0;
        }
    }
    ctx->pc = 0x2943D4u;
label_2943d4:
    // 0x2943d4: 0x0  nop
    ctx->pc = 0x2943d4u;
    // NOP
    // 0x2943d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2943D8u;
    {
        const bool branch_taken_0x2943d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2943DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2943D8u;
            // 0x2943dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943d8) {
            ctx->pc = 0x2943ECu;
            goto label_2943ec;
        }
    }
    ctx->pc = 0x2943E0u;
label_2943e0:
    // 0x2943e0: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2943e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2943e4: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x2943e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2943e8: 0x0  nop
    ctx->pc = 0x2943e8u;
    // NOP
label_2943ec:
    // 0x2943ec: 0x0  nop
    ctx->pc = 0x2943ecu;
    // NOP
    // 0x2943f0: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x2943f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2943f4: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x2943f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x2943f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943fc: 0x0  nop
    ctx->pc = 0x2943fcu;
    // NOP
    // 0x294400: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294404: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x294404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294408: 0x0  nop
    ctx->pc = 0x294408u;
    // NOP
    // 0x29440c: 0x450100bf  bc1t        . + 4 + (0xBF << 2)
    ctx->pc = 0x29440Cu;
    {
        const bool branch_taken_0x29440c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29440Cu;
            // 0x294410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29440c) {
            ctx->pc = 0x29470Cu;
            goto label_29470c;
        }
    }
    ctx->pc = 0x294414u;
    // 0x294414: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x294414u;
    SET_GPR_U32(ctx, 31, 0x29441Cu);
    ctx->pc = 0x294418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294414u;
            // 0x294418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29441Cu; }
        if (ctx->pc != 0x29441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29441Cu; }
        if (ctx->pc != 0x29441Cu) { return; }
    }
    ctx->pc = 0x29441Cu;
label_29441c:
    // 0x29441c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294420: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x294420u;
    SET_GPR_U32(ctx, 31, 0x294428u);
    ctx->pc = 0x294424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294420u;
            // 0x294424: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294428u; }
        if (ctx->pc != 0x294428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294428u; }
        if (ctx->pc != 0x294428u) { return; }
    }
    ctx->pc = 0x294428u;
label_294428:
    // 0x294428: 0x8f859844  lw          $a1, -0x67BC($gp)
    ctx->pc = 0x294428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940740)));
    // 0x29442c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x29442Cu;
    SET_GPR_U32(ctx, 31, 0x294434u);
    ctx->pc = 0x294430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29442Cu;
            // 0x294430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294434u; }
        if (ctx->pc != 0x294434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294434u; }
        if (ctx->pc != 0x294434u) { return; }
    }
    ctx->pc = 0x294434u;
label_294434:
    // 0x294434: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x294438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29443c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29443cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294440: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x294440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294444: 0xc04d320  jal         func_134C80
    ctx->pc = 0x294444u;
    SET_GPR_U32(ctx, 31, 0x29444Cu);
    ctx->pc = 0x294448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294444u;
            // 0x294448: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29444Cu; }
        if (ctx->pc != 0x29444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29444Cu; }
        if (ctx->pc != 0x29444Cu) { return; }
    }
    ctx->pc = 0x29444Cu;
label_29444c:
    // 0x29444c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x29444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x294450: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x294454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29445c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29445cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294460: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x294460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x294464: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x294464u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x294468: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x294468u;
    SET_GPR_U32(ctx, 31, 0x294470u);
    ctx->pc = 0x29446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294468u;
            // 0x29446c: 0x46170b40  add.s       $f13, $f1, $f23 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294470u; }
        if (ctx->pc != 0x294470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294470u; }
        if (ctx->pc != 0x294470u) { return; }
    }
    ctx->pc = 0x294470u;
label_294470:
    // 0x294470: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x294470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x294474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x294474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x294478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x294478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29447c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29447cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294484: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x294484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x294488: 0x46160b00  add.s       $f12, $f1, $f22
    ctx->pc = 0x294488u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x29448c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x29448Cu;
    SET_GPR_U32(ctx, 31, 0x294494u);
    ctx->pc = 0x294490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29448Cu;
            // 0x294490: 0x46170340  add.s       $f13, $f0, $f23 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294494u; }
        if (ctx->pc != 0x294494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294494u; }
        if (ctx->pc != 0x294494u) { return; }
    }
    ctx->pc = 0x294494u;
label_294494:
    // 0x294494: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294494u;
    {
        const bool branch_taken_0x294494 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x294498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294494u;
            // 0x294498: 0x8f839840  lw          $v1, -0x67C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294494) {
            ctx->pc = 0x2944ACu;
            goto label_2944ac;
        }
    }
    ctx->pc = 0x29449Cu;
    // 0x29449c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2944a0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x2944a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2944a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2944A4u;
    {
        const bool branch_taken_0x2944a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2944a4) {
            ctx->pc = 0x2944B8u;
            goto label_2944b8;
        }
    }
    ctx->pc = 0x2944ACu;
label_2944ac:
    // 0x2944ac: 0x0  nop
    ctx->pc = 0x2944acu;
    // NOP
    // 0x2944b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2944B0u;
    {
        const bool branch_taken_0x2944b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2944B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2944B0u;
            // 0x2944b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944b0) {
            ctx->pc = 0x2944C4u;
            goto label_2944c4;
        }
    }
    ctx->pc = 0x2944B8u;
label_2944b8:
    // 0x2944b8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2944b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2944bc: 0x8c550108  lw          $s5, 0x108($v0)
    ctx->pc = 0x2944bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2944c0: 0x0  nop
    ctx->pc = 0x2944c0u;
    // NOP
label_2944c4:
    // 0x2944c4: 0x0  nop
    ctx->pc = 0x2944c4u;
    // NOP
    // 0x2944c8: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x2944c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
    // 0x2944cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2944ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2944d0: 0x3c0341b8  lui         $v1, 0x41B8
    ctx->pc = 0x2944d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16824 << 16));
    // 0x2944d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2944d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2944d8: 0xafb501cc  sw          $s5, 0x1CC($sp)
    ctx->pc = 0x2944d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 21));
    // 0x2944dc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2944dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2944e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2944E0u;
    SET_GPR_U32(ctx, 31, 0x2944E8u);
    ctx->pc = 0x2944E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2944E0u;
            // 0x2944e4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944E8u; }
        if (ctx->pc != 0x2944E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944E8u; }
        if (ctx->pc != 0x2944E8u) { return; }
    }
    ctx->pc = 0x2944E8u;
label_2944e8:
    // 0x2944e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2944e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944ec: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2944ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2944f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2944f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2944f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2944F4u;
    SET_GPR_U32(ctx, 31, 0x2944FCu);
    ctx->pc = 0x2944F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2944F4u;
            // 0x2944f8: 0x46170300  add.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944FCu; }
        if (ctx->pc != 0x2944FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944FCu; }
        if (ctx->pc != 0x2944FCu) { return; }
    }
    ctx->pc = 0x2944FCu;
label_2944fc:
    // 0x2944fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2944fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294500: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x294500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294504: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x294504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29450c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29450cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294510: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x294510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x294514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x294514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294518: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x294518u;
    SET_GPR_U32(ctx, 31, 0x294520u);
    ctx->pc = 0x29451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294518u;
            // 0x29451c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294520u; }
        if (ctx->pc != 0x294520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294520u; }
        if (ctx->pc != 0x294520u) { return; }
    }
    ctx->pc = 0x294520u;
label_294520:
    // 0x294520: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x294520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x294524: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x294524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x294528: 0x27a601cc  addiu       $a2, $sp, 0x1CC
    ctx->pc = 0x294528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x29452c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29452cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294530: 0xc0a4610  jal         func_291840
    ctx->pc = 0x294530u;
    SET_GPR_U32(ctx, 31, 0x294538u);
    ctx->pc = 0x294534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294530u;
            // 0x294534: 0xa7b30122  sh          $s3, 0x122($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 290), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291840u;
    if (runtime->hasFunction(0x291840u)) {
        auto targetFn = runtime->lookupFunction(0x291840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294538u; }
        if (ctx->pc != 0x294538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrice__5CShopFP13CGameDataUsedPiPi_0x291840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294538u; }
        if (ctx->pc != 0x294538u) { return; }
    }
    ctx->pc = 0x294538u;
label_294538:
    // 0x294538: 0xc0a248c  jal         func_289230
    ctx->pc = 0x294538u;
    SET_GPR_U32(ctx, 31, 0x294540u);
    ctx->pc = 0x29453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294538u;
            // 0x29453c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294540u; }
        if (ctx->pc != 0x294540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294540u; }
        if (ctx->pc != 0x294540u) { return; }
    }
    ctx->pc = 0x294540u;
label_294540:
    // 0x294540: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x294540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294544: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x294544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x294548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29454c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x29454Cu;
    SET_GPR_U32(ctx, 31, 0x294554u);
    ctx->pc = 0x294550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29454Cu;
            // 0x294550: 0x46170300  add.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294554u; }
        if (ctx->pc != 0x294554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294554u; }
        if (ctx->pc != 0x294554u) { return; }
    }
    ctx->pc = 0x294554u;
label_294554:
    // 0x294554: 0x8fa501cc  lw          $a1, 0x1CC($sp)
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x294558: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x294558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29455c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x29455cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x294564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294568: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x294568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29456c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29456cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294570: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x294570u;
    SET_GPR_U32(ctx, 31, 0x294578u);
    ctx->pc = 0x294574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294570u;
            // 0x294574: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294578u; }
        if (ctx->pc != 0x294578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294578u; }
        if (ctx->pc != 0x294578u) { return; }
    }
    ctx->pc = 0x294578u;
label_294578:
    // 0x294578: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x294578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x29457c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29457cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294580: 0xc0a248c  jal         func_289230
    ctx->pc = 0x294580u;
    SET_GPR_U32(ctx, 31, 0x294588u);
    ctx->pc = 0x294584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294580u;
            // 0x294584: 0x46170300  add.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294588u; }
        if (ctx->pc != 0x294588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294588u; }
        if (ctx->pc != 0x294588u) { return; }
    }
    ctx->pc = 0x294588u;
label_294588:
    // 0x294588: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x294588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29458c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x29458Cu;
    SET_GPR_U32(ctx, 31, 0x294594u);
    ctx->pc = 0x294590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29458Cu;
            // 0x294590: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294594u; }
        if (ctx->pc != 0x294594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294594u; }
        if (ctx->pc != 0x294594u) { return; }
    }
    ctx->pc = 0x294594u;
label_294594:
    // 0x294594: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x294594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x294598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29459c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x29459cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2945a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2945a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2945A4u;
    SET_GPR_U32(ctx, 31, 0x2945ACu);
    ctx->pc = 0x2945A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945A4u;
            // 0x2945a8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945ACu; }
        if (ctx->pc != 0x2945ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945ACu; }
        if (ctx->pc != 0x2945ACu) { return; }
    }
    ctx->pc = 0x2945ACu;
label_2945ac:
    // 0x2945ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2945acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945b0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2945b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2945b4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2945B4u;
    SET_GPR_U32(ctx, 31, 0x2945BCu);
    ctx->pc = 0x2945B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945B4u;
            // 0x2945b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945BCu; }
        if (ctx->pc != 0x2945BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945BCu; }
        if (ctx->pc != 0x2945BCu) { return; }
    }
    ctx->pc = 0x2945BCu;
label_2945bc:
    // 0x2945bc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2945BCu;
    SET_GPR_U32(ctx, 31, 0x2945C4u);
    ctx->pc = 0x2945C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945BCu;
            // 0x2945c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945C4u; }
        if (ctx->pc != 0x2945C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945C4u; }
        if (ctx->pc != 0x2945C4u) { return; }
    }
    ctx->pc = 0x2945C4u;
label_2945c4:
    // 0x2945c4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2945c8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2945c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2945cc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2945ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2945d0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2945d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2945d4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2945d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2945d8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2945d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2945dc: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2945DCu;
    SET_GPR_U32(ctx, 31, 0x2945E4u);
    ctx->pc = 0x2945E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945DCu;
            // 0x2945e0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945E4u; }
        if (ctx->pc != 0x2945E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945E4u; }
        if (ctx->pc != 0x2945E4u) { return; }
    }
    ctx->pc = 0x2945E4u;
label_2945e4:
    // 0x2945e4: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x2945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2945e8: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2945E8u;
    {
        const bool branch_taken_0x2945e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2945ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2945E8u;
            // 0x2945ec: 0x2662fe55  addiu       $v0, $s3, -0x1AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966869));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945e8) {
            ctx->pc = 0x294604u;
            goto label_294604;
        }
    }
    ctx->pc = 0x2945F0u;
    // 0x2945f0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2945f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2945f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2945F4u;
    {
        const bool branch_taken_0x2945f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2945F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2945F4u;
            // 0x2945f8: 0x240201a6  addiu       $v0, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945f4) {
            ctx->pc = 0x294604u;
            goto label_294604;
        }
    }
    ctx->pc = 0x2945FCu;
    // 0x2945fc: 0x16620034  bne         $s3, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2945FCu;
    {
        const bool branch_taken_0x2945fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2945fc) {
            ctx->pc = 0x2946D0u;
            goto label_2946d0;
        }
    }
    ctx->pc = 0x294604u;
label_294604:
    // 0x294604: 0x0  nop
    ctx->pc = 0x294604u;
    // NOP
    // 0x294608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29460c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x29460Cu;
    SET_GPR_U32(ctx, 31, 0x294614u);
    ctx->pc = 0x294610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29460Cu;
            // 0x294610: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294614u; }
        if (ctx->pc != 0x294614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294614u; }
        if (ctx->pc != 0x294614u) { return; }
    }
    ctx->pc = 0x294614u;
label_294614:
    // 0x294614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294618: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x294618u;
    SET_GPR_U32(ctx, 31, 0x294620u);
    ctx->pc = 0x29461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294618u;
            // 0x29461c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294620u; }
        if (ctx->pc != 0x294620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294620u; }
        if (ctx->pc != 0x294620u) { return; }
    }
    ctx->pc = 0x294620u;
label_294620:
    // 0x294620: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x294620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x294624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294628: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x294628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29462c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29462cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294630: 0xc04d320  jal         func_134C80
    ctx->pc = 0x294630u;
    SET_GPR_U32(ctx, 31, 0x294638u);
    ctx->pc = 0x294634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294630u;
            // 0x294634: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294638u; }
        if (ctx->pc != 0x294638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294638u; }
        if (ctx->pc != 0x294638u) { return; }
    }
    ctx->pc = 0x294638u;
label_294638:
    // 0x294638: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x294638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x29463c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x29463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x294640: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x294644: 0x240600ae  addiu       $a2, $zero, 0xAE
    ctx->pc = 0x294644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x294648: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x294648u;
    SET_GPR_U32(ctx, 31, 0x294650u);
    ctx->pc = 0x29464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294648u;
            // 0x29464c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294650u; }
        if (ctx->pc != 0x294650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294650u; }
        if (ctx->pc != 0x294650u) { return; }
    }
    ctx->pc = 0x294650u;
label_294650:
    // 0x294650: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x294650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x294654: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294654u;
    {
        const bool branch_taken_0x294654 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x294654) {
            ctx->pc = 0x294668u;
            goto label_294668;
        }
    }
    ctx->pc = 0x29465Cu;
    // 0x29465c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x29465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x294660: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x294660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x294664: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x294664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_294668:
    // 0x294668: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x29466c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29466Cu;
    {
        const bool branch_taken_0x29466c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x29466c) {
            ctx->pc = 0x294680u;
            goto label_294680;
        }
    }
    ctx->pc = 0x294674u;
    // 0x294674: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x294674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x294678: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x294678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x29467c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x29467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_294680:
    // 0x294680: 0x240201ac  addiu       $v0, $zero, 0x1AC
    ctx->pc = 0x294680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    // 0x294684: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294684u;
    {
        const bool branch_taken_0x294684 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x294684) {
            ctx->pc = 0x294698u;
            goto label_294698;
        }
    }
    ctx->pc = 0x29468Cu;
    // 0x29468c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x29468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x294690: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x294694: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x294694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_294698:
    // 0x294698: 0x240201ab  addiu       $v0, $zero, 0x1AB
    ctx->pc = 0x294698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
    // 0x29469c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29469Cu;
    {
        const bool branch_taken_0x29469c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x29469c) {
            ctx->pc = 0x2946B0u;
            goto label_2946b0;
        }
    }
    ctx->pc = 0x2946A4u;
    // 0x2946a4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2946a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2946a8: 0x24420066  addiu       $v0, $v0, 0x66
    ctx->pc = 0x2946a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 102));
    // 0x2946ac: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2946acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_2946b0:
    // 0x2946b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2946b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946b4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2946b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2946b8: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x2946B8u;
    SET_GPR_U32(ctx, 31, 0x2946C0u);
    ctx->pc = 0x2946BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2946B8u;
            // 0x2946bc: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C0u; }
        if (ctx->pc != 0x2946C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C0u; }
        if (ctx->pc != 0x2946C0u) { return; }
    }
    ctx->pc = 0x2946C0u;
label_2946c0:
    // 0x2946c0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2946C0u;
    SET_GPR_U32(ctx, 31, 0x2946C8u);
    ctx->pc = 0x2946C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2946C0u;
            // 0x2946c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C8u; }
        if (ctx->pc != 0x2946C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946C8u; }
        if (ctx->pc != 0x2946C8u) { return; }
    }
    ctx->pc = 0x2946C8u;
label_2946c8:
    // 0x2946c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2946C8u;
    {
        const bool branch_taken_0x2946c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2946c8) {
            ctx->pc = 0x2946F0u;
            goto label_2946f0;
        }
    }
    ctx->pc = 0x2946D0u;
label_2946d0:
    // 0x2946d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2946d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2946d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946d8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2946d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2946dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2946dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2946e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946e4: 0x27898440  addiu       $t1, $gp, -0x7BC0
    ctx->pc = 0x2946e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935616));
    // 0x2946e8: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x2946E8u;
    SET_GPR_U32(ctx, 31, 0x2946F0u);
    ctx->pc = 0x2946ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2946E8u;
            // 0x2946ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946F0u; }
        if (ctx->pc != 0x2946F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946F0u; }
        if (ctx->pc != 0x2946F0u) { return; }
    }
    ctx->pc = 0x2946F0u;
label_2946f0:
    // 0x2946f0: 0x3c034230  lui         $v1, 0x4230
    ctx->pc = 0x2946f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16944 << 16));
    // 0x2946f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2946f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2946f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2946f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2946fc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2946fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x294700: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x294700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x294704: 0x1460ff24  bnez        $v1, . + 4 + (-0xDC << 2)
    ctx->pc = 0x294704u;
    {
        const bool branch_taken_0x294704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294704u;
            // 0x294708: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294704) {
            ctx->pc = 0x294398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294398;
        }
    }
    ctx->pc = 0x29470Cu;
label_29470c:
    // 0x29470c: 0x0  nop
    ctx->pc = 0x29470cu;
    // NOP
label_294710:
    // 0x294710: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x294710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294714: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x294714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x294718: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x294718u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29471c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x29471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x294720: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x294720u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294724: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x294724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x294728: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x294728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29472c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294730: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x294730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294734: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x294734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294738: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x294738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29473c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29473cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294740: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x294740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294744: 0x3e00008  jr          $ra
    ctx->pc = 0x294744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294744u;
            // 0x294748: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29474Cu;
}
