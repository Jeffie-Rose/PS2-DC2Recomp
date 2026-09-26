#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: exe__10CRunScriptFP8vmcode_t
// Address: 0x1873c0 - 0x18881c
void exe__10CRunScriptFP8vmcode_t_0x1873c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exe__10CRunScriptFP8vmcode_t_0x1873c0");
#endif

    switch (ctx->pc) {
        case 0x1873e8u: goto label_1873e8;
        case 0x187484u: goto label_187484;
        case 0x1874acu: goto label_1874ac;
        case 0x1874c4u: goto label_1874c4;
        case 0x1874d0u: goto label_1874d0;
        case 0x1874f4u: goto label_1874f4;
        case 0x18750cu: goto label_18750c;
        case 0x187518u: goto label_187518;
        case 0x187540u: goto label_187540;
        case 0x187580u: goto label_187580;
        case 0x1875c0u: goto label_1875c0;
        case 0x1875d4u: goto label_1875d4;
        case 0x1875e0u: goto label_1875e0;
        case 0x187628u: goto label_187628;
        case 0x18763cu: goto label_18763c;
        case 0x187648u: goto label_187648;
        case 0x187698u: goto label_187698;
        case 0x187708u: goto label_187708;
        case 0x187728u: goto label_187728;
        case 0x18773cu: goto label_18773c;
        case 0x187748u: goto label_187748;
        case 0x18776cu: goto label_18776c;
        case 0x187784u: goto label_187784;
        case 0x187790u: goto label_187790;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877f8u: goto label_1877f8;
        case 0x18780cu: goto label_18780c;
        case 0x187818u: goto label_187818;
        case 0x18783cu: goto label_18783c;
        case 0x187854u: goto label_187854;
        case 0x187860u: goto label_187860;
        case 0x187888u: goto label_187888;
        case 0x18789cu: goto label_18789c;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878e0u: goto label_1878e0;
        case 0x187904u: goto label_187904;
        case 0x187930u: goto label_187930;
        case 0x187950u: goto label_187950;
        case 0x18799cu: goto label_18799c;
        case 0x1879a4u: goto label_1879a4;
        case 0x1879c4u: goto label_1879c4;
        case 0x1879f4u: goto label_1879f4;
        case 0x1879fcu: goto label_1879fc;
        case 0x187a1cu: goto label_187a1c;
        case 0x187a44u: goto label_187a44;
        case 0x187a64u: goto label_187a64;
        case 0x187ad0u: goto label_187ad0;
        case 0x187ae8u: goto label_187ae8;
        case 0x187afcu: goto label_187afc;
        case 0x187b18u: goto label_187b18;
        case 0x187b2cu: goto label_187b2c;
        case 0x187b48u: goto label_187b48;
        case 0x187bd8u: goto label_187bd8;
        case 0x187be0u: goto label_187be0;
        case 0x187c30u: goto label_187c30;
        case 0x187c58u: goto label_187c58;
        case 0x187c80u: goto label_187c80;
        case 0x187ca8u: goto label_187ca8;
        case 0x187cd0u: goto label_187cd0;
        case 0x187cf8u: goto label_187cf8;
        case 0x187d0cu: goto label_187d0c;
        case 0x187d2cu: goto label_187d2c;
        case 0x187d60u: goto label_187d60;
        case 0x187d90u: goto label_187d90;
        case 0x187dc0u: goto label_187dc0;
        case 0x187df4u: goto label_187df4;
        case 0x187e20u: goto label_187e20;
        case 0x187e28u: goto label_187e28;
        case 0x187e3cu: goto label_187e3c;
        case 0x187e5cu: goto label_187e5c;
        case 0x187e90u: goto label_187e90;
        case 0x187ec0u: goto label_187ec0;
        case 0x187ef0u: goto label_187ef0;
        case 0x187f24u: goto label_187f24;
        case 0x187f50u: goto label_187f50;
        case 0x187f58u: goto label_187f58;
        case 0x187f6cu: goto label_187f6c;
        case 0x187f8cu: goto label_187f8c;
        case 0x187fc0u: goto label_187fc0;
        case 0x187ff0u: goto label_187ff0;
        case 0x188020u: goto label_188020;
        case 0x188054u: goto label_188054;
        case 0x188080u: goto label_188080;
        case 0x188088u: goto label_188088;
        case 0x18809cu: goto label_18809c;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880d4u: goto label_1880d4;
        case 0x188110u: goto label_188110;
        case 0x18814cu: goto label_18814c;
        case 0x18818cu: goto label_18818c;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881f8u: goto label_1881f8;
        case 0x188200u: goto label_188200;
        case 0x188214u: goto label_188214;
        case 0x188220u: goto label_188220;
        case 0x188234u: goto label_188234;
        case 0x188244u: goto label_188244;
        case 0x188250u: goto label_188250;
        case 0x188268u: goto label_188268;
        case 0x18827cu: goto label_18827c;
        case 0x188288u: goto label_188288;
        case 0x188298u: goto label_188298;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f8u: goto label_1882f8;
        case 0x18830cu: goto label_18830c;
        case 0x188334u: goto label_188334;
        case 0x18835cu: goto label_18835c;
        case 0x188388u: goto label_188388;
        case 0x188390u: goto label_188390;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883f4u: goto label_1883f4;
        case 0x188400u: goto label_188400;
        case 0x188428u: goto label_188428;
        case 0x188430u: goto label_188430;
        case 0x188444u: goto label_188444;
        case 0x188468u: goto label_188468;
        case 0x188474u: goto label_188474;
        case 0x188494u: goto label_188494;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884d0u: goto label_1884d0;
        case 0x1884e4u: goto label_1884e4;
        case 0x188518u: goto label_188518;
        case 0x188540u: goto label_188540;
        case 0x188548u: goto label_188548;
        case 0x18855cu: goto label_18855c;
        case 0x188584u: goto label_188584;
        case 0x1885a8u: goto label_1885a8;
        case 0x1885d0u: goto label_1885d0;
        case 0x1885d8u: goto label_1885d8;
        case 0x1885ecu: goto label_1885ec;
        case 0x188610u: goto label_188610;
        case 0x18862cu: goto label_18862c;
        case 0x188638u: goto label_188638;
        case 0x188660u: goto label_188660;
        case 0x188668u: goto label_188668;
        case 0x188694u: goto label_188694;
        case 0x1886d4u: goto label_1886d4;
        case 0x188708u: goto label_188708;
        case 0x18872cu: goto label_18872c;
        case 0x188764u: goto label_188764;
        case 0x188784u: goto label_188784;
        case 0x1887a0u: goto label_1887a0;
        default: break;
    }

    ctx->pc = 0x1873c0u;

    // 0x1873c0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1873c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1873c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1873c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1873c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1873c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1873cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1873ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1873d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1873d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1873d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1873d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1873d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1873d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1873dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1873dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1873e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1873e4: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1873e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
label_1873e8:
    // 0x1873e8: 0x8e110038  lw          $s1, 0x38($s0)
    ctx->pc = 0x1873e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1873ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1873ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1873f0: 0x2c61001f  sltiu       $at, $v1, 0x1F
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1873f4: 0x102004fc  beqz        $at, . + 4 + (0x4FC << 2)
    ctx->pc = 0x1873F4u;
    {
        const bool branch_taken_0x1873f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1873F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873F4u;
            // 0x1873f8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873f4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1873FCu;
    // 0x1873fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1873fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187400: 0x24844430  addiu       $a0, $a0, 0x4430
    ctx->pc = 0x187400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
    // 0x187404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187408: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18740c: 0x600008  jr          $v1
    ctx->pc = 0x18740Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187414u: goto label_187414;
            case 0x1876A0u: goto label_1876a0;
            case 0x187890u: goto label_187890;
            case 0x1878E8u: goto label_1878e8;
            case 0x187958u: goto label_187958;
            case 0x187968u: goto label_187968;
            case 0x187988u: goto label_187988;
            case 0x1879E0u: goto label_1879e0;
            case 0x187A38u: goto label_187a38;
            case 0x187D00u: goto label_187d00;
            case 0x187E30u: goto label_187e30;
            case 0x187F60u: goto label_187f60;
            case 0x188090u: goto label_188090;
            case 0x188208u: goto label_188208;
            case 0x188270u: goto label_188270;
            case 0x1882B8u: goto label_1882b8;
            case 0x188300u: goto label_188300;
            case 0x188398u: goto label_188398;
            case 0x188438u: goto label_188438;
            case 0x1884D8u: goto label_1884d8;
            case 0x188550u: goto label_188550;
            case 0x1885E0u: goto label_1885e0;
            case 0x188670u: goto label_188670;
            case 0x18869Cu: goto label_18869c;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886F0u: goto label_1886f0;
            case 0x18871Cu: goto label_18871c;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887E8u: goto label_1887e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187414u;
label_187414:
    // 0x187414: 0x0  nop
    ctx->pc = 0x187414u;
    // NOP
    // 0x187418: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x187418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18741c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187420: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x187420u;
    {
        const bool branch_taken_0x187420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x187424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187420u;
            // 0x187424: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187420) {
            ctx->pc = 0x187630u;
            goto label_187630;
        }
    }
    ctx->pc = 0x187428u;
    // 0x187428: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x187428u;
    {
        const bool branch_taken_0x187428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187428u;
            // 0x18742c: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187428) {
            ctx->pc = 0x1875C8u;
            goto label_1875c8;
        }
    }
    ctx->pc = 0x187430u;
    // 0x187430: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x187430u;
    {
        const bool branch_taken_0x187430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x187434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187430u;
            // 0x187434: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187430) {
            ctx->pc = 0x187588u;
            goto label_187588;
        }
    }
    ctx->pc = 0x187438u;
    // 0x187438: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x187438u;
    {
        const bool branch_taken_0x187438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187438u;
            // 0x18743c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187438) {
            ctx->pc = 0x187548u;
            goto label_187548;
        }
    }
    ctx->pc = 0x187440u;
    // 0x187440: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x187440u;
    {
        const bool branch_taken_0x187440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x187444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187440u;
            // 0x187444: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187440) {
            ctx->pc = 0x1874FCu;
            goto label_1874fc;
        }
    }
    ctx->pc = 0x187448u;
    // 0x187448: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x187448u;
    {
        const bool branch_taken_0x187448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187448u;
            // 0x18744c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187448) {
            ctx->pc = 0x1874B4u;
            goto label_1874b4;
        }
    }
    ctx->pc = 0x187450u;
    // 0x187450: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x187450u;
    {
        const bool branch_taken_0x187450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x187454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187450u;
            // 0x187454: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187450) {
            ctx->pc = 0x18748Cu;
            goto label_18748c;
        }
    }
    ctx->pc = 0x187458u;
    // 0x187458: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187458u;
    {
        const bool branch_taken_0x187458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x187458) {
            ctx->pc = 0x187468u;
            goto label_187468;
        }
    }
    ctx->pc = 0x187460u;
    // 0x187460: 0x100004e2  b           . + 4 + (0x4E2 << 2)
    ctx->pc = 0x187460u;
    {
        const bool branch_taken_0x187460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187460u;
            // 0x187464: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187460) {
            ctx->pc = 0x1887ECu;
            goto label_1887ec;
        }
    }
    ctx->pc = 0x187468u;
label_187468:
    // 0x187468: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18746c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187470: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187478: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x187478u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18747c: 0xc061b60  jal         func_186D80
    ctx->pc = 0x18747Cu;
    SET_GPR_U32(ctx, 31, 0x187484u);
    ctx->pc = 0x187480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18747Cu;
            // 0x187480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187484u; }
        if (ctx->pc != 0x187484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187484u; }
        if (ctx->pc != 0x187484u) { return; }
    }
    ctx->pc = 0x187484u;
label_187484:
    // 0x187484: 0x100004d8  b           . + 4 + (0x4D8 << 2)
    ctx->pc = 0x187484u;
    {
        const bool branch_taken_0x187484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187484) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18748Cu;
label_18748c:
    // 0x18748c: 0x0  nop
    ctx->pc = 0x18748cu;
    // NOP
    // 0x187490: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187494: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x187494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x187498: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18749c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1874a0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1874a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1874a4: 0xc061b60  jal         func_186D80
    ctx->pc = 0x1874A4u;
    SET_GPR_U32(ctx, 31, 0x1874ACu);
    ctx->pc = 0x1874A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874A4u;
            // 0x1874a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874ACu; }
        if (ctx->pc != 0x1874ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874ACu; }
        if (ctx->pc != 0x1874ACu) { return; }
    }
    ctx->pc = 0x1874ACu;
label_1874ac:
    // 0x1874ac: 0x100004ce  b           . + 4 + (0x4CE << 2)
    ctx->pc = 0x1874ACu;
    {
        const bool branch_taken_0x1874ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874ac) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1874B4u;
label_1874b4:
    // 0x1874b4: 0x0  nop
    ctx->pc = 0x1874b4u;
    // NOP
    // 0x1874b8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1874b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1874bc: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1874BCu;
    SET_GPR_U32(ctx, 31, 0x1874C4u);
    ctx->pc = 0x1874C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874BCu;
            // 0x1874c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874C4u; }
        if (ctx->pc != 0x1874C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874C4u; }
        if (ctx->pc != 0x1874C4u) { return; }
    }
    ctx->pc = 0x1874C4u;
label_1874c4:
    // 0x1874c4: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1874c8: 0xc061acc  jal         func_186B30
    ctx->pc = 0x1874C8u;
    SET_GPR_U32(ctx, 31, 0x1874D0u);
    ctx->pc = 0x1874CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874C8u;
            // 0x1874cc: 0xdfa40078  ld          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874D0u; }
        if (ctx->pc != 0x1874D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874D0u; }
        if (ctx->pc != 0x1874D0u) { return; }
    }
    ctx->pc = 0x1874D0u;
label_1874d0:
    // 0x1874d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1874d4: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1874d8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1874d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1874dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1874dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1874e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1874e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1874e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1874e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1874e8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1874e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1874ec: 0xc061b60  jal         func_186D80
    ctx->pc = 0x1874ECu;
    SET_GPR_U32(ctx, 31, 0x1874F4u);
    ctx->pc = 0x1874F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874ECu;
            // 0x1874f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874F4u; }
        if (ctx->pc != 0x1874F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874F4u; }
        if (ctx->pc != 0x1874F4u) { return; }
    }
    ctx->pc = 0x1874F4u;
label_1874f4:
    // 0x1874f4: 0x100004bc  b           . + 4 + (0x4BC << 2)
    ctx->pc = 0x1874F4u;
    {
        const bool branch_taken_0x1874f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874f4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1874FCu;
label_1874fc:
    // 0x1874fc: 0x0  nop
    ctx->pc = 0x1874fcu;
    // NOP
    // 0x187500: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x187504: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187504u;
    SET_GPR_U32(ctx, 31, 0x18750Cu);
    ctx->pc = 0x187508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187504u;
            // 0x187508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18750Cu; }
        if (ctx->pc != 0x18750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18750Cu; }
        if (ctx->pc != 0x18750Cu) { return; }
    }
    ctx->pc = 0x18750Cu;
label_18750c:
    // 0x18750c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x18750cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187510: 0xc061acc  jal         func_186B30
    ctx->pc = 0x187510u;
    SET_GPR_U32(ctx, 31, 0x187518u);
    ctx->pc = 0x187514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187510u;
            // 0x187514: 0xdfa40080  ld          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187518u; }
        if (ctx->pc != 0x187518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187518u; }
        if (ctx->pc != 0x187518u) { return; }
    }
    ctx->pc = 0x187518u;
label_187518:
    // 0x187518: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18751c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187520: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187524: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18752c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187534: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x187534u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187538: 0xc061b60  jal         func_186D80
    ctx->pc = 0x187538u;
    SET_GPR_U32(ctx, 31, 0x187540u);
    ctx->pc = 0x18753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187538u;
            // 0x18753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187540u; }
        if (ctx->pc != 0x187540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187540u; }
        if (ctx->pc != 0x187540u) { return; }
    }
    ctx->pc = 0x187540u;
label_187540:
    // 0x187540: 0x100004a9  b           . + 4 + (0x4A9 << 2)
    ctx->pc = 0x187540u;
    {
        const bool branch_taken_0x187540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187540) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187548u;
label_187548:
    // 0x187548: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18754c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187554: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18755c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x18755cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x187560: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187564: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187568: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18756c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18756cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187574: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x187574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187578: 0xc061b60  jal         func_186D80
    ctx->pc = 0x187578u;
    SET_GPR_U32(ctx, 31, 0x187580u);
    ctx->pc = 0x18757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187578u;
            // 0x18757c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187580u; }
        if (ctx->pc != 0x187580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187580u; }
        if (ctx->pc != 0x187580u) { return; }
    }
    ctx->pc = 0x187580u;
label_187580:
    // 0x187580: 0x10000499  b           . + 4 + (0x499 << 2)
    ctx->pc = 0x187580u;
    {
        const bool branch_taken_0x187580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187580) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187588u;
label_187588:
    // 0x187588: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18758c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x18758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x187590: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187594: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18759c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x18759cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1875a0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1875a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1875a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1875a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1875a8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1875a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1875ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1875b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1875b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1875b4: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1875b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1875b8: 0xc061b60  jal         func_186D80
    ctx->pc = 0x1875B8u;
    SET_GPR_U32(ctx, 31, 0x1875C0u);
    ctx->pc = 0x1875BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875B8u;
            // 0x1875bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875C0u; }
        if (ctx->pc != 0x1875C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875C0u; }
        if (ctx->pc != 0x1875C0u) { return; }
    }
    ctx->pc = 0x1875C0u;
label_1875c0:
    // 0x1875c0: 0x10000489  b           . + 4 + (0x489 << 2)
    ctx->pc = 0x1875C0u;
    {
        const bool branch_taken_0x1875c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875c0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1875C8u;
label_1875c8:
    // 0x1875c8: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1875c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1875cc: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1875CCu;
    SET_GPR_U32(ctx, 31, 0x1875D4u);
    ctx->pc = 0x1875D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875CCu;
            // 0x1875d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875D4u; }
        if (ctx->pc != 0x1875D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875D4u; }
        if (ctx->pc != 0x1875D4u) { return; }
    }
    ctx->pc = 0x1875D4u;
label_1875d4:
    // 0x1875d4: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1875d8: 0xc061acc  jal         func_186B30
    ctx->pc = 0x1875D8u;
    SET_GPR_U32(ctx, 31, 0x1875E0u);
    ctx->pc = 0x1875DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875D8u;
            // 0x1875dc: 0xdfa40088  ld          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875E0u; }
        if (ctx->pc != 0x1875E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875E0u; }
        if (ctx->pc != 0x1875E0u) { return; }
    }
    ctx->pc = 0x1875E0u;
label_1875e0:
    // 0x1875e0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1875e4: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1875e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1875e8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1875e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1875ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1875ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1875f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1875f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1875f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1875f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1875f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1875f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1875fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1875fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x187600: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x187600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x187604: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187608: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18760c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187610: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187618: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x187618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18761c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x18761cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187620: 0xc061b60  jal         func_186D80
    ctx->pc = 0x187620u;
    SET_GPR_U32(ctx, 31, 0x187628u);
    ctx->pc = 0x187624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187620u;
            // 0x187624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187628u; }
        if (ctx->pc != 0x187628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187628u; }
        if (ctx->pc != 0x187628u) { return; }
    }
    ctx->pc = 0x187628u;
label_187628:
    // 0x187628: 0x1000046f  b           . + 4 + (0x46F << 2)
    ctx->pc = 0x187628u;
    {
        const bool branch_taken_0x187628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187628) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187630u;
label_187630:
    // 0x187630: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x187630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187634: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187634u;
    SET_GPR_U32(ctx, 31, 0x18763Cu);
    ctx->pc = 0x187638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187634u;
            // 0x187638: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18763Cu; }
        if (ctx->pc != 0x18763Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18763Cu; }
        if (ctx->pc != 0x18763Cu) { return; }
    }
    ctx->pc = 0x18763Cu;
label_18763c:
    // 0x18763c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x18763cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187640: 0xc061acc  jal         func_186B30
    ctx->pc = 0x187640u;
    SET_GPR_U32(ctx, 31, 0x187648u);
    ctx->pc = 0x187644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187640u;
            // 0x187644: 0xdfa40090  ld          $a0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187648u; }
        if (ctx->pc != 0x187648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187648u; }
        if (ctx->pc != 0x187648u) { return; }
    }
    ctx->pc = 0x187648u;
label_187648:
    // 0x187648: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x187648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x18764c: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x18764cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187650: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x187650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187654: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187658: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x187658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18765c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x187660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187664: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x187664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187668: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x187668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18766c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x18766cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x187670: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187674: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187678: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18767c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18767cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187684: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x187684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187688: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18768c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x18768cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187690: 0xc061b60  jal         func_186D80
    ctx->pc = 0x187690u;
    SET_GPR_U32(ctx, 31, 0x187698u);
    ctx->pc = 0x187694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187690u;
            // 0x187694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187698u; }
        if (ctx->pc != 0x187698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187698u; }
        if (ctx->pc != 0x187698u) { return; }
    }
    ctx->pc = 0x187698u;
label_187698:
    // 0x187698: 0x10000453  b           . + 4 + (0x453 << 2)
    ctx->pc = 0x187698u;
    {
        const bool branch_taken_0x187698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187698) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1876A0u;
label_1876a0:
    // 0x1876a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1876a4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1876a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1876a8: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1876A8u;
    {
        const bool branch_taken_0x1876a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876A8u;
            // 0x1876ac: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876a8) {
            ctx->pc = 0x187844u;
            goto label_187844;
        }
    }
    ctx->pc = 0x1876B0u;
    // 0x1876b0: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1876B0u;
    {
        const bool branch_taken_0x1876b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876B0u;
            // 0x1876b4: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876b0) {
            ctx->pc = 0x187800u;
            goto label_187800;
        }
    }
    ctx->pc = 0x1876B8u;
    // 0x1876b8: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1876B8u;
    {
        const bool branch_taken_0x1876b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876B8u;
            // 0x1876bc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876b8) {
            ctx->pc = 0x1877E0u;
            goto label_1877e0;
        }
    }
    ctx->pc = 0x1876C0u;
    // 0x1876c0: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1876C0u;
    {
        const bool branch_taken_0x1876c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876C0u;
            // 0x1876c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876c0) {
            ctx->pc = 0x1877C0u;
            goto label_1877c0;
        }
    }
    ctx->pc = 0x1876C8u;
    // 0x1876c8: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1876C8u;
    {
        const bool branch_taken_0x1876c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876C8u;
            // 0x1876cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876c8) {
            ctx->pc = 0x187774u;
            goto label_187774;
        }
    }
    ctx->pc = 0x1876D0u;
    // 0x1876d0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1876D0u;
    {
        const bool branch_taken_0x1876d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876D0u;
            // 0x1876d4: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d0) {
            ctx->pc = 0x187730u;
            goto label_187730;
        }
    }
    ctx->pc = 0x1876D8u;
    // 0x1876d8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1876D8u;
    {
        const bool branch_taken_0x1876d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1876DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876D8u;
            // 0x1876dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d8) {
            ctx->pc = 0x187710u;
            goto label_187710;
        }
    }
    ctx->pc = 0x1876E0u;
    // 0x1876e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1876E0u;
    {
        const bool branch_taken_0x1876e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1876e0) {
            ctx->pc = 0x1876F0u;
            goto label_1876f0;
        }
    }
    ctx->pc = 0x1876E8u;
    // 0x1876e8: 0x1000043f  b           . + 4 + (0x43F << 2)
    ctx->pc = 0x1876E8u;
    {
        const bool branch_taken_0x1876e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876e8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1876F0u;
label_1876f0:
    // 0x1876f0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1876f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1876f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1876f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1876f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1876fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187700: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x187700u;
    SET_GPR_U32(ctx, 31, 0x187708u);
    ctx->pc = 0x187704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187700u;
            // 0x187704: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187708u; }
        if (ctx->pc != 0x187708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187708u; }
        if (ctx->pc != 0x187708u) { return; }
    }
    ctx->pc = 0x187708u;
label_187708:
    // 0x187708: 0x10000437  b           . + 4 + (0x437 << 2)
    ctx->pc = 0x187708u;
    {
        const bool branch_taken_0x187708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187708) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187710u;
label_187710:
    // 0x187710: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187714: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x187718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18771c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18771cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187720: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x187720u;
    SET_GPR_U32(ctx, 31, 0x187728u);
    ctx->pc = 0x187724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187720u;
            // 0x187724: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187728u; }
        if (ctx->pc != 0x187728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187728u; }
        if (ctx->pc != 0x187728u) { return; }
    }
    ctx->pc = 0x187728u;
label_187728:
    // 0x187728: 0x1000042f  b           . + 4 + (0x42F << 2)
    ctx->pc = 0x187728u;
    {
        const bool branch_taken_0x187728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187728) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187730u;
label_187730:
    // 0x187730: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x187730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x187734: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187734u;
    SET_GPR_U32(ctx, 31, 0x18773Cu);
    ctx->pc = 0x187738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187734u;
            // 0x187738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18773Cu; }
        if (ctx->pc != 0x18773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18773Cu; }
        if (ctx->pc != 0x18773Cu) { return; }
    }
    ctx->pc = 0x18773Cu;
label_18773c:
    // 0x18773c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187740: 0xc061acc  jal         func_186B30
    ctx->pc = 0x187740u;
    SET_GPR_U32(ctx, 31, 0x187748u);
    ctx->pc = 0x187744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187740u;
            // 0x187744: 0xdfa40098  ld          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187748u; }
        if (ctx->pc != 0x187748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187748u; }
        if (ctx->pc != 0x187748u) { return; }
    }
    ctx->pc = 0x187748u;
label_187748:
    // 0x187748: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x18774c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187750: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187758: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18775c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18775cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187764: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x187764u;
    SET_GPR_U32(ctx, 31, 0x18776Cu);
    ctx->pc = 0x187768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187764u;
            // 0x187768: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18776Cu; }
        if (ctx->pc != 0x18776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18776Cu; }
        if (ctx->pc != 0x18776Cu) { return; }
    }
    ctx->pc = 0x18776Cu;
label_18776c:
    // 0x18776c: 0x1000041e  b           . + 4 + (0x41E << 2)
    ctx->pc = 0x18776Cu;
    {
        const bool branch_taken_0x18776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18776c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187774u;
label_187774:
    // 0x187774: 0x0  nop
    ctx->pc = 0x187774u;
    // NOP
    // 0x187778: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x187778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18777c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x18777Cu;
    SET_GPR_U32(ctx, 31, 0x187784u);
    ctx->pc = 0x187780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18777Cu;
            // 0x187780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187784u; }
        if (ctx->pc != 0x187784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187784u; }
        if (ctx->pc != 0x187784u) { return; }
    }
    ctx->pc = 0x187784u;
label_187784:
    // 0x187784: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x187784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187788: 0xc061acc  jal         func_186B30
    ctx->pc = 0x187788u;
    SET_GPR_U32(ctx, 31, 0x187790u);
    ctx->pc = 0x18778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187788u;
            // 0x18778c: 0xdfa400a0  ld          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187790u; }
        if (ctx->pc != 0x187790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187790u; }
        if (ctx->pc != 0x187790u) { return; }
    }
    ctx->pc = 0x187790u;
label_187790:
    // 0x187790: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187794: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x187794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187798: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18779c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1877a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1877a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1877ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1877acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1877b0: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x1877B0u;
    SET_GPR_U32(ctx, 31, 0x1877B8u);
    ctx->pc = 0x1877B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877B0u;
            // 0x1877b4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877B8u; }
        if (ctx->pc != 0x1877B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877B8u; }
        if (ctx->pc != 0x1877B8u) { return; }
    }
    ctx->pc = 0x1877B8u;
label_1877b8:
    // 0x1877b8: 0x1000040b  b           . + 4 + (0x40B << 2)
    ctx->pc = 0x1877B8u;
    {
        const bool branch_taken_0x1877b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877b8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1877C0u;
label_1877c0:
    // 0x1877c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1877c4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1877c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1877c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1877ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1877d0: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x1877D0u;
    SET_GPR_U32(ctx, 31, 0x1877D8u);
    ctx->pc = 0x1877D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877D0u;
            // 0x1877d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877D8u; }
        if (ctx->pc != 0x1877D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877D8u; }
        if (ctx->pc != 0x1877D8u) { return; }
    }
    ctx->pc = 0x1877D8u;
label_1877d8:
    // 0x1877d8: 0x10000403  b           . + 4 + (0x403 << 2)
    ctx->pc = 0x1877D8u;
    {
        const bool branch_taken_0x1877d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877d8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1877E0u;
label_1877e0:
    // 0x1877e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1877e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1877e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1877e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1877e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1877f0: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x1877F0u;
    SET_GPR_U32(ctx, 31, 0x1877F8u);
    ctx->pc = 0x1877F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877F0u;
            // 0x1877f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877F8u; }
        if (ctx->pc != 0x1877F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877F8u; }
        if (ctx->pc != 0x1877F8u) { return; }
    }
    ctx->pc = 0x1877F8u;
label_1877f8:
    // 0x1877f8: 0x100003fb  b           . + 4 + (0x3FB << 2)
    ctx->pc = 0x1877F8u;
    {
        const bool branch_taken_0x1877f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877f8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187800u;
label_187800:
    // 0x187800: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x187804: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187804u;
    SET_GPR_U32(ctx, 31, 0x18780Cu);
    ctx->pc = 0x187808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187804u;
            // 0x187808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18780Cu; }
        if (ctx->pc != 0x18780Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18780Cu; }
        if (ctx->pc != 0x18780Cu) { return; }
    }
    ctx->pc = 0x18780Cu;
label_18780c:
    // 0x18780c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187810: 0xc061acc  jal         func_186B30
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 31, 0x187818u);
    ctx->pc = 0x187814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187810u;
            // 0x187814: 0xdfa400a8  ld          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187818u; }
        if (ctx->pc != 0x187818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187818u; }
        if (ctx->pc != 0x187818u) { return; }
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x18781c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187820: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187828: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18782c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18782cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187834: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x187834u;
    SET_GPR_U32(ctx, 31, 0x18783Cu);
    ctx->pc = 0x187838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187834u;
            // 0x187838: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18783Cu; }
        if (ctx->pc != 0x18783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18783Cu; }
        if (ctx->pc != 0x18783Cu) { return; }
    }
    ctx->pc = 0x18783Cu;
label_18783c:
    // 0x18783c: 0x100003ea  b           . + 4 + (0x3EA << 2)
    ctx->pc = 0x18783Cu;
    {
        const bool branch_taken_0x18783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18783c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187844u;
label_187844:
    // 0x187844: 0x0  nop
    ctx->pc = 0x187844u;
    // NOP
    // 0x187848: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18784c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x18784Cu;
    SET_GPR_U32(ctx, 31, 0x187854u);
    ctx->pc = 0x187850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18784Cu;
            // 0x187850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187854u; }
        if (ctx->pc != 0x187854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187854u; }
        if (ctx->pc != 0x187854u) { return; }
    }
    ctx->pc = 0x187854u;
label_187854:
    // 0x187854: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x187854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187858: 0xc061acc  jal         func_186B30
    ctx->pc = 0x187858u;
    SET_GPR_U32(ctx, 31, 0x187860u);
    ctx->pc = 0x18785Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187858u;
            // 0x18785c: 0xdfa400b0  ld          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187860u; }
        if (ctx->pc != 0x187860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187860u; }
        if (ctx->pc != 0x187860u) { return; }
    }
    ctx->pc = 0x187860u;
label_187860:
    // 0x187860: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187864: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x187864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x187868: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18786c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187870: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187874: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18787c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187880: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x187880u;
    SET_GPR_U32(ctx, 31, 0x187888u);
    ctx->pc = 0x187884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187880u;
            // 0x187884: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187888u; }
        if (ctx->pc != 0x187888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_ptr__10CRunScriptFP12RS_STACKDATA_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187888u; }
        if (ctx->pc != 0x187888u) { return; }
    }
    ctx->pc = 0x187888u;
label_187888:
    // 0x187888: 0x100003d7  b           . + 4 + (0x3D7 << 2)
    ctx->pc = 0x187888u;
    {
        const bool branch_taken_0x187888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187888) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187890u;
label_187890:
    // 0x187890: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x187890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x187894: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187894u;
    SET_GPR_U32(ctx, 31, 0x18789Cu);
    ctx->pc = 0x187898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187894u;
            // 0x187898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18789Cu; }
        if (ctx->pc != 0x18789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18789Cu; }
        if (ctx->pc != 0x18789Cu) { return; }
    }
    ctx->pc = 0x18789Cu;
label_18789c:
    // 0x18789c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1878a0: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x1878a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1878a4: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1878a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1878a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1878ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1878acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878b0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1878b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1878b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1878b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1878b8: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1878B8u;
    SET_GPR_U32(ctx, 31, 0x1878C0u);
    ctx->pc = 0x1878BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878B8u;
            // 0x1878bc: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878C0u; }
        if (ctx->pc != 0x1878C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878C0u; }
        if (ctx->pc != 0x1878C0u) { return; }
    }
    ctx->pc = 0x1878C0u;
label_1878c0:
    // 0x1878c0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1878c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1878c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1878c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1878c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1878cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1878ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1878d0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1878d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1878d4: 0xdfa50060  ld          $a1, 0x60($sp)
    ctx->pc = 0x1878d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1878d8: 0xc061b60  jal         func_186D80
    ctx->pc = 0x1878D8u;
    SET_GPR_U32(ctx, 31, 0x1878E0u);
    ctx->pc = 0x1878DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878D8u;
            // 0x1878dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878E0u; }
        if (ctx->pc != 0x1878E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878E0u; }
        if (ctx->pc != 0x1878E0u) { return; }
    }
    ctx->pc = 0x1878E0u;
label_1878e0:
    // 0x1878e0: 0x100003c1  b           . + 4 + (0x3C1 << 2)
    ctx->pc = 0x1878E0u;
    {
        const bool branch_taken_0x1878e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878e0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1878E8u;
label_1878e8:
    // 0x1878e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1878e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1878ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1878ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878f0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1878F0u;
    {
        const bool branch_taken_0x1878f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1878f0) {
            ctx->pc = 0x18790Cu;
            goto label_18790c;
        }
    }
    ctx->pc = 0x1878F8u;
    // 0x1878f8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1878fc: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 31, 0x187904u);
    ctx->pc = 0x187900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878FCu;
            // 0x187900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187904u; }
        if (ctx->pc != 0x187904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187904u; }
        if (ctx->pc != 0x187904u) { return; }
    }
    ctx->pc = 0x187904u;
label_187904:
    // 0x187904: 0x100003b8  b           . + 4 + (0x3B8 << 2)
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187904) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18790Cu;
label_18790c:
    // 0x18790c: 0x0  nop
    ctx->pc = 0x18790cu;
    // NOP
    // 0x187910: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x187910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187914: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x187914u;
    {
        const bool branch_taken_0x187914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187914) {
            ctx->pc = 0x187938u;
            goto label_187938;
        }
    }
    ctx->pc = 0x18791Cu;
    // 0x18791c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x187920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187924: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x187924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x187928: 0xc061b88  jal         func_186E20
    ctx->pc = 0x187928u;
    SET_GPR_U32(ctx, 31, 0x187930u);
    ctx->pc = 0x18792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187928u;
            // 0x18792c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E20u;
    if (runtime->hasFunction(0x186E20u)) {
        auto targetFn = runtime->lookupFunction(0x186E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187930u; }
        if (ctx->pc != 0x187930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_str__10CRunScriptFPc_0x186e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187930u; }
        if (ctx->pc != 0x187930u) { return; }
    }
    ctx->pc = 0x187930u;
label_187930:
    // 0x187930: 0x100003ad  b           . + 4 + (0x3AD << 2)
    ctx->pc = 0x187930u;
    {
        const bool branch_taken_0x187930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187930) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187938u;
label_187938:
    // 0x187938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x187938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18793c: 0x148303aa  bne         $a0, $v1, . + 4 + (0x3AA << 2)
    ctx->pc = 0x18793Cu;
    {
        const bool branch_taken_0x18793c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18793c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187944u;
    // 0x187944: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x187944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x187948: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187948u;
    SET_GPR_U32(ctx, 31, 0x187950u);
    ctx->pc = 0x18794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187948u;
            // 0x18794c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187950u; }
        if (ctx->pc != 0x187950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187950u; }
        if (ctx->pc != 0x187950u) { return; }
    }
    ctx->pc = 0x187950u;
label_187950:
    // 0x187950: 0x100003a5  b           . + 4 + (0x3A5 << 2)
    ctx->pc = 0x187950u;
    {
        const bool branch_taken_0x187950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187950) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187958u;
label_187958:
    // 0x187958: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x187958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18795c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x18795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x187960: 0x100003a1  b           . + 4 + (0x3A1 << 2)
    ctx->pc = 0x187960u;
    {
        const bool branch_taken_0x187960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187960u;
            // 0x187964: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187960) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187968u;
label_187968:
    // 0x187968: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x187968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18796c: 0x1460039e  bnez        $v1, . + 4 + (0x39E << 2)
    ctx->pc = 0x18796Cu;
    {
        const bool branch_taken_0x18796c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18796c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187974u;
    // 0x187974: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187978: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x187978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18797c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187980: 0x1000fe99  b           . + 4 + (-0x167 << 2)
    ctx->pc = 0x187980u;
    {
        const bool branch_taken_0x187980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187980u;
            // 0x187984: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187980) {
            ctx->pc = 0x1873E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1873e8;
        }
    }
    ctx->pc = 0x187988u;
label_187988:
    // 0x187988: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x187988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18798c: 0x14600396  bnez        $v1, . + 4 + (0x396 << 2)
    ctx->pc = 0x18798Cu;
    {
        const bool branch_taken_0x18798c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18798Cu;
            // 0x187990: 0x27a400c8  addiu       $a0, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18798c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187994u;
    // 0x187994: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187994u;
    SET_GPR_U32(ctx, 31, 0x18799Cu);
    ctx->pc = 0x187998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187994u;
            // 0x187998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18799Cu; }
        if (ctx->pc != 0x18799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18799Cu; }
        if (ctx->pc != 0x18799Cu) { return; }
    }
    ctx->pc = 0x18799Cu;
label_18799c:
    // 0x18799c: 0xc061ae4  jal         func_186B90
    ctx->pc = 0x18799Cu;
    SET_GPR_U32(ctx, 31, 0x1879A4u);
    ctx->pc = 0x1879A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18799Cu;
            // 0x1879a0: 0xdfa400c8  ld          $a0, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B90u;
    if (runtime->hasFunction(0x186B90u)) {
        auto targetFn = runtime->lookupFunction(0x186B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879A4u; }
        if (ctx->pc != 0x1879A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        is_true__F12RS_STACKDATA_0x186b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879A4u; }
        if (ctx->pc != 0x1879A4u) { return; }
    }
    ctx->pc = 0x1879A4u;
label_1879a4:
    // 0x1879a4: 0x10400390  beqz        $v0, . + 4 + (0x390 << 2)
    ctx->pc = 0x1879A4u;
    {
        const bool branch_taken_0x1879a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1879a4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1879ACu;
    // 0x1879ac: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1879acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1879b0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1879b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1879b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1879B4u;
    {
        const bool branch_taken_0x1879b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879B4u;
            // 0x1879b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879b4) {
            ctx->pc = 0x1879C4u;
            goto label_1879c4;
        }
    }
    ctx->pc = 0x1879BCu;
    // 0x1879bc: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x1879BCu;
    SET_GPR_U32(ctx, 31, 0x1879C4u);
    ctx->pc = 0x1879C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879BCu;
            // 0x1879c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879C4u; }
        if (ctx->pc != 0x1879C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879C4u; }
        if (ctx->pc != 0x1879C4u) { return; }
    }
    ctx->pc = 0x1879C4u;
label_1879c4:
    // 0x1879c4: 0x0  nop
    ctx->pc = 0x1879c4u;
    // NOP
    // 0x1879c8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1879c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1879cc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1879d0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1879d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1879d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1879d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1879d8: 0x1000fe83  b           . + 4 + (-0x17D << 2)
    ctx->pc = 0x1879D8u;
    {
        const bool branch_taken_0x1879d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879D8u;
            // 0x1879dc: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879d8) {
            ctx->pc = 0x1873E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1873e8;
        }
    }
    ctx->pc = 0x1879E0u;
label_1879e0:
    // 0x1879e0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1879e4: 0x14600380  bnez        $v1, . + 4 + (0x380 << 2)
    ctx->pc = 0x1879E4u;
    {
        const bool branch_taken_0x1879e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879E4u;
            // 0x1879e8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879e4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1879ECu;
    // 0x1879ec: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1879ECu;
    SET_GPR_U32(ctx, 31, 0x1879F4u);
    ctx->pc = 0x1879F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879ECu;
            // 0x1879f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879F4u; }
        if (ctx->pc != 0x1879F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879F4u; }
        if (ctx->pc != 0x1879F4u) { return; }
    }
    ctx->pc = 0x1879F4u;
label_1879f4:
    // 0x1879f4: 0xc061ae4  jal         func_186B90
    ctx->pc = 0x1879F4u;
    SET_GPR_U32(ctx, 31, 0x1879FCu);
    ctx->pc = 0x1879F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879F4u;
            // 0x1879f8: 0xdfa400d0  ld          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B90u;
    if (runtime->hasFunction(0x186B90u)) {
        auto targetFn = runtime->lookupFunction(0x186B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879FCu; }
        if (ctx->pc != 0x1879FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        is_true__F12RS_STACKDATA_0x186b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879FCu; }
        if (ctx->pc != 0x1879FCu) { return; }
    }
    ctx->pc = 0x1879FCu;
label_1879fc:
    // 0x1879fc: 0x1440037a  bnez        $v0, . + 4 + (0x37A << 2)
    ctx->pc = 0x1879FCu;
    {
        const bool branch_taken_0x1879fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1879fc) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187A04u;
    // 0x187a04: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187a08: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x187a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187A0Cu;
    {
        const bool branch_taken_0x187a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A0Cu;
            // 0x187a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a0c) {
            ctx->pc = 0x187A1Cu;
            goto label_187a1c;
        }
    }
    ctx->pc = 0x187A14u;
    // 0x187a14: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187A14u;
    SET_GPR_U32(ctx, 31, 0x187A1Cu);
    ctx->pc = 0x187A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A14u;
            // 0x187a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A1Cu; }
        if (ctx->pc != 0x187A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A1Cu; }
        if (ctx->pc != 0x187A1Cu) { return; }
    }
    ctx->pc = 0x187A1Cu;
label_187a1c:
    // 0x187a1c: 0x0  nop
    ctx->pc = 0x187a1cu;
    // NOP
    // 0x187a20: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187a24: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x187a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x187a28: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187a2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x187a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187a30: 0x1000fe6d  b           . + 4 + (-0x193 << 2)
    ctx->pc = 0x187A30u;
    {
        const bool branch_taken_0x187a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A30u;
            // 0x187a34: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a30) {
            ctx->pc = 0x1873E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1873e8;
        }
    }
    ctx->pc = 0x187A38u;
label_187a38:
    // 0x187a38: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x187a3c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187A3Cu;
    SET_GPR_U32(ctx, 31, 0x187A44u);
    ctx->pc = 0x187A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A3Cu;
            // 0x187a40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A44u; }
        if (ctx->pc != 0x187A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A44u; }
        if (ctx->pc != 0x187A44u) { return; }
    }
    ctx->pc = 0x187A44u;
label_187a44:
    // 0x187a44: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x187a48: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x187a4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187a50: 0x27b2006c  addiu       $s2, $sp, 0x6C
    ctx->pc = 0x187a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x187a54: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x187a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a5c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187A5Cu;
    SET_GPR_U32(ctx, 31, 0x187A64u);
    ctx->pc = 0x187A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A5Cu;
            // 0x187a60: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A64u; }
        if (ctx->pc != 0x187A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A64u; }
        if (ctx->pc != 0x187A64u) { return; }
    }
    ctx->pc = 0x187A64u;
label_187a64:
    // 0x187a64: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x187a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x187a68: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x187a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x187a6c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x187a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187a70: 0x27a60074  addiu       $a2, $sp, 0x74
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x187a74: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x187A74u;
    {
        const bool branch_taken_0x187a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A74u;
            // 0x187a78: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a74) {
            ctx->pc = 0x187B50u;
            goto label_187b50;
        }
    }
    ctx->pc = 0x187A7Cu;
    // 0x187a7c: 0x16200034  bnez        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x187A7Cu;
    {
        const bool branch_taken_0x187a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x187a7c) {
            ctx->pc = 0x187B50u;
            goto label_187b50;
        }
    }
    ctx->pc = 0x187A84u;
    // 0x187a84: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187a88: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x187a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187a8c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187a90: 0x2063ffd8  addi        $v1, $v1, -0x28
    ctx->pc = 0x187a90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967256, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x187a94: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x187a94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x187a98: 0x10200353  beqz        $at, . + 4 + (0x353 << 2)
    ctx->pc = 0x187A98u;
    {
        const bool branch_taken_0x187a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A98u;
            // 0x187a9c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a98) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187AA0u;
    // 0x187aa0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x187aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x187aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187aa8: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    // 0x187aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187ab0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187ab4: 0x600008  jr          $v1
    ctx->pc = 0x187AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187ABCu: goto label_187abc;
            case 0x187AD8u: goto label_187ad8;
            case 0x187AF0u: goto label_187af0;
            case 0x187B04u: goto label_187b04;
            case 0x187B20u: goto label_187b20;
            case 0x187B34u: goto label_187b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187ABCu;
label_187abc:
    // 0x187abc: 0x0  nop
    ctx->pc = 0x187abcu;
    // NOP
    // 0x187ac0: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x187ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x187ac4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x187ac4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x187ac8: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187AC8u;
    SET_GPR_U32(ctx, 31, 0x187AD0u);
    ctx->pc = 0x187ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AC8u;
            // 0x187acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AD0u; }
        if (ctx->pc != 0x187AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AD0u; }
        if (ctx->pc != 0x187AD0u) { return; }
    }
    ctx->pc = 0x187AD0u;
label_187ad0:
    // 0x187ad0: 0x10000345  b           . + 4 + (0x345 << 2)
    ctx->pc = 0x187AD0u;
    {
        const bool branch_taken_0x187ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ad0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187AD8u;
label_187ad8:
    // 0x187ad8: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x187ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x187adc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x187adcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x187ae0: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187AE0u;
    SET_GPR_U32(ctx, 31, 0x187AE8u);
    ctx->pc = 0x187AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AE0u;
            // 0x187ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AE8u; }
        if (ctx->pc != 0x187AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AE8u; }
        if (ctx->pc != 0x187AE8u) { return; }
    }
    ctx->pc = 0x187AE8u;
label_187ae8:
    // 0x187ae8: 0x1000033f  b           . + 4 + (0x33F << 2)
    ctx->pc = 0x187AE8u;
    {
        const bool branch_taken_0x187ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ae8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187AF0u;
label_187af0:
    // 0x187af0: 0xc5282a  slt         $a1, $a2, $a1
    ctx->pc = 0x187af0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x187af4: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187AF4u;
    SET_GPR_U32(ctx, 31, 0x187AFCu);
    ctx->pc = 0x187AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AF4u;
            // 0x187af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AFCu; }
        if (ctx->pc != 0x187AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AFCu; }
        if (ctx->pc != 0x187AFCu) { return; }
    }
    ctx->pc = 0x187AFCu;
label_187afc:
    // 0x187afc: 0x1000033a  b           . + 4 + (0x33A << 2)
    ctx->pc = 0x187AFCu;
    {
        const bool branch_taken_0x187afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187afc) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187B04u;
label_187b04:
    // 0x187b04: 0x0  nop
    ctx->pc = 0x187b04u;
    // NOP
    // 0x187b08: 0xa6282a  slt         $a1, $a1, $a2
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x187b0c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x187b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x187b10: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187B10u;
    SET_GPR_U32(ctx, 31, 0x187B18u);
    ctx->pc = 0x187B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B10u;
            // 0x187b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B18u; }
        if (ctx->pc != 0x187B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B18u; }
        if (ctx->pc != 0x187B18u) { return; }
    }
    ctx->pc = 0x187B18u;
label_187b18:
    // 0x187b18: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x187B18u;
    {
        const bool branch_taken_0x187b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b18) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187B20u;
label_187b20:
    // 0x187b20: 0xa6282a  slt         $a1, $a1, $a2
    ctx->pc = 0x187b20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x187b24: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187B24u;
    SET_GPR_U32(ctx, 31, 0x187B2Cu);
    ctx->pc = 0x187B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B24u;
            // 0x187b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B2Cu; }
        if (ctx->pc != 0x187B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B2Cu; }
        if (ctx->pc != 0x187B2Cu) { return; }
    }
    ctx->pc = 0x187B2Cu;
label_187b2c:
    // 0x187b2c: 0x1000032e  b           . + 4 + (0x32E << 2)
    ctx->pc = 0x187B2Cu;
    {
        const bool branch_taken_0x187b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b2c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187B34u;
label_187b34:
    // 0x187b34: 0x0  nop
    ctx->pc = 0x187b34u;
    // NOP
    // 0x187b38: 0xc5282a  slt         $a1, $a2, $a1
    ctx->pc = 0x187b38u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x187b3c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x187b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x187b40: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187B40u;
    SET_GPR_U32(ctx, 31, 0x187B48u);
    ctx->pc = 0x187B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B40u;
            // 0x187b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B48u; }
        if (ctx->pc != 0x187B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B48u; }
        if (ctx->pc != 0x187B48u) { return; }
    }
    ctx->pc = 0x187B48u;
label_187b48:
    // 0x187b48: 0x10000327  b           . + 4 + (0x327 << 2)
    ctx->pc = 0x187B48u;
    {
        const bool branch_taken_0x187b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b48) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187B50u;
label_187b50:
    // 0x187b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187b54: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187B54u;
    {
        const bool branch_taken_0x187b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187b54) {
            ctx->pc = 0x187B70u;
            goto label_187b70;
        }
    }
    ctx->pc = 0x187B5Cu;
    // 0x187b5c: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187B70u;
            goto label_187b70;
        }
    }
    ctx->pc = 0x187B64u;
    // 0x187b64: 0xc4d50000  lwc1        $f21, 0x0($a2)
    ctx->pc = 0x187b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x187b68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x187B68u;
    {
        const bool branch_taken_0x187b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B68u;
            // 0x187b6c: 0xc6540000  lwc1        $f20, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b68) {
            ctx->pc = 0x187BE0u;
            goto label_187be0;
        }
    }
    ctx->pc = 0x187B70u;
label_187b70:
    // 0x187b70: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187B70u;
    {
        const bool branch_taken_0x187b70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B70u;
            // 0x187b74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b70) {
            ctx->pc = 0x187B90u;
            goto label_187b90;
        }
    }
    ctx->pc = 0x187B78u;
    // 0x187b78: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B78u;
    {
        const bool branch_taken_0x187b78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x187b78) {
            ctx->pc = 0x187B90u;
            goto label_187b90;
        }
    }
    ctx->pc = 0x187B80u;
    // 0x187b80: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x187b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187b84: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x187b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187b88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x187B88u;
    {
        const bool branch_taken_0x187b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B88u;
            // 0x187b8c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b88) {
            ctx->pc = 0x187BE0u;
            goto label_187be0;
        }
    }
    ctx->pc = 0x187B90u;
label_187b90:
    // 0x187b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187b94: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187B94u;
    {
        const bool branch_taken_0x187b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187b94) {
            ctx->pc = 0x187BB4u;
            goto label_187bb4;
        }
    }
    ctx->pc = 0x187B9Cu;
    // 0x187b9c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B9Cu;
    {
        const bool branch_taken_0x187b9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b9c) {
            ctx->pc = 0x187BB4u;
            goto label_187bb4;
        }
    }
    ctx->pc = 0x187BA4u;
    // 0x187ba4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x187ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187ba8: 0xc4d50000  lwc1        $f21, 0x0($a2)
    ctx->pc = 0x187ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x187bac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187BACu;
    {
        const bool branch_taken_0x187bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BACu;
            // 0x187bb0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bac) {
            ctx->pc = 0x187BE0u;
            goto label_187be0;
        }
    }
    ctx->pc = 0x187BB4u;
label_187bb4:
    // 0x187bb4: 0x0  nop
    ctx->pc = 0x187bb4u;
    // NOP
    // 0x187bb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x187bbc: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x187bc0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x187bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x187bc4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x187bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187bc8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x187bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x187bcc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x187bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187bd0: 0xc049612  jal         func_125848
    ctx->pc = 0x187BD0u;
    SET_GPR_U32(ctx, 31, 0x187BD8u);
    ctx->pc = 0x187BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BD0u;
            // 0x187bd4: 0x24a54150  addiu       $a1, $a1, 0x4150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BD8u; }
        if (ctx->pc != 0x187BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BD8u; }
        if (ctx->pc != 0x187BD8u) { return; }
    }
    ctx->pc = 0x187BD8u;
label_187bd8:
    // 0x187bd8: 0xc04950e  jal         func_125438
    ctx->pc = 0x187BD8u;
    SET_GPR_U32(ctx, 31, 0x187BE0u);
    ctx->pc = 0x187BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BD8u;
            // 0x187bdc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BE0u; }
        if (ctx->pc != 0x187BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BE0u; }
        if (ctx->pc != 0x187BE0u) { return; }
    }
    ctx->pc = 0x187BE0u;
label_187be0:
    // 0x187be0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x187be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x187be4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187be8: 0x2063ffd8  addi        $v1, $v1, -0x28
    ctx->pc = 0x187be8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967256, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x187bec: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x187becu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x187bf0: 0x102002fd  beqz        $at, . + 4 + (0x2FD << 2)
    ctx->pc = 0x187BF0u;
    {
        const bool branch_taken_0x187bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BF0u;
            // 0x187bf4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bf0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187BF8u;
    // 0x187bf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187bfc: 0x248443f0  addiu       $a0, $a0, 0x43F0
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    // 0x187c00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187c04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187c08: 0x600008  jr          $v1
    ctx->pc = 0x187C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187C10u: goto label_187c10;
            case 0x187C38u: goto label_187c38;
            case 0x187C60u: goto label_187c60;
            case 0x187C88u: goto label_187c88;
            case 0x187CB0u: goto label_187cb0;
            case 0x187CD8u: goto label_187cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187C10u;
label_187c10:
    // 0x187c10: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x187c10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187c14: 0x0  nop
    ctx->pc = 0x187c14u;
    // NOP
    // 0x187c18: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x187C18u;
    {
        const bool branch_taken_0x187c18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C18u;
            // 0x187c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c18) {
            ctx->pc = 0x187C24u;
            goto label_187c24;
        }
    }
    ctx->pc = 0x187C20u;
    // 0x187c20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c24:
    // 0x187c24: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x187c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187c28: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187C28u;
    SET_GPR_U32(ctx, 31, 0x187C30u);
    ctx->pc = 0x187C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C28u;
            // 0x187c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C30u; }
        if (ctx->pc != 0x187C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C30u; }
        if (ctx->pc != 0x187C30u) { return; }
    }
    ctx->pc = 0x187C30u;
label_187c30:
    // 0x187c30: 0x100002ed  b           . + 4 + (0x2ED << 2)
    ctx->pc = 0x187C30u;
    {
        const bool branch_taken_0x187c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c30) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187C38u;
label_187c38:
    // 0x187c38: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x187c38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187c3c: 0x0  nop
    ctx->pc = 0x187c3cu;
    // NOP
    // 0x187c40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x187C40u;
    {
        const bool branch_taken_0x187c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C40u;
            // 0x187c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c40) {
            ctx->pc = 0x187C4Cu;
            goto label_187c4c;
        }
    }
    ctx->pc = 0x187C48u;
    // 0x187c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c4c:
    // 0x187c4c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x187c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187c50: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187C50u;
    SET_GPR_U32(ctx, 31, 0x187C58u);
    ctx->pc = 0x187C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C50u;
            // 0x187c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C58u; }
        if (ctx->pc != 0x187C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C58u; }
        if (ctx->pc != 0x187C58u) { return; }
    }
    ctx->pc = 0x187C58u;
label_187c58:
    // 0x187c58: 0x100002e3  b           . + 4 + (0x2E3 << 2)
    ctx->pc = 0x187C58u;
    {
        const bool branch_taken_0x187c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c58) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187C60u;
label_187c60:
    // 0x187c60: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x187c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187c64: 0x0  nop
    ctx->pc = 0x187c64u;
    // NOP
    // 0x187c68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x187C68u;
    {
        const bool branch_taken_0x187c68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C68u;
            // 0x187c6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c68) {
            ctx->pc = 0x187C74u;
            goto label_187c74;
        }
    }
    ctx->pc = 0x187C70u;
    // 0x187c70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c74:
    // 0x187c74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x187c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187c78: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187C78u;
    SET_GPR_U32(ctx, 31, 0x187C80u);
    ctx->pc = 0x187C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C78u;
            // 0x187c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C80u; }
        if (ctx->pc != 0x187C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C80u; }
        if (ctx->pc != 0x187C80u) { return; }
    }
    ctx->pc = 0x187C80u;
label_187c80:
    // 0x187c80: 0x100002d9  b           . + 4 + (0x2D9 << 2)
    ctx->pc = 0x187C80u;
    {
        const bool branch_taken_0x187c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c80) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187C88u;
label_187c88:
    // 0x187c88: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x187c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187c8c: 0x0  nop
    ctx->pc = 0x187c8cu;
    // NOP
    // 0x187c90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x187C90u;
    {
        const bool branch_taken_0x187c90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C90u;
            // 0x187c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c90) {
            ctx->pc = 0x187C9Cu;
            goto label_187c9c;
        }
    }
    ctx->pc = 0x187C98u;
    // 0x187c98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c9c:
    // 0x187c9c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x187c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187ca0: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187CA0u;
    SET_GPR_U32(ctx, 31, 0x187CA8u);
    ctx->pc = 0x187CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CA0u;
            // 0x187ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CA8u; }
        if (ctx->pc != 0x187CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CA8u; }
        if (ctx->pc != 0x187CA8u) { return; }
    }
    ctx->pc = 0x187CA8u;
label_187ca8:
    // 0x187ca8: 0x100002cf  b           . + 4 + (0x2CF << 2)
    ctx->pc = 0x187CA8u;
    {
        const bool branch_taken_0x187ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ca8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187CB0u;
label_187cb0:
    // 0x187cb0: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x187cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187cb4: 0x0  nop
    ctx->pc = 0x187cb4u;
    // NOP
    // 0x187cb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x187CB8u;
    {
        const bool branch_taken_0x187cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187CB8u;
            // 0x187cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cb8) {
            ctx->pc = 0x187CC4u;
            goto label_187cc4;
        }
    }
    ctx->pc = 0x187CC0u;
    // 0x187cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187cc4:
    // 0x187cc4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x187cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187cc8: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187CC8u;
    SET_GPR_U32(ctx, 31, 0x187CD0u);
    ctx->pc = 0x187CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CC8u;
            // 0x187ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CD0u; }
        if (ctx->pc != 0x187CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CD0u; }
        if (ctx->pc != 0x187CD0u) { return; }
    }
    ctx->pc = 0x187CD0u;
label_187cd0:
    // 0x187cd0: 0x100002c5  b           . + 4 + (0x2C5 << 2)
    ctx->pc = 0x187CD0u;
    {
        const bool branch_taken_0x187cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187cd0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187CD8u;
label_187cd8:
    // 0x187cd8: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x187cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187cdc: 0x0  nop
    ctx->pc = 0x187cdcu;
    // NOP
    // 0x187ce0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x187CE0u;
    {
        const bool branch_taken_0x187ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187CE0u;
            // 0x187ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ce0) {
            ctx->pc = 0x187CECu;
            goto label_187cec;
        }
    }
    ctx->pc = 0x187CE8u;
    // 0x187ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187cec:
    // 0x187cec: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x187cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187cf0: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187CF0u;
    SET_GPR_U32(ctx, 31, 0x187CF8u);
    ctx->pc = 0x187CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CF0u;
            // 0x187cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CF8u; }
        if (ctx->pc != 0x187CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CF8u; }
        if (ctx->pc != 0x187CF8u) { return; }
    }
    ctx->pc = 0x187CF8u;
label_187cf8:
    // 0x187cf8: 0x100002bb  b           . + 4 + (0x2BB << 2)
    ctx->pc = 0x187CF8u;
    {
        const bool branch_taken_0x187cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187cf8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187D00u;
label_187d00:
    // 0x187d00: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x187d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x187d04: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187D04u;
    SET_GPR_U32(ctx, 31, 0x187D0Cu);
    ctx->pc = 0x187D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D04u;
            // 0x187d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D0Cu; }
        if (ctx->pc != 0x187D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D0Cu; }
        if (ctx->pc != 0x187D0Cu) { return; }
    }
    ctx->pc = 0x187D0Cu;
label_187d0c:
    // 0x187d0c: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x187d10: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x187d14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187d18: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x187d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x187d1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x187d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d24: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187D24u;
    SET_GPR_U32(ctx, 31, 0x187D2Cu);
    ctx->pc = 0x187D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D24u;
            // 0x187d28: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D2Cu; }
        if (ctx->pc != 0x187D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D2Cu; }
        if (ctx->pc != 0x187D2Cu) { return; }
    }
    ctx->pc = 0x187D2Cu;
label_187d2c:
    // 0x187d2c: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x187d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x187d30: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x187d34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187d38: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x187d3c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187D3Cu;
    {
        const bool branch_taken_0x187d3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D3Cu;
            // 0x187d40: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d3c) {
            ctx->pc = 0x187D68u;
            goto label_187d68;
        }
    }
    ctx->pc = 0x187D44u;
    // 0x187d44: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x187D44u;
    {
        const bool branch_taken_0x187d44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d44) {
            ctx->pc = 0x187D68u;
            goto label_187d68;
        }
    }
    ctx->pc = 0x187D4Cu;
    // 0x187d4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187d58: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187D58u;
    SET_GPR_U32(ctx, 31, 0x187D60u);
    ctx->pc = 0x187D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D58u;
            // 0x187d5c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D60u; }
        if (ctx->pc != 0x187D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D60u; }
        if (ctx->pc != 0x187D60u) { return; }
    }
    ctx->pc = 0x187D60u;
label_187d60:
    // 0x187d60: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x187D60u;
    {
        const bool branch_taken_0x187d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d60) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187D68u;
label_187d68:
    // 0x187d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187d6c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187D6Cu;
    {
        const bool branch_taken_0x187d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187d6c) {
            ctx->pc = 0x187D98u;
            goto label_187d98;
        }
    }
    ctx->pc = 0x187D74u;
    // 0x187d74: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187D74u;
    {
        const bool branch_taken_0x187d74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x187d74) {
            ctx->pc = 0x187D98u;
            goto label_187d98;
        }
    }
    ctx->pc = 0x187D7Cu;
    // 0x187d7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d84: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187d88: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187D88u;
    SET_GPR_U32(ctx, 31, 0x187D90u);
    ctx->pc = 0x187D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D88u;
            // 0x187d8c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D90u; }
        if (ctx->pc != 0x187D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D90u; }
        if (ctx->pc != 0x187D90u) { return; }
    }
    ctx->pc = 0x187D90u;
label_187d90:
    // 0x187d90: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x187D90u;
    {
        const bool branch_taken_0x187d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d90) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187D98u;
label_187d98:
    // 0x187d98: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187D98u;
    {
        const bool branch_taken_0x187d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D98u;
            // 0x187d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d98) {
            ctx->pc = 0x187DC8u;
            goto label_187dc8;
        }
    }
    ctx->pc = 0x187DA0u;
    // 0x187da0: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187DA0u;
    {
        const bool branch_taken_0x187da0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x187da0) {
            ctx->pc = 0x187DC8u;
            goto label_187dc8;
        }
    }
    ctx->pc = 0x187DA8u;
    // 0x187da8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187db0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187db4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x187db8: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187DB8u;
    SET_GPR_U32(ctx, 31, 0x187DC0u);
    ctx->pc = 0x187DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187DB8u;
            // 0x187dbc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DC0u; }
        if (ctx->pc != 0x187DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DC0u; }
        if (ctx->pc != 0x187DC0u) { return; }
    }
    ctx->pc = 0x187DC0u;
label_187dc0:
    // 0x187dc0: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x187DC0u;
    {
        const bool branch_taken_0x187dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187dc0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187DC8u;
label_187dc8:
    // 0x187dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187dcc: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x187DCCu;
    {
        const bool branch_taken_0x187dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187dcc) {
            ctx->pc = 0x187DFCu;
            goto label_187dfc;
        }
    }
    ctx->pc = 0x187DD4u;
    // 0x187dd4: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x187DD4u;
    {
        const bool branch_taken_0x187dd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x187dd4) {
            ctx->pc = 0x187DFCu;
            goto label_187dfc;
        }
    }
    ctx->pc = 0x187DDCu;
    // 0x187ddc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187de4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187de8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x187de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x187dec: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187DECu;
    SET_GPR_U32(ctx, 31, 0x187DF4u);
    ctx->pc = 0x187DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187DECu;
            // 0x187df0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DF4u; }
        if (ctx->pc != 0x187DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DF4u; }
        if (ctx->pc != 0x187DF4u) { return; }
    }
    ctx->pc = 0x187DF4u;
label_187df4:
    // 0x187df4: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x187DF4u;
    {
        const bool branch_taken_0x187df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187df4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187DFCu;
label_187dfc:
    // 0x187dfc: 0x0  nop
    ctx->pc = 0x187dfcu;
    // NOP
    // 0x187e00: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x187e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x187e04: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x187e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x187e08: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x187e0c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187e10: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x187e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x187e14: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x187e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187e18: 0xc049612  jal         func_125848
    ctx->pc = 0x187E18u;
    SET_GPR_U32(ctx, 31, 0x187E20u);
    ctx->pc = 0x187E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E18u;
            // 0x187e1c: 0x24a54190  addiu       $a1, $a1, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E20u; }
        if (ctx->pc != 0x187E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E20u; }
        if (ctx->pc != 0x187E20u) { return; }
    }
    ctx->pc = 0x187E20u;
label_187e20:
    // 0x187e20: 0xc04950e  jal         func_125438
    ctx->pc = 0x187E20u;
    SET_GPR_U32(ctx, 31, 0x187E28u);
    ctx->pc = 0x187E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E20u;
            // 0x187e24: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E28u; }
        if (ctx->pc != 0x187E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E28u; }
        if (ctx->pc != 0x187E28u) { return; }
    }
    ctx->pc = 0x187E28u;
label_187e28:
    // 0x187e28: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x187E28u;
    {
        const bool branch_taken_0x187e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e28) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187E30u;
label_187e30:
    // 0x187e30: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x187e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x187e34: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187E34u;
    SET_GPR_U32(ctx, 31, 0x187E3Cu);
    ctx->pc = 0x187E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E34u;
            // 0x187e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E3Cu; }
        if (ctx->pc != 0x187E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E3Cu; }
        if (ctx->pc != 0x187E3Cu) { return; }
    }
    ctx->pc = 0x187E3Cu;
label_187e3c:
    // 0x187e3c: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x187e40: 0x8fb200f8  lw          $s2, 0xF8($sp)
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x187e44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187e48: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x187e4c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x187e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x187e50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e54: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187E54u;
    SET_GPR_U32(ctx, 31, 0x187E5Cu);
    ctx->pc = 0x187E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E54u;
            // 0x187e58: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E5Cu; }
        if (ctx->pc != 0x187E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E5Cu; }
        if (ctx->pc != 0x187E5Cu) { return; }
    }
    ctx->pc = 0x187E5Cu;
label_187e5c:
    // 0x187e5c: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x187e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x187e60: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x187e64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187e68: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x187e6c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187E6Cu;
    {
        const bool branch_taken_0x187e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187E6Cu;
            // 0x187e70: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e6c) {
            ctx->pc = 0x187E98u;
            goto label_187e98;
        }
    }
    ctx->pc = 0x187E74u;
    // 0x187e74: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x187E74u;
    {
        const bool branch_taken_0x187e74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x187e74) {
            ctx->pc = 0x187E98u;
            goto label_187e98;
        }
    }
    ctx->pc = 0x187E7Cu;
    // 0x187e7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187e88: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187E88u;
    SET_GPR_U32(ctx, 31, 0x187E90u);
    ctx->pc = 0x187E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E88u;
            // 0x187e8c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E90u; }
        if (ctx->pc != 0x187E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E90u; }
        if (ctx->pc != 0x187E90u) { return; }
    }
    ctx->pc = 0x187E90u;
label_187e90:
    // 0x187e90: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x187E90u;
    {
        const bool branch_taken_0x187e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e90) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187E98u;
label_187e98:
    // 0x187e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187e9c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187E9Cu;
    {
        const bool branch_taken_0x187e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187e9c) {
            ctx->pc = 0x187EC8u;
            goto label_187ec8;
        }
    }
    ctx->pc = 0x187EA4u;
    // 0x187ea4: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187EA4u;
    {
        const bool branch_taken_0x187ea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x187ea4) {
            ctx->pc = 0x187EC8u;
            goto label_187ec8;
        }
    }
    ctx->pc = 0x187EACu;
    // 0x187eac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187eb4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187eb8: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187EB8u;
    SET_GPR_U32(ctx, 31, 0x187EC0u);
    ctx->pc = 0x187EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EB8u;
            // 0x187ebc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EC0u; }
        if (ctx->pc != 0x187EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EC0u; }
        if (ctx->pc != 0x187EC0u) { return; }
    }
    ctx->pc = 0x187EC0u;
label_187ec0:
    // 0x187ec0: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x187EC0u;
    {
        const bool branch_taken_0x187ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ec0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187EC8u;
label_187ec8:
    // 0x187ec8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187EC8u;
    {
        const bool branch_taken_0x187ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187EC8u;
            // 0x187ecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ec8) {
            ctx->pc = 0x187EF8u;
            goto label_187ef8;
        }
    }
    ctx->pc = 0x187ED0u;
    // 0x187ed0: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187ED0u;
    {
        const bool branch_taken_0x187ed0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x187ed0) {
            ctx->pc = 0x187EF8u;
            goto label_187ef8;
        }
    }
    ctx->pc = 0x187ED8u;
    // 0x187ed8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ee0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187ee4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x187ee8: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187EE8u;
    SET_GPR_U32(ctx, 31, 0x187EF0u);
    ctx->pc = 0x187EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EE8u;
            // 0x187eec: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EF0u; }
        if (ctx->pc != 0x187EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EF0u; }
        if (ctx->pc != 0x187EF0u) { return; }
    }
    ctx->pc = 0x187EF0u;
label_187ef0:
    // 0x187ef0: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x187EF0u;
    {
        const bool branch_taken_0x187ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ef0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187EF8u;
label_187ef8:
    // 0x187ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187efc: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x187EFCu;
    {
        const bool branch_taken_0x187efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187efc) {
            ctx->pc = 0x187F2Cu;
            goto label_187f2c;
        }
    }
    ctx->pc = 0x187F04u;
    // 0x187f04: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x187F04u;
    {
        const bool branch_taken_0x187f04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f04) {
            ctx->pc = 0x187F2Cu;
            goto label_187f2c;
        }
    }
    ctx->pc = 0x187F0Cu;
    // 0x187f0c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f14: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x187f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x187f1c: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187F1Cu;
    SET_GPR_U32(ctx, 31, 0x187F24u);
    ctx->pc = 0x187F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F1Cu;
            // 0x187f20: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F24u; }
        if (ctx->pc != 0x187F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F24u; }
        if (ctx->pc != 0x187F24u) { return; }
    }
    ctx->pc = 0x187F24u;
label_187f24:
    // 0x187f24: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x187F24u;
    {
        const bool branch_taken_0x187f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f24) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187F2Cu;
label_187f2c:
    // 0x187f2c: 0x0  nop
    ctx->pc = 0x187f2cu;
    // NOP
    // 0x187f30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x187f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x187f34: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x187f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x187f38: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x187f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x187f3c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x187f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x187f40: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x187f44: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x187f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x187f48: 0xc049612  jal         func_125848
    ctx->pc = 0x187F48u;
    SET_GPR_U32(ctx, 31, 0x187F50u);
    ctx->pc = 0x187F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F48u;
            // 0x187f4c: 0x24a541d0  addiu       $a1, $a1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F50u; }
        if (ctx->pc != 0x187F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F50u; }
        if (ctx->pc != 0x187F50u) { return; }
    }
    ctx->pc = 0x187F50u;
label_187f50:
    // 0x187f50: 0xc04950e  jal         func_125438
    ctx->pc = 0x187F50u;
    SET_GPR_U32(ctx, 31, 0x187F58u);
    ctx->pc = 0x187F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F50u;
            // 0x187f54: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F58u; }
        if (ctx->pc != 0x187F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F58u; }
        if (ctx->pc != 0x187F58u) { return; }
    }
    ctx->pc = 0x187F58u;
label_187f58:
    // 0x187f58: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x187F58u;
    {
        const bool branch_taken_0x187f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f58) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187F60u;
label_187f60:
    // 0x187f60: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x187f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x187f64: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187F64u;
    SET_GPR_U32(ctx, 31, 0x187F6Cu);
    ctx->pc = 0x187F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F64u;
            // 0x187f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F6Cu; }
        if (ctx->pc != 0x187F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F6Cu; }
        if (ctx->pc != 0x187F6Cu) { return; }
    }
    ctx->pc = 0x187F6Cu;
label_187f6c:
    // 0x187f6c: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x187f70: 0x8fb20108  lw          $s2, 0x108($sp)
    ctx->pc = 0x187f70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x187f74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187f78: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x187f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x187f7c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x187f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f84: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x187F84u;
    SET_GPR_U32(ctx, 31, 0x187F8Cu);
    ctx->pc = 0x187F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F84u;
            // 0x187f88: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F8Cu; }
        if (ctx->pc != 0x187F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F8Cu; }
        if (ctx->pc != 0x187F8Cu) { return; }
    }
    ctx->pc = 0x187F8Cu;
label_187f8c:
    // 0x187f8c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x187f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x187f90: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x187f94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x187f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187f98: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x187f9c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187F9Cu;
    {
        const bool branch_taken_0x187f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F9Cu;
            // 0x187fa0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f9c) {
            ctx->pc = 0x187FC8u;
            goto label_187fc8;
        }
    }
    ctx->pc = 0x187FA4u;
    // 0x187fa4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x187FA4u;
    {
        const bool branch_taken_0x187fa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fa4) {
            ctx->pc = 0x187FC8u;
            goto label_187fc8;
        }
    }
    ctx->pc = 0x187FACu;
    // 0x187fac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187fb8: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x187FB8u;
    SET_GPR_U32(ctx, 31, 0x187FC0u);
    ctx->pc = 0x187FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FB8u;
            // 0x187fbc: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FC0u; }
        if (ctx->pc != 0x187FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FC0u; }
        if (ctx->pc != 0x187FC0u) { return; }
    }
    ctx->pc = 0x187FC0u;
label_187fc0:
    // 0x187fc0: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x187FC0u;
    {
        const bool branch_taken_0x187fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fc0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187FC8u;
label_187fc8:
    // 0x187fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187fcc: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187FCCu;
    {
        const bool branch_taken_0x187fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x187fcc) {
            ctx->pc = 0x187FF8u;
            goto label_187ff8;
        }
    }
    ctx->pc = 0x187FD4u;
    // 0x187fd4: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187FD4u;
    {
        const bool branch_taken_0x187fd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x187fd4) {
            ctx->pc = 0x187FF8u;
            goto label_187ff8;
        }
    }
    ctx->pc = 0x187FDCu;
    // 0x187fdc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x187fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fe4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x187fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187fe8: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x187FE8u;
    SET_GPR_U32(ctx, 31, 0x187FF0u);
    ctx->pc = 0x187FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FE8u;
            // 0x187fec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FF0u; }
        if (ctx->pc != 0x187FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FF0u; }
        if (ctx->pc != 0x187FF0u) { return; }
    }
    ctx->pc = 0x187FF0u;
label_187ff0:
    // 0x187ff0: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x187FF0u;
    {
        const bool branch_taken_0x187ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ff0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x187FF8u;
label_187ff8:
    // 0x187ff8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187FF8u;
    {
        const bool branch_taken_0x187ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187FF8u;
            // 0x187ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ff8) {
            ctx->pc = 0x188028u;
            goto label_188028;
        }
    }
    ctx->pc = 0x188000u;
    // 0x188000: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x188000) {
            ctx->pc = 0x188028u;
            goto label_188028;
        }
    }
    ctx->pc = 0x188008u;
    // 0x188008: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x188008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18800c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188010: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x188010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188014: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188018: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x188018u;
    SET_GPR_U32(ctx, 31, 0x188020u);
    ctx->pc = 0x18801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188018u;
            // 0x18801c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188020u; }
        if (ctx->pc != 0x188020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188020u; }
        if (ctx->pc != 0x188020u) { return; }
    }
    ctx->pc = 0x188020u;
label_188020:
    // 0x188020: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x188020u;
    {
        const bool branch_taken_0x188020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188020) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188028u;
label_188028:
    // 0x188028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18802c: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18802Cu;
    {
        const bool branch_taken_0x18802c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18802c) {
            ctx->pc = 0x18805Cu;
            goto label_18805c;
        }
    }
    ctx->pc = 0x188034u;
    // 0x188034: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x188034u;
    {
        const bool branch_taken_0x188034 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x188034) {
            ctx->pc = 0x18805Cu;
            goto label_18805c;
        }
    }
    ctx->pc = 0x18803Cu;
    // 0x18803c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x18803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188044: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x188044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188048: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18804c: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x18804Cu;
    SET_GPR_U32(ctx, 31, 0x188054u);
    ctx->pc = 0x188050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18804Cu;
            // 0x188050: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188054u; }
        if (ctx->pc != 0x188054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188054u; }
        if (ctx->pc != 0x188054u) { return; }
    }
    ctx->pc = 0x188054u;
label_188054:
    // 0x188054: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x188054u;
    {
        const bool branch_taken_0x188054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188054) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18805Cu;
label_18805c:
    // 0x18805c: 0x0  nop
    ctx->pc = 0x18805cu;
    // NOP
    // 0x188060: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x188064: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x188064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x188068: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x188068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18806c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x18806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188070: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x188070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x188074: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x188074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x188078: 0xc049612  jal         func_125848
    ctx->pc = 0x188078u;
    SET_GPR_U32(ctx, 31, 0x188080u);
    ctx->pc = 0x18807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188078u;
            // 0x18807c: 0x24a54210  addiu       $a1, $a1, 0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188080u; }
        if (ctx->pc != 0x188080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188080u; }
        if (ctx->pc != 0x188080u) { return; }
    }
    ctx->pc = 0x188080u;
label_188080:
    // 0x188080: 0xc04950e  jal         func_125438
    ctx->pc = 0x188080u;
    SET_GPR_U32(ctx, 31, 0x188088u);
    ctx->pc = 0x188084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188080u;
            // 0x188084: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188088u; }
        if (ctx->pc != 0x188088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188088u; }
        if (ctx->pc != 0x188088u) { return; }
    }
    ctx->pc = 0x188088u;
label_188088:
    // 0x188088: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x188088u;
    {
        const bool branch_taken_0x188088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188088) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188090u;
label_188090:
    // 0x188090: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x188090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x188094: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x188094u;
    SET_GPR_U32(ctx, 31, 0x18809Cu);
    ctx->pc = 0x188098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188094u;
            // 0x188098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18809Cu; }
        if (ctx->pc != 0x18809Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18809Cu; }
        if (ctx->pc != 0x18809Cu) { return; }
    }
    ctx->pc = 0x18809Cu;
label_18809c:
    // 0x18809c: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x18809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1880a0: 0x8fb30118  lw          $s3, 0x118($sp)
    ctx->pc = 0x1880a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1880a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1880a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880a8: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x1880a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1880ac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1880acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1880b0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1880b4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1880B4u;
    {
        const bool branch_taken_0x1880b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880b4) {
            ctx->pc = 0x1880C4u;
            goto label_1880c4;
        }
    }
    ctx->pc = 0x1880BCu;
    // 0x1880bc: 0xc061af4  jal         func_186BD0
    ctx->pc = 0x1880BCu;
    SET_GPR_U32(ctx, 31, 0x1880C4u);
    ctx->pc = 0x186BD0u;
    if (runtime->hasFunction(0x186BD0u)) {
        auto targetFn = runtime->lookupFunction(0x186BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880C4u; }
        if (ctx->pc != 0x1880C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        divby0error__Fv_0x186bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880C4u; }
        if (ctx->pc != 0x1880C4u) { return; }
    }
    ctx->pc = 0x1880C4u;
label_1880c4:
    // 0x1880c4: 0x0  nop
    ctx->pc = 0x1880c4u;
    // NOP
    // 0x1880c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1880c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1880cc: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1880CCu;
    SET_GPR_U32(ctx, 31, 0x1880D4u);
    ctx->pc = 0x1880D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880CCu;
            // 0x1880d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880D4u; }
        if (ctx->pc != 0x1880D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880D4u; }
        if (ctx->pc != 0x1880D4u) { return; }
    }
    ctx->pc = 0x1880D4u;
label_1880d4:
    // 0x1880d4: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x1880d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x1880d8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1880dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1880dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880e0: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x1880e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1880e4: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1880E4u;
    {
        const bool branch_taken_0x1880e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1880E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1880E4u;
            // 0x1880e8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880e4) {
            ctx->pc = 0x188118u;
            goto label_188118;
        }
    }
    ctx->pc = 0x1880ECu;
    // 0x1880ec: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1880ECu;
    {
        const bool branch_taken_0x1880ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880ec) {
            ctx->pc = 0x188118u;
            goto label_188118;
        }
    }
    ctx->pc = 0x1880F4u;
    // 0x1880f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1880f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1880f8: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1880F8u;
    {
        const bool branch_taken_0x1880f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1880F8u;
            // 0x1880fc: 0x52001a  div         $zero, $v0, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f8) {
            ctx->pc = 0x188104u;
            goto label_188104;
        }
    }
    ctx->pc = 0x188100u;
    // 0x188100: 0x1cd  break       0, 7
    ctx->pc = 0x188100u;
    runtime->handleBreak(rdram, ctx);
label_188104:
    // 0x188104: 0x2812  mflo        $a1
    ctx->pc = 0x188104u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x188108: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x188108u;
    SET_GPR_U32(ctx, 31, 0x188110u);
    ctx->pc = 0x18810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188108u;
            // 0x18810c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188110u; }
        if (ctx->pc != 0x188110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188110u; }
        if (ctx->pc != 0x188110u) { return; }
    }
    ctx->pc = 0x188110u;
label_188110:
    // 0x188110: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x188110u;
    {
        const bool branch_taken_0x188110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188110) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188118u;
label_188118:
    // 0x188118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18811c: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18811Cu;
    {
        const bool branch_taken_0x18811c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18811c) {
            ctx->pc = 0x188154u;
            goto label_188154;
        }
    }
    ctx->pc = 0x188124u;
    // 0x188124: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x188124u;
    {
        const bool branch_taken_0x188124 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x188124) {
            ctx->pc = 0x188154u;
            goto label_188154;
        }
    }
    ctx->pc = 0x18812Cu;
    // 0x18812c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x18812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188134: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x188134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188138: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x188138u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18813c: 0x0  nop
    ctx->pc = 0x18813cu;
    // NOP
    // 0x188140: 0x0  nop
    ctx->pc = 0x188140u;
    // NOP
    // 0x188144: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x188144u;
    SET_GPR_U32(ctx, 31, 0x18814Cu);
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18814Cu; }
        if (ctx->pc != 0x18814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18814Cu; }
        if (ctx->pc != 0x18814Cu) { return; }
    }
    ctx->pc = 0x18814Cu;
label_18814c:
    // 0x18814c: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x18814Cu;
    {
        const bool branch_taken_0x18814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18814c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188154u;
label_188154:
    // 0x188154: 0x0  nop
    ctx->pc = 0x188154u;
    // NOP
    // 0x188158: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x188158u;
    {
        const bool branch_taken_0x188158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188158u;
            // 0x18815c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188158) {
            ctx->pc = 0x188194u;
            goto label_188194;
        }
    }
    ctx->pc = 0x188160u;
    // 0x188160: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x188160u;
    {
        const bool branch_taken_0x188160 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x188160) {
            ctx->pc = 0x188194u;
            goto label_188194;
        }
    }
    ctx->pc = 0x188168u;
    // 0x188168: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x188168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18816c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188170: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x188170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188174: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188178: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x188178u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18817c: 0x0  nop
    ctx->pc = 0x18817cu;
    // NOP
    // 0x188180: 0x0  nop
    ctx->pc = 0x188180u;
    // NOP
    // 0x188184: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x188184u;
    SET_GPR_U32(ctx, 31, 0x18818Cu);
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18818Cu; }
        if (ctx->pc != 0x18818Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18818Cu; }
        if (ctx->pc != 0x18818Cu) { return; }
    }
    ctx->pc = 0x18818Cu;
label_18818c:
    // 0x18818c: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x18818Cu;
    {
        const bool branch_taken_0x18818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18818c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188194u;
label_188194:
    // 0x188194: 0x0  nop
    ctx->pc = 0x188194u;
    // NOP
    // 0x188198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18819c: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18819Cu;
    {
        const bool branch_taken_0x18819c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18819c) {
            ctx->pc = 0x1881D8u;
            goto label_1881d8;
        }
    }
    ctx->pc = 0x1881A4u;
    // 0x1881a4: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1881A4u;
    {
        const bool branch_taken_0x1881a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1881a4) {
            ctx->pc = 0x1881D8u;
            goto label_1881d8;
        }
    }
    ctx->pc = 0x1881ACu;
    // 0x1881ac: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1881acu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1881b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1881b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1881b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1881b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1881b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1881bc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1881bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1881c0: 0x0  nop
    ctx->pc = 0x1881c0u;
    // NOP
    // 0x1881c4: 0x0  nop
    ctx->pc = 0x1881c4u;
    // NOP
    // 0x1881c8: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x1881C8u;
    SET_GPR_U32(ctx, 31, 0x1881D0u);
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881D0u; }
        if (ctx->pc != 0x1881D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881D0u; }
        if (ctx->pc != 0x1881D0u) { return; }
    }
    ctx->pc = 0x1881D0u;
label_1881d0:
    // 0x1881d0: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x1881D0u;
    {
        const bool branch_taken_0x1881d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1881d0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1881D8u;
label_1881d8:
    // 0x1881d8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1881dc: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x1881e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1881e4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1881e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1881e8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1881e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1881ec: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1881ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1881f0: 0xc049612  jal         func_125848
    ctx->pc = 0x1881F0u;
    SET_GPR_U32(ctx, 31, 0x1881F8u);
    ctx->pc = 0x1881F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881F0u;
            // 0x1881f4: 0x24a54240  addiu       $a1, $a1, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881F8u; }
        if (ctx->pc != 0x1881F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881F8u; }
        if (ctx->pc != 0x1881F8u) { return; }
    }
    ctx->pc = 0x1881F8u;
label_1881f8:
    // 0x1881f8: 0xc04950e  jal         func_125438
    ctx->pc = 0x1881F8u;
    SET_GPR_U32(ctx, 31, 0x188200u);
    ctx->pc = 0x1881FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881F8u;
            // 0x1881fc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188200u; }
        if (ctx->pc != 0x188200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188200u; }
        if (ctx->pc != 0x188200u) { return; }
    }
    ctx->pc = 0x188200u;
label_188200:
    // 0x188200: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x188200u;
    {
        const bool branch_taken_0x188200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188200) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188208u;
label_188208:
    // 0x188208: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x188208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x18820c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x18820Cu;
    SET_GPR_U32(ctx, 31, 0x188214u);
    ctx->pc = 0x188210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18820Cu;
            // 0x188210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188214u; }
        if (ctx->pc != 0x188214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188214u; }
        if (ctx->pc != 0x188214u) { return; }
    }
    ctx->pc = 0x188214u;
label_188214:
    // 0x188214: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x188214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188218: 0xc061acc  jal         func_186B30
    ctx->pc = 0x188218u;
    SET_GPR_U32(ctx, 31, 0x188220u);
    ctx->pc = 0x18821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188218u;
            // 0x18821c: 0xdfa40128  ld          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188220u; }
        if (ctx->pc != 0x188220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188220u; }
        if (ctx->pc != 0x188220u) { return; }
    }
    ctx->pc = 0x188220u;
label_188220:
    // 0x188220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x188220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188224: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188224u;
    {
        const bool branch_taken_0x188224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x188224) {
            ctx->pc = 0x188234u;
            goto label_188234;
        }
    }
    ctx->pc = 0x18822Cu;
    // 0x18822c: 0xc061af8  jal         func_186BE0
    ctx->pc = 0x18822Cu;
    SET_GPR_U32(ctx, 31, 0x188234u);
    ctx->pc = 0x186BE0u;
    if (runtime->hasFunction(0x186BE0u)) {
        auto targetFn = runtime->lookupFunction(0x186BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188234u; }
        if (ctx->pc != 0x188234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        modby0error__Fv_0x186be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188234u; }
        if (ctx->pc != 0x188234u) { return; }
    }
    ctx->pc = 0x188234u;
label_188234:
    // 0x188234: 0x0  nop
    ctx->pc = 0x188234u;
    // NOP
    // 0x188238: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x188238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x18823c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x18823Cu;
    SET_GPR_U32(ctx, 31, 0x188244u);
    ctx->pc = 0x188240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18823Cu;
            // 0x188240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188244u; }
        if (ctx->pc != 0x188244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188244u; }
        if (ctx->pc != 0x188244u) { return; }
    }
    ctx->pc = 0x188244u;
label_188244:
    // 0x188244: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x188244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188248: 0xc061acc  jal         func_186B30
    ctx->pc = 0x188248u;
    SET_GPR_U32(ctx, 31, 0x188250u);
    ctx->pc = 0x18824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188248u;
            // 0x18824c: 0xdfa40130  ld          $a0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188250u; }
        if (ctx->pc != 0x188250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188250u; }
        if (ctx->pc != 0x188250u) { return; }
    }
    ctx->pc = 0x188250u;
label_188250:
    // 0x188250: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188250u;
    {
        const bool branch_taken_0x188250 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x188254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188250u;
            // 0x188254: 0x51001a  div         $zero, $v0, $s1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188250) {
            ctx->pc = 0x18825Cu;
            goto label_18825c;
        }
    }
    ctx->pc = 0x188258u;
    // 0x188258: 0x1cd  break       0, 7
    ctx->pc = 0x188258u;
    runtime->handleBreak(rdram, ctx);
label_18825c:
    // 0x18825c: 0x2810  mfhi        $a1
    ctx->pc = 0x18825cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x188260: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x188260u;
    SET_GPR_U32(ctx, 31, 0x188268u);
    ctx->pc = 0x188264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188260u;
            // 0x188264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188268u; }
        if (ctx->pc != 0x188268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188268u; }
        if (ctx->pc != 0x188268u) { return; }
    }
    ctx->pc = 0x188268u;
label_188268:
    // 0x188268: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x188268u;
    {
        const bool branch_taken_0x188268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188268) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188270u;
label_188270:
    // 0x188270: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x188270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x188274: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x188274u;
    SET_GPR_U32(ctx, 31, 0x18827Cu);
    ctx->pc = 0x188278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188274u;
            // 0x188278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18827Cu; }
        if (ctx->pc != 0x18827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18827Cu; }
        if (ctx->pc != 0x18827Cu) { return; }
    }
    ctx->pc = 0x18827Cu;
label_18827c:
    // 0x18827c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188280: 0xc061acc  jal         func_186B30
    ctx->pc = 0x188280u;
    SET_GPR_U32(ctx, 31, 0x188288u);
    ctx->pc = 0x188284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188280u;
            // 0x188284: 0xdfa40138  ld          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188288u; }
        if (ctx->pc != 0x188288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188288u; }
        if (ctx->pc != 0x188288u) { return; }
    }
    ctx->pc = 0x188288u;
label_188288:
    // 0x188288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x188288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18828c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x18828cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x188290: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x188290u;
    SET_GPR_U32(ctx, 31, 0x188298u);
    ctx->pc = 0x188294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188290u;
            // 0x188294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188298u; }
        if (ctx->pc != 0x188298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188298u; }
        if (ctx->pc != 0x188298u) { return; }
    }
    ctx->pc = 0x188298u;
label_188298:
    // 0x188298: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x18829c: 0xc061acc  jal         func_186B30
    ctx->pc = 0x18829Cu;
    SET_GPR_U32(ctx, 31, 0x1882A4u);
    ctx->pc = 0x1882A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18829Cu;
            // 0x1882a0: 0xdfa40140  ld          $a0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882A4u; }
        if (ctx->pc != 0x1882A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882A4u; }
        if (ctx->pc != 0x1882A4u) { return; }
    }
    ctx->pc = 0x1882A4u;
label_1882a4:
    // 0x1882a4: 0x2222824  and         $a1, $s1, $v0
    ctx->pc = 0x1882a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1882a8: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x1882A8u;
    SET_GPR_U32(ctx, 31, 0x1882B0u);
    ctx->pc = 0x1882ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882A8u;
            // 0x1882ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882B0u; }
        if (ctx->pc != 0x1882B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882B0u; }
        if (ctx->pc != 0x1882B0u) { return; }
    }
    ctx->pc = 0x1882B0u;
label_1882b0:
    // 0x1882b0: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1882B0u;
    {
        const bool branch_taken_0x1882b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882b0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1882B8u;
label_1882b8:
    // 0x1882b8: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1882bc: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1882BCu;
    SET_GPR_U32(ctx, 31, 0x1882C4u);
    ctx->pc = 0x1882C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882BCu;
            // 0x1882c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882C4u; }
        if (ctx->pc != 0x1882C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882C4u; }
        if (ctx->pc != 0x1882C4u) { return; }
    }
    ctx->pc = 0x1882C4u;
label_1882c4:
    // 0x1882c4: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1882c8: 0xc061acc  jal         func_186B30
    ctx->pc = 0x1882C8u;
    SET_GPR_U32(ctx, 31, 0x1882D0u);
    ctx->pc = 0x1882CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882C8u;
            // 0x1882cc: 0xdfa40148  ld          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882D0u; }
        if (ctx->pc != 0x1882D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882D0u; }
        if (ctx->pc != 0x1882D0u) { return; }
    }
    ctx->pc = 0x1882D0u;
label_1882d0:
    // 0x1882d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1882d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882d4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1882d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1882d8: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1882D8u;
    SET_GPR_U32(ctx, 31, 0x1882E0u);
    ctx->pc = 0x1882DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882D8u;
            // 0x1882dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882E0u; }
        if (ctx->pc != 0x1882E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882E0u; }
        if (ctx->pc != 0x1882E0u) { return; }
    }
    ctx->pc = 0x1882E0u;
label_1882e0:
    // 0x1882e0: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1882e4: 0xc061acc  jal         func_186B30
    ctx->pc = 0x1882E4u;
    SET_GPR_U32(ctx, 31, 0x1882ECu);
    ctx->pc = 0x1882E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882E4u;
            // 0x1882e8: 0xdfa40150  ld          $a0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186B30u;
    if (runtime->hasFunction(0x186B30u)) {
        auto targetFn = runtime->lookupFunction(0x186B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882ECu; }
        if (ctx->pc != 0x1882ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_int__F12RS_STACKDATAP8funcdata_0x186b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882ECu; }
        if (ctx->pc != 0x1882ECu) { return; }
    }
    ctx->pc = 0x1882ECu;
label_1882ec:
    // 0x1882ec: 0x2222825  or          $a1, $s1, $v0
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1882f0: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x1882F0u;
    SET_GPR_U32(ctx, 31, 0x1882F8u);
    ctx->pc = 0x1882F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1882F0u;
            // 0x1882f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882F8u; }
        if (ctx->pc != 0x1882F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882F8u; }
        if (ctx->pc != 0x1882F8u) { return; }
    }
    ctx->pc = 0x1882F8u;
label_1882f8:
    // 0x1882f8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1882F8u;
    {
        const bool branch_taken_0x1882f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882f8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188300u;
label_188300:
    // 0x188300: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x188300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x188304: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x188304u;
    SET_GPR_U32(ctx, 31, 0x18830Cu);
    ctx->pc = 0x188308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188304u;
            // 0x188308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18830Cu; }
        if (ctx->pc != 0x18830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18830Cu; }
        if (ctx->pc != 0x18830Cu) { return; }
    }
    ctx->pc = 0x18830Cu;
label_18830c:
    // 0x18830c: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x188310: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x188310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x188314: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x188314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188318: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x18831c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18831Cu;
    {
        const bool branch_taken_0x18831c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x188320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18831Cu;
            // 0x188320: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18831c) {
            ctx->pc = 0x18833Cu;
            goto label_18833c;
        }
    }
    ctx->pc = 0x188324u;
    // 0x188324: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18832c: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x18832Cu;
    SET_GPR_U32(ctx, 31, 0x188334u);
    ctx->pc = 0x188330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18832Cu;
            // 0x188330: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188334u; }
        if (ctx->pc != 0x188334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188334u; }
        if (ctx->pc != 0x188334u) { return; }
    }
    ctx->pc = 0x188334u;
label_188334:
    // 0x188334: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x188334u;
    {
        const bool branch_taken_0x188334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188334) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18833Cu;
label_18833c:
    // 0x18833c: 0x0  nop
    ctx->pc = 0x18833cu;
    // NOP
    // 0x188340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188344: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188344u;
    {
        const bool branch_taken_0x188344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x188344) {
            ctx->pc = 0x188364u;
            goto label_188364;
        }
    }
    ctx->pc = 0x18834Cu;
    // 0x18834c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188354: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x188354u;
    SET_GPR_U32(ctx, 31, 0x18835Cu);
    ctx->pc = 0x188358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188354u;
            // 0x188358: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18835Cu; }
        if (ctx->pc != 0x18835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18835Cu; }
        if (ctx->pc != 0x18835Cu) { return; }
    }
    ctx->pc = 0x18835Cu;
label_18835c:
    // 0x18835c: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x18835Cu;
    {
        const bool branch_taken_0x18835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18835c) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188364u;
label_188364:
    // 0x188364: 0x0  nop
    ctx->pc = 0x188364u;
    // NOP
    // 0x188368: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x18836c: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x188370: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x188374: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188378: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18837c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x18837cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x188380: 0xc049612  jal         func_125848
    ctx->pc = 0x188380u;
    SET_GPR_U32(ctx, 31, 0x188388u);
    ctx->pc = 0x188384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188380u;
            // 0x188384: 0x24a54280  addiu       $a1, $a1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188388u; }
        if (ctx->pc != 0x188388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188388u; }
        if (ctx->pc != 0x188388u) { return; }
    }
    ctx->pc = 0x188388u;
label_188388:
    // 0x188388: 0xc04950e  jal         func_125438
    ctx->pc = 0x188388u;
    SET_GPR_U32(ctx, 31, 0x188390u);
    ctx->pc = 0x18838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188388u;
            // 0x18838c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188390u; }
        if (ctx->pc != 0x188390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188390u; }
        if (ctx->pc != 0x188390u) { return; }
    }
    ctx->pc = 0x188390u;
label_188390:
    // 0x188390: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x188390u;
    {
        const bool branch_taken_0x188390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188390) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188398u;
label_188398:
    // 0x188398: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x188398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x18839c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x18839Cu;
    SET_GPR_U32(ctx, 31, 0x1883A4u);
    ctx->pc = 0x1883A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18839Cu;
            // 0x1883a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A4u; }
        if (ctx->pc != 0x1883A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A4u; }
        if (ctx->pc != 0x1883A4u) { return; }
    }
    ctx->pc = 0x1883A4u;
label_1883a4:
    // 0x1883a4: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x1883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x1883a8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1883ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1883acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1883b0: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1883b4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1883B4u;
    {
        const bool branch_taken_0x1883b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883B4u;
            // 0x1883b8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883b4) {
            ctx->pc = 0x1883DCu;
            goto label_1883dc;
        }
    }
    ctx->pc = 0x1883BCu;
    // 0x1883bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1883bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1883c0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1883C0u;
    SET_GPR_U32(ctx, 31, 0x1883C8u);
    ctx->pc = 0x1883C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883C0u;
            // 0x1883c4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883C8u; }
        if (ctx->pc != 0x1883C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883C8u; }
        if (ctx->pc != 0x1883C8u) { return; }
    }
    ctx->pc = 0x1883C8u;
label_1883c8:
    // 0x1883c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1883c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1883cc: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x1883CCu;
    SET_GPR_U32(ctx, 31, 0x1883D4u);
    ctx->pc = 0x1883D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883CCu;
            // 0x1883d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883D4u; }
        if (ctx->pc != 0x1883D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883D4u; }
        if (ctx->pc != 0x1883D4u) { return; }
    }
    ctx->pc = 0x1883D4u;
label_1883d4:
    // 0x1883d4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x1883D4u;
    {
        const bool branch_taken_0x1883d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883d4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1883DCu;
label_1883dc:
    // 0x1883dc: 0x0  nop
    ctx->pc = 0x1883dcu;
    // NOP
    // 0x1883e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1883e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1883e4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1883E4u;
    {
        const bool branch_taken_0x1883e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1883e4) {
            ctx->pc = 0x188408u;
            goto label_188408;
        }
    }
    ctx->pc = 0x1883ECu;
    // 0x1883ec: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1883ECu;
    SET_GPR_U32(ctx, 31, 0x1883F4u);
    ctx->pc = 0x1883F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883ECu;
            // 0x1883f0: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883F4u; }
        if (ctx->pc != 0x1883F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883F4u; }
        if (ctx->pc != 0x1883F4u) { return; }
    }
    ctx->pc = 0x1883F4u;
label_1883f4:
    // 0x1883f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1883f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1883f8: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x1883F8u;
    SET_GPR_U32(ctx, 31, 0x188400u);
    ctx->pc = 0x1883FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883F8u;
            // 0x1883fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188400u; }
        if (ctx->pc != 0x188400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188400u; }
        if (ctx->pc != 0x188400u) { return; }
    }
    ctx->pc = 0x188400u;
label_188400:
    // 0x188400: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x188400u;
    {
        const bool branch_taken_0x188400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188400) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188408u;
label_188408:
    // 0x188408: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x18840c: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x188410: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x188414: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x188414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188418: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18841c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x18841cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x188420: 0xc049612  jal         func_125848
    ctx->pc = 0x188420u;
    SET_GPR_U32(ctx, 31, 0x188428u);
    ctx->pc = 0x188424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188420u;
            // 0x188424: 0x24a542c0  addiu       $a1, $a1, 0x42C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188428u; }
        if (ctx->pc != 0x188428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188428u; }
        if (ctx->pc != 0x188428u) { return; }
    }
    ctx->pc = 0x188428u;
label_188428:
    // 0x188428: 0xc04950e  jal         func_125438
    ctx->pc = 0x188428u;
    SET_GPR_U32(ctx, 31, 0x188430u);
    ctx->pc = 0x18842Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188428u;
            // 0x18842c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188430u; }
        if (ctx->pc != 0x188430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188430u; }
        if (ctx->pc != 0x188430u) { return; }
    }
    ctx->pc = 0x188430u;
label_188430:
    // 0x188430: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x188430u;
    {
        const bool branch_taken_0x188430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188430) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188438u;
label_188438:
    // 0x188438: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x18843c: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x18843Cu;
    SET_GPR_U32(ctx, 31, 0x188444u);
    ctx->pc = 0x188440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18843Cu;
            // 0x188440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188444u; }
        if (ctx->pc != 0x188444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188444u; }
        if (ctx->pc != 0x188444u) { return; }
    }
    ctx->pc = 0x188444u;
label_188444:
    // 0x188444: 0x27a2016c  addiu       $v0, $sp, 0x16C
    ctx->pc = 0x188444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x188448: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x188448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x18844c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188450: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x188450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x188454: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188454u;
    {
        const bool branch_taken_0x188454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x188458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188454u;
            // 0x188458: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188454) {
            ctx->pc = 0x18847Cu;
            goto label_18847c;
        }
    }
    ctx->pc = 0x18845Cu;
    // 0x18845c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188460: 0xc047964  jal         func_11E590
    ctx->pc = 0x188460u;
    SET_GPR_U32(ctx, 31, 0x188468u);
    ctx->pc = 0x188464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188460u;
            // 0x188464: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188468u; }
        if (ctx->pc != 0x188468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188468u; }
        if (ctx->pc != 0x188468u) { return; }
    }
    ctx->pc = 0x188468u;
label_188468:
    // 0x188468: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x188468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18846c: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x18846Cu;
    SET_GPR_U32(ctx, 31, 0x188474u);
    ctx->pc = 0x188470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18846Cu;
            // 0x188470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188474u; }
        if (ctx->pc != 0x188474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188474u; }
        if (ctx->pc != 0x188474u) { return; }
    }
    ctx->pc = 0x188474u;
label_188474:
    // 0x188474: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x188474u;
    {
        const bool branch_taken_0x188474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188474) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18847Cu;
label_18847c:
    // 0x18847c: 0x0  nop
    ctx->pc = 0x18847cu;
    // NOP
    // 0x188480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188484: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188484u;
    {
        const bool branch_taken_0x188484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x188484) {
            ctx->pc = 0x1884A8u;
            goto label_1884a8;
        }
    }
    ctx->pc = 0x18848Cu;
    // 0x18848c: 0xc047964  jal         func_11E590
    ctx->pc = 0x18848Cu;
    SET_GPR_U32(ctx, 31, 0x188494u);
    ctx->pc = 0x188490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18848Cu;
            // 0x188490: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188494u; }
        if (ctx->pc != 0x188494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188494u; }
        if (ctx->pc != 0x188494u) { return; }
    }
    ctx->pc = 0x188494u;
label_188494:
    // 0x188494: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x188494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x188498: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x188498u;
    SET_GPR_U32(ctx, 31, 0x1884A0u);
    ctx->pc = 0x18849Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188498u;
            // 0x18849c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884A0u; }
        if (ctx->pc != 0x1884A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884A0u; }
        if (ctx->pc != 0x1884A0u) { return; }
    }
    ctx->pc = 0x1884A0u;
label_1884a0:
    // 0x1884a0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1884A0u;
    {
        const bool branch_taken_0x1884a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884a0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1884A8u;
label_1884a8:
    // 0x1884a8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1884a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1884ac: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x1884acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x1884b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1884b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1884b4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1884b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1884b8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1884b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1884bc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1884c0: 0xc049612  jal         func_125848
    ctx->pc = 0x1884C0u;
    SET_GPR_U32(ctx, 31, 0x1884C8u);
    ctx->pc = 0x1884C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884C0u;
            // 0x1884c4: 0x24a54300  addiu       $a1, $a1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884C8u; }
        if (ctx->pc != 0x1884C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884C8u; }
        if (ctx->pc != 0x1884C8u) { return; }
    }
    ctx->pc = 0x1884C8u;
label_1884c8:
    // 0x1884c8: 0xc04950e  jal         func_125438
    ctx->pc = 0x1884C8u;
    SET_GPR_U32(ctx, 31, 0x1884D0u);
    ctx->pc = 0x1884CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884C8u;
            // 0x1884cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884D0u; }
        if (ctx->pc != 0x1884D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884D0u; }
        if (ctx->pc != 0x1884D0u) { return; }
    }
    ctx->pc = 0x1884D0u;
label_1884d0:
    // 0x1884d0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1884D0u;
    {
        const bool branch_taken_0x1884d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884d0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1884D8u;
label_1884d8:
    // 0x1884d8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1884d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1884dc: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1884DCu;
    SET_GPR_U32(ctx, 31, 0x1884E4u);
    ctx->pc = 0x1884E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884DCu;
            // 0x1884e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884E4u; }
        if (ctx->pc != 0x1884E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884E4u; }
        if (ctx->pc != 0x1884E4u) { return; }
    }
    ctx->pc = 0x1884E4u;
label_1884e4:
    // 0x1884e4: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x1884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x1884e8: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1884e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1884ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1884ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1884f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1884f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1884f4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1884f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1884f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1884F8u;
    {
        const bool branch_taken_0x1884f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1884f8) {
            ctx->pc = 0x188520u;
            goto label_188520;
        }
    }
    ctx->pc = 0x188500u;
    // 0x188500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188508: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18850c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x188510: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x188510u;
    SET_GPR_U32(ctx, 31, 0x188518u);
    ctx->pc = 0x188514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188510u;
            // 0x188514: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188518u; }
        if (ctx->pc != 0x188518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188518u; }
        if (ctx->pc != 0x188518u) { return; }
    }
    ctx->pc = 0x188518u;
label_188518:
    // 0x188518: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x188518u;
    {
        const bool branch_taken_0x188518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188518) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188520u;
label_188520:
    // 0x188520: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x188520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x188524: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x188524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x188528: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18852c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x18852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188530: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x188530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x188534: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x188534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x188538: 0xc049612  jal         func_125848
    ctx->pc = 0x188538u;
    SET_GPR_U32(ctx, 31, 0x188540u);
    ctx->pc = 0x18853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188538u;
            // 0x18853c: 0x24a54340  addiu       $a1, $a1, 0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188540u; }
        if (ctx->pc != 0x188540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188540u; }
        if (ctx->pc != 0x188540u) { return; }
    }
    ctx->pc = 0x188540u;
label_188540:
    // 0x188540: 0xc04950e  jal         func_125438
    ctx->pc = 0x188540u;
    SET_GPR_U32(ctx, 31, 0x188548u);
    ctx->pc = 0x188544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188540u;
            // 0x188544: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188548u; }
        if (ctx->pc != 0x188548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188548u; }
        if (ctx->pc != 0x188548u) { return; }
    }
    ctx->pc = 0x188548u;
label_188548:
    // 0x188548: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x188548u;
    {
        const bool branch_taken_0x188548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188548) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188550u;
label_188550:
    // 0x188550: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x188550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x188554: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x188554u;
    SET_GPR_U32(ctx, 31, 0x18855Cu);
    ctx->pc = 0x188558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188554u;
            // 0x188558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18855Cu; }
        if (ctx->pc != 0x18855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18855Cu; }
        if (ctx->pc != 0x18855Cu) { return; }
    }
    ctx->pc = 0x18855Cu;
label_18855c:
    // 0x18855c: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x18855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x188560: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x188560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x188564: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x188564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188568: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x18856c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18856Cu;
    {
        const bool branch_taken_0x18856c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x188570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18856Cu;
            // 0x188570: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18856c) {
            ctx->pc = 0x18858Cu;
            goto label_18858c;
        }
    }
    ctx->pc = 0x188574u;
    // 0x188574: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x188574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18857c: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x18857Cu;
    SET_GPR_U32(ctx, 31, 0x188584u);
    ctx->pc = 0x188580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18857Cu;
            // 0x188580: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188584u; }
        if (ctx->pc != 0x188584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188584u; }
        if (ctx->pc != 0x188584u) { return; }
    }
    ctx->pc = 0x188584u;
label_188584:
    // 0x188584: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x188584u;
    {
        const bool branch_taken_0x188584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188584) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18858Cu;
label_18858c:
    // 0x18858c: 0x0  nop
    ctx->pc = 0x18858cu;
    // NOP
    // 0x188590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188594: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188594u;
    {
        const bool branch_taken_0x188594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x188594) {
            ctx->pc = 0x1885B0u;
            goto label_1885b0;
        }
    }
    ctx->pc = 0x18859Cu;
    // 0x18859c: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x18859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1885a0: 0xc061bb0  jal         func_186EC0
    ctx->pc = 0x1885A0u;
    SET_GPR_U32(ctx, 31, 0x1885A8u);
    ctx->pc = 0x1885A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885A0u;
            // 0x1885a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (runtime->hasFunction(0x186EC0u)) {
        auto targetFn = runtime->lookupFunction(0x186EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885A8u; }
        if (ctx->pc != 0x1885A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_float__10CRunScriptFf_0x186ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885A8u; }
        if (ctx->pc != 0x1885A8u) { return; }
    }
    ctx->pc = 0x1885A8u;
label_1885a8:
    // 0x1885a8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1885A8u;
    {
        const bool branch_taken_0x1885a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885a8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1885B0u;
label_1885b0:
    // 0x1885b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1885b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1885b4: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x1885b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x1885b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1885bc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1885bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1885c0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1885c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1885c4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1885c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1885c8: 0xc049612  jal         func_125848
    ctx->pc = 0x1885C8u;
    SET_GPR_U32(ctx, 31, 0x1885D0u);
    ctx->pc = 0x1885CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885C8u;
            // 0x1885cc: 0x24a54370  addiu       $a1, $a1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D0u; }
        if (ctx->pc != 0x1885D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D0u; }
        if (ctx->pc != 0x1885D0u) { return; }
    }
    ctx->pc = 0x1885D0u;
label_1885d0:
    // 0x1885d0: 0xc04950e  jal         func_125438
    ctx->pc = 0x1885D0u;
    SET_GPR_U32(ctx, 31, 0x1885D8u);
    ctx->pc = 0x1885D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885D0u;
            // 0x1885d4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D8u; }
        if (ctx->pc != 0x1885D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D8u; }
        if (ctx->pc != 0x1885D8u) { return; }
    }
    ctx->pc = 0x1885D8u;
label_1885d8:
    // 0x1885d8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1885D8u;
    {
        const bool branch_taken_0x1885d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885d8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1885E0u;
label_1885e0:
    // 0x1885e0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1885e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1885e4: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x1885E4u;
    SET_GPR_U32(ctx, 31, 0x1885ECu);
    ctx->pc = 0x1885E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885E4u;
            // 0x1885e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885ECu; }
        if (ctx->pc != 0x1885ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885ECu; }
        if (ctx->pc != 0x1885ECu) { return; }
    }
    ctx->pc = 0x1885ECu;
label_1885ec:
    // 0x1885ec: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1885ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1885f0: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1885f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1885f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1885f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1885f8: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1885fc: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1885FCu;
    {
        const bool branch_taken_0x1885fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x188600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885FCu;
            // 0x188600: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885fc) {
            ctx->pc = 0x188618u;
            goto label_188618;
        }
    }
    ctx->pc = 0x188604u;
    // 0x188604: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x188604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188608: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x188608u;
    SET_GPR_U32(ctx, 31, 0x188610u);
    ctx->pc = 0x18860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188608u;
            // 0x18860c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188610u; }
        if (ctx->pc != 0x188610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188610u; }
        if (ctx->pc != 0x188610u) { return; }
    }
    ctx->pc = 0x188610u;
label_188610:
    // 0x188610: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x188610u;
    {
        const bool branch_taken_0x188610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188610) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188618u;
label_188618:
    // 0x188618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18861c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18861Cu;
    {
        const bool branch_taken_0x18861c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x18861c) {
            ctx->pc = 0x188640u;
            goto label_188640;
        }
    }
    ctx->pc = 0x188624u;
    // 0x188624: 0xc0a248c  jal         func_289230
    ctx->pc = 0x188624u;
    SET_GPR_U32(ctx, 31, 0x18862Cu);
    ctx->pc = 0x188628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188624u;
            // 0x188628: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18862Cu; }
        if (ctx->pc != 0x18862Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18862Cu; }
        if (ctx->pc != 0x18862Cu) { return; }
    }
    ctx->pc = 0x18862Cu;
label_18862c:
    // 0x18862c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188630: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x188630u;
    SET_GPR_U32(ctx, 31, 0x188638u);
    ctx->pc = 0x188634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188630u;
            // 0x188634: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (runtime->hasFunction(0x186DD0u)) {
        auto targetFn = runtime->lookupFunction(0x186DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188638u; }
        if (ctx->pc != 0x188638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push_int__10CRunScriptFi_0x186dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188638u; }
        if (ctx->pc != 0x188638u) { return; }
    }
    ctx->pc = 0x188638u;
label_188638:
    // 0x188638: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x188638u;
    {
        const bool branch_taken_0x188638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188638) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188640u;
label_188640:
    // 0x188640: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x188640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x188644: 0x8c233b84  lw          $v1, 0x3B84($at)
    ctx->pc = 0x188644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15236)));
    // 0x188648: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18864c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x18864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x188650: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x188650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x188654: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x188654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x188658: 0xc049612  jal         func_125848
    ctx->pc = 0x188658u;
    SET_GPR_U32(ctx, 31, 0x188660u);
    ctx->pc = 0x18865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188658u;
            // 0x18865c: 0x24a543b0  addiu       $a1, $a1, 0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125848u;
    if (runtime->hasFunction(0x125848u)) {
        auto targetFn = runtime->lookupFunction(0x125848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188660u; }
        if (ctx->pc != 0x188660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fprintf_0x125848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188660u; }
        if (ctx->pc != 0x188660u) { return; }
    }
    ctx->pc = 0x188660u;
label_188660:
    // 0x188660: 0xc04950e  jal         func_125438
    ctx->pc = 0x188660u;
    SET_GPR_U32(ctx, 31, 0x188668u);
    ctx->pc = 0x188664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188660u;
            // 0x188664: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188668u; }
        if (ctx->pc != 0x188668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188668u; }
        if (ctx->pc != 0x188668u) { return; }
    }
    ctx->pc = 0x188668u;
label_188668:
    // 0x188668: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x188668u;
    {
        const bool branch_taken_0x188668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188668) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x188670u;
label_188670:
    // 0x188670: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x188670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188674: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x188678: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18867c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188680: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x188680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x188684: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x188684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x188688: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x188688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18868c: 0xc061afc  jal         func_186BF0
    ctx->pc = 0x18868Cu;
    SET_GPR_U32(ctx, 31, 0x188694u);
    ctx->pc = 0x188690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18868Cu;
            // 0x188690: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186BF0u;
    if (runtime->hasFunction(0x186BF0u)) {
        auto targetFn = runtime->lookupFunction(0x186BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188694u; }
        if (ctx->pc != 0x188694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        print__FP12RS_STACKDATAi_0x186bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188694u; }
        if (ctx->pc != 0x188694u) { return; }
    }
    ctx->pc = 0x188694u;
label_188694:
    // 0x188694: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x188694u;
    {
        const bool branch_taken_0x188694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188694) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18869Cu;
label_18869c:
    // 0x18869c: 0x0  nop
    ctx->pc = 0x18869cu;
    // NOP
    // 0x1886a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1886a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1886a4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1886a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1886a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1886ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1886acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1886b0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1886b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1886b4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1886b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1886b8: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1886B8u;
    {
        const bool branch_taken_0x1886b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1886b8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1886C0u;
    // 0x1886c0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1886c4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1886c8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1886c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1886cc: 0xc061c14  jal         func_187050
    ctx->pc = 0x1886CCu;
    SET_GPR_U32(ctx, 31, 0x1886D4u);
    ctx->pc = 0x1886D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1886CCu;
            // 0x1886d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187050u;
    if (runtime->hasFunction(0x187050u)) {
        auto targetFn = runtime->lookupFunction(0x187050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886D4u; }
        if (ctx->pc != 0x1886D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext__10CRunScriptFP12RS_STACKDATAi_0x187050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886D4u; }
        if (ctx->pc != 0x1886D4u) { return; }
    }
    ctx->pc = 0x1886D4u;
label_1886d4:
    // 0x1886d4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1886D4u;
    {
        const bool branch_taken_0x1886d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1886d4) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1886DCu;
label_1886dc:
    // 0x1886dc: 0x0  nop
    ctx->pc = 0x1886dcu;
    // NOP
    // 0x1886e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1886e4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1886e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1886e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1886E8u;
    {
        const bool branch_taken_0x1886e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886E8u;
            // 0x1886ec: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886e8) {
            ctx->pc = 0x1887F8u;
            goto label_1887f8;
        }
    }
    ctx->pc = 0x1886F0u;
label_1886f0:
    // 0x1886f0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1886f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1886f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1886fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1886fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188700: 0xc061bcc  jal         func_186F30
    ctx->pc = 0x188700u;
    SET_GPR_U32(ctx, 31, 0x188708u);
    ctx->pc = 0x188704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188700u;
            // 0x188704: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F30u;
    if (runtime->hasFunction(0x186F30u)) {
        auto targetFn = runtime->lookupFunction(0x186F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188708u; }
        if (ctx->pc != 0x188708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        call_func__10CRunScriptFP8funcdataP8vmcode_t_0x186f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188708u; }
        if (ctx->pc != 0x188708u) { return; }
    }
    ctx->pc = 0x188708u;
label_188708:
    // 0x188708: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x188708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x18870c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x188710: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x188714: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188714u;
            // 0x188718: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188714) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x18871Cu;
label_18871c:
    // 0x18871c: 0x0  nop
    ctx->pc = 0x18871cu;
    // NOP
    // 0x188720: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x188724: 0xc061bc4  jal         func_186F10
    ctx->pc = 0x188724u;
    SET_GPR_U32(ctx, 31, 0x18872Cu);
    ctx->pc = 0x188728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188724u;
            // 0x188728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F10u;
    if (runtime->hasFunction(0x186F10u)) {
        auto targetFn = runtime->lookupFunction(0x186F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18872Cu; }
        if (ctx->pc != 0x18872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pop__10CRunScriptFv_0x186f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18872Cu; }
        if (ctx->pc != 0x18872Cu) { return; }
    }
    ctx->pc = 0x18872Cu;
label_18872c:
    // 0x18872c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x188730: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x188734: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x188738: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x188738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x18873c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188740: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x188740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x188744: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x188744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x188748: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x188748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18874c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18874Cu;
    {
        const bool branch_taken_0x18874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18874c) {
            ctx->pc = 0x18876Cu;
            goto label_18876c;
        }
    }
    ctx->pc = 0x188754u;
    // 0x188754: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x188758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18875c: 0xc061c08  jal         func_187020
    ctx->pc = 0x18875Cu;
    SET_GPR_U32(ctx, 31, 0x188764u);
    ctx->pc = 0x188760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18875Cu;
            // 0x188760: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187020u;
    if (runtime->hasFunction(0x187020u)) {
        auto targetFn = runtime->lookupFunction(0x187020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188764u; }
        if (ctx->pc != 0x188764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ret_func__10CRunScriptFv_0x187020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188764u; }
        if (ctx->pc != 0x188764u) { return; }
    }
    ctx->pc = 0x188764u;
label_188764:
    // 0x188764: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188764u;
    {
        const bool branch_taken_0x188764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188764u;
            // 0x188768: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188764) {
            ctx->pc = 0x188794u;
            goto label_188794;
        }
    }
    ctx->pc = 0x18876Cu;
label_18876c:
    // 0x18876c: 0x0  nop
    ctx->pc = 0x18876cu;
    // NOP
    // 0x188770: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188774: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x188774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x188778: 0xdfa50060  ld          $a1, 0x60($sp)
    ctx->pc = 0x188778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18877c: 0xc061b60  jal         func_186D80
    ctx->pc = 0x18877Cu;
    SET_GPR_U32(ctx, 31, 0x188784u);
    ctx->pc = 0x188780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18877Cu;
            // 0x188780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188784u; }
        if (ctx->pc != 0x188784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188784u; }
        if (ctx->pc != 0x188784u) { return; }
    }
    ctx->pc = 0x188784u;
label_188784:
    // 0x188784: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x188784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x188788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18878c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18878Cu;
    {
        const bool branch_taken_0x18878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18878Cu;
            // 0x188790: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18878c) {
            ctx->pc = 0x1887F8u;
            goto label_1887f8;
        }
    }
    ctx->pc = 0x188794u;
label_188794:
    // 0x188794: 0xdfa50060  ld          $a1, 0x60($sp)
    ctx->pc = 0x188794u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188798: 0xc061b60  jal         func_186D80
    ctx->pc = 0x188798u;
    SET_GPR_U32(ctx, 31, 0x1887A0u);
    ctx->pc = 0x18879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188798u;
            // 0x18879c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D80u;
    if (runtime->hasFunction(0x186D80u)) {
        auto targetFn = runtime->lookupFunction(0x186D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887A0u; }
        if (ctx->pc != 0x1887A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        push__10CRunScriptF12RS_STACKDATA_0x186d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887A0u; }
        if (ctx->pc != 0x1887A0u) { return; }
    }
    ctx->pc = 0x1887A0u;
label_1887a0:
    // 0x1887a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1887A0u;
    {
        const bool branch_taken_0x1887a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887a0) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1887A8u;
label_1887a8:
    // 0x1887a8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1887ac: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1887ACu;
    {
        const bool branch_taken_0x1887ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1887B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887ACu;
            // 0x1887b0: 0x2623000c  addiu       $v1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887ac) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1887B4u;
    // 0x1887b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887B4u;
            // 0x1887b8: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x1887F8u;
            goto label_1887f8;
        }
    }
    ctx->pc = 0x1887BCu;
label_1887bc:
    // 0x1887bc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1887c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1887c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1887c4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1887c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x1887c8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1887c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1887cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1887CCu;
    {
        const bool branch_taken_0x1887cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887cc) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1887D4u;
    // 0x1887d4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1887d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1887d8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1887d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1887dc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1887dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1887e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1887E0u;
    {
        const bool branch_taken_0x1887e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887E0u;
            // 0x1887e4: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887e0) {
            ctx->pc = 0x1887F8u;
            goto label_1887f8;
        }
    }
    ctx->pc = 0x1887E8u;
label_1887e8:
    // 0x1887e8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1887e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1887ec:
    // 0x1887ec: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1887f0: 0x1000fafd  b           . + 4 + (-0x503 << 2)
    ctx->pc = 0x1887F0u;
    {
        const bool branch_taken_0x1887f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887F0u;
            // 0x1887f4: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887f0) {
            ctx->pc = 0x1873E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1873e8;
        }
    }
    ctx->pc = 0x1887F8u;
label_1887f8:
    // 0x1887f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1887f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1887fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1887fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188800: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x188800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x188804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x188804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188808: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x188808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18880c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18880cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x188810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188814: 0x3e00008  jr          $ra
    ctx->pc = 0x188814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188814u;
            // 0x188818: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18881Cu;
}
