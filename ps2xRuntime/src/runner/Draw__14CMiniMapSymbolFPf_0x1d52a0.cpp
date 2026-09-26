#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CMiniMapSymbolFPf
// Address: 0x1d52a0 - 0x1d5618
void Draw__14CMiniMapSymbolFPf_0x1d52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CMiniMapSymbolFPf_0x1d52a0");
#endif

    switch (ctx->pc) {
        case 0x1d52a0u: goto label_1d52a0;
        case 0x1d52a4u: goto label_1d52a4;
        case 0x1d52a8u: goto label_1d52a8;
        case 0x1d52acu: goto label_1d52ac;
        case 0x1d52b0u: goto label_1d52b0;
        case 0x1d52b4u: goto label_1d52b4;
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52bcu: goto label_1d52bc;
        case 0x1d52c0u: goto label_1d52c0;
        case 0x1d52c4u: goto label_1d52c4;
        case 0x1d52c8u: goto label_1d52c8;
        case 0x1d52ccu: goto label_1d52cc;
        case 0x1d52d0u: goto label_1d52d0;
        case 0x1d52d4u: goto label_1d52d4;
        case 0x1d52d8u: goto label_1d52d8;
        case 0x1d52dcu: goto label_1d52dc;
        case 0x1d52e0u: goto label_1d52e0;
        case 0x1d52e4u: goto label_1d52e4;
        case 0x1d52e8u: goto label_1d52e8;
        case 0x1d52ecu: goto label_1d52ec;
        case 0x1d52f0u: goto label_1d52f0;
        case 0x1d52f4u: goto label_1d52f4;
        case 0x1d52f8u: goto label_1d52f8;
        case 0x1d52fcu: goto label_1d52fc;
        case 0x1d5300u: goto label_1d5300;
        case 0x1d5304u: goto label_1d5304;
        case 0x1d5308u: goto label_1d5308;
        case 0x1d530cu: goto label_1d530c;
        case 0x1d5310u: goto label_1d5310;
        case 0x1d5314u: goto label_1d5314;
        case 0x1d5318u: goto label_1d5318;
        case 0x1d531cu: goto label_1d531c;
        case 0x1d5320u: goto label_1d5320;
        case 0x1d5324u: goto label_1d5324;
        case 0x1d5328u: goto label_1d5328;
        case 0x1d532cu: goto label_1d532c;
        case 0x1d5330u: goto label_1d5330;
        case 0x1d5334u: goto label_1d5334;
        case 0x1d5338u: goto label_1d5338;
        case 0x1d533cu: goto label_1d533c;
        case 0x1d5340u: goto label_1d5340;
        case 0x1d5344u: goto label_1d5344;
        case 0x1d5348u: goto label_1d5348;
        case 0x1d534cu: goto label_1d534c;
        case 0x1d5350u: goto label_1d5350;
        case 0x1d5354u: goto label_1d5354;
        case 0x1d5358u: goto label_1d5358;
        case 0x1d535cu: goto label_1d535c;
        case 0x1d5360u: goto label_1d5360;
        case 0x1d5364u: goto label_1d5364;
        case 0x1d5368u: goto label_1d5368;
        case 0x1d536cu: goto label_1d536c;
        case 0x1d5370u: goto label_1d5370;
        case 0x1d5374u: goto label_1d5374;
        case 0x1d5378u: goto label_1d5378;
        case 0x1d537cu: goto label_1d537c;
        case 0x1d5380u: goto label_1d5380;
        case 0x1d5384u: goto label_1d5384;
        case 0x1d5388u: goto label_1d5388;
        case 0x1d538cu: goto label_1d538c;
        case 0x1d5390u: goto label_1d5390;
        case 0x1d5394u: goto label_1d5394;
        case 0x1d5398u: goto label_1d5398;
        case 0x1d539cu: goto label_1d539c;
        case 0x1d53a0u: goto label_1d53a0;
        case 0x1d53a4u: goto label_1d53a4;
        case 0x1d53a8u: goto label_1d53a8;
        case 0x1d53acu: goto label_1d53ac;
        case 0x1d53b0u: goto label_1d53b0;
        case 0x1d53b4u: goto label_1d53b4;
        case 0x1d53b8u: goto label_1d53b8;
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53c0u: goto label_1d53c0;
        case 0x1d53c4u: goto label_1d53c4;
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53ccu: goto label_1d53cc;
        case 0x1d53d0u: goto label_1d53d0;
        case 0x1d53d4u: goto label_1d53d4;
        case 0x1d53d8u: goto label_1d53d8;
        case 0x1d53dcu: goto label_1d53dc;
        case 0x1d53e0u: goto label_1d53e0;
        case 0x1d53e4u: goto label_1d53e4;
        case 0x1d53e8u: goto label_1d53e8;
        case 0x1d53ecu: goto label_1d53ec;
        case 0x1d53f0u: goto label_1d53f0;
        case 0x1d53f4u: goto label_1d53f4;
        case 0x1d53f8u: goto label_1d53f8;
        case 0x1d53fcu: goto label_1d53fc;
        case 0x1d5400u: goto label_1d5400;
        case 0x1d5404u: goto label_1d5404;
        case 0x1d5408u: goto label_1d5408;
        case 0x1d540cu: goto label_1d540c;
        case 0x1d5410u: goto label_1d5410;
        case 0x1d5414u: goto label_1d5414;
        case 0x1d5418u: goto label_1d5418;
        case 0x1d541cu: goto label_1d541c;
        case 0x1d5420u: goto label_1d5420;
        case 0x1d5424u: goto label_1d5424;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d542cu: goto label_1d542c;
        case 0x1d5430u: goto label_1d5430;
        case 0x1d5434u: goto label_1d5434;
        case 0x1d5438u: goto label_1d5438;
        case 0x1d543cu: goto label_1d543c;
        case 0x1d5440u: goto label_1d5440;
        case 0x1d5444u: goto label_1d5444;
        case 0x1d5448u: goto label_1d5448;
        case 0x1d544cu: goto label_1d544c;
        case 0x1d5450u: goto label_1d5450;
        case 0x1d5454u: goto label_1d5454;
        case 0x1d5458u: goto label_1d5458;
        case 0x1d545cu: goto label_1d545c;
        case 0x1d5460u: goto label_1d5460;
        case 0x1d5464u: goto label_1d5464;
        case 0x1d5468u: goto label_1d5468;
        case 0x1d546cu: goto label_1d546c;
        case 0x1d5470u: goto label_1d5470;
        case 0x1d5474u: goto label_1d5474;
        case 0x1d5478u: goto label_1d5478;
        case 0x1d547cu: goto label_1d547c;
        case 0x1d5480u: goto label_1d5480;
        case 0x1d5484u: goto label_1d5484;
        case 0x1d5488u: goto label_1d5488;
        case 0x1d548cu: goto label_1d548c;
        case 0x1d5490u: goto label_1d5490;
        case 0x1d5494u: goto label_1d5494;
        case 0x1d5498u: goto label_1d5498;
        case 0x1d549cu: goto label_1d549c;
        case 0x1d54a0u: goto label_1d54a0;
        case 0x1d54a4u: goto label_1d54a4;
        case 0x1d54a8u: goto label_1d54a8;
        case 0x1d54acu: goto label_1d54ac;
        case 0x1d54b0u: goto label_1d54b0;
        case 0x1d54b4u: goto label_1d54b4;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54bcu: goto label_1d54bc;
        case 0x1d54c0u: goto label_1d54c0;
        case 0x1d54c4u: goto label_1d54c4;
        case 0x1d54c8u: goto label_1d54c8;
        case 0x1d54ccu: goto label_1d54cc;
        case 0x1d54d0u: goto label_1d54d0;
        case 0x1d54d4u: goto label_1d54d4;
        case 0x1d54d8u: goto label_1d54d8;
        case 0x1d54dcu: goto label_1d54dc;
        case 0x1d54e0u: goto label_1d54e0;
        case 0x1d54e4u: goto label_1d54e4;
        case 0x1d54e8u: goto label_1d54e8;
        case 0x1d54ecu: goto label_1d54ec;
        case 0x1d54f0u: goto label_1d54f0;
        case 0x1d54f4u: goto label_1d54f4;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d54fcu: goto label_1d54fc;
        case 0x1d5500u: goto label_1d5500;
        case 0x1d5504u: goto label_1d5504;
        case 0x1d5508u: goto label_1d5508;
        case 0x1d550cu: goto label_1d550c;
        case 0x1d5510u: goto label_1d5510;
        case 0x1d5514u: goto label_1d5514;
        case 0x1d5518u: goto label_1d5518;
        case 0x1d551cu: goto label_1d551c;
        case 0x1d5520u: goto label_1d5520;
        case 0x1d5524u: goto label_1d5524;
        case 0x1d5528u: goto label_1d5528;
        case 0x1d552cu: goto label_1d552c;
        case 0x1d5530u: goto label_1d5530;
        case 0x1d5534u: goto label_1d5534;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d553cu: goto label_1d553c;
        case 0x1d5540u: goto label_1d5540;
        case 0x1d5544u: goto label_1d5544;
        case 0x1d5548u: goto label_1d5548;
        case 0x1d554cu: goto label_1d554c;
        case 0x1d5550u: goto label_1d5550;
        case 0x1d5554u: goto label_1d5554;
        case 0x1d5558u: goto label_1d5558;
        case 0x1d555cu: goto label_1d555c;
        case 0x1d5560u: goto label_1d5560;
        case 0x1d5564u: goto label_1d5564;
        case 0x1d5568u: goto label_1d5568;
        case 0x1d556cu: goto label_1d556c;
        case 0x1d5570u: goto label_1d5570;
        case 0x1d5574u: goto label_1d5574;
        case 0x1d5578u: goto label_1d5578;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d5580u: goto label_1d5580;
        case 0x1d5584u: goto label_1d5584;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d558cu: goto label_1d558c;
        case 0x1d5590u: goto label_1d5590;
        case 0x1d5594u: goto label_1d5594;
        case 0x1d5598u: goto label_1d5598;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55a4u: goto label_1d55a4;
        case 0x1d55a8u: goto label_1d55a8;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55b0u: goto label_1d55b0;
        case 0x1d55b4u: goto label_1d55b4;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55bcu: goto label_1d55bc;
        case 0x1d55c0u: goto label_1d55c0;
        case 0x1d55c4u: goto label_1d55c4;
        case 0x1d55c8u: goto label_1d55c8;
        case 0x1d55ccu: goto label_1d55cc;
        case 0x1d55d0u: goto label_1d55d0;
        case 0x1d55d4u: goto label_1d55d4;
        case 0x1d55d8u: goto label_1d55d8;
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55e0u: goto label_1d55e0;
        case 0x1d55e4u: goto label_1d55e4;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55f0u: goto label_1d55f0;
        case 0x1d55f4u: goto label_1d55f4;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d55fcu: goto label_1d55fc;
        case 0x1d5600u: goto label_1d5600;
        case 0x1d5604u: goto label_1d5604;
        case 0x1d5608u: goto label_1d5608;
        case 0x1d560cu: goto label_1d560c;
        case 0x1d5610u: goto label_1d5610;
        case 0x1d5614u: goto label_1d5614;
        default: break;
    }

    ctx->pc = 0x1d52a0u;

label_1d52a0:
    // 0x1d52a0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_1d52a4:
    // 0x1d52a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d52a8:
    // 0x1d52a8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1d52ac:
    // 0x1d52ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d52acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d52b0:
    // 0x1d52b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d52b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d52b4:
    // 0x1d52b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d52b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d52b8:
    // 0x1d52b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d52bc:
    // 0x1d52bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d52bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d52c0:
    // 0x1d52c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d52c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d52c4:
    // 0x1d52c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d52c8:
    // 0x1d52c8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d52c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d52cc:
    // 0x1d52cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d52ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d52d0:
    // 0x1d52d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d52d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d52d4:
    // 0x1d52d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d52d8:
    // 0x1d52d8: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
label_1d52dc:
    if (ctx->pc == 0x1D52DCu) {
        ctx->pc = 0x1D52DCu;
            // 0x1d52dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D52E0u;
        goto label_1d52e0;
    }
    ctx->pc = 0x1D52D8u;
    {
        const bool branch_taken_0x1d52d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52D8u;
            // 0x1d52dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52d8) {
            ctx->pc = 0x1D55E0u;
            goto label_1d55e0;
        }
    }
    ctx->pc = 0x1D52E0u;
label_1d52e0:
    // 0x1d52e0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d52e4:
    // 0x1d52e4: 0x120000be  beqz        $s0, . + 4 + (0xBE << 2)
label_1d52e8:
    if (ctx->pc == 0x1D52E8u) {
        ctx->pc = 0x1D52ECu;
        goto label_1d52ec;
    }
    ctx->pc = 0x1D52E4u;
    {
        const bool branch_taken_0x1d52e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d52e4) {
            ctx->pc = 0x1D55E0u;
            goto label_1d55e0;
        }
    }
    ctx->pc = 0x1D52ECu;
label_1d52ec:
    // 0x1d52ec: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d52f0:
    // 0x1d52f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1d52f4:
    // 0x1d52f4: 0x146000ba  bnez        $v1, . + 4 + (0xBA << 2)
label_1d52f8:
    if (ctx->pc == 0x1D52F8u) {
        ctx->pc = 0x1D52F8u;
            // 0x1d52f8: 0x26640150  addiu       $a0, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->pc = 0x1D52FCu;
        goto label_1d52fc;
    }
    ctx->pc = 0x1D52F4u;
    {
        const bool branch_taken_0x1d52f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D52F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52F4u;
            // 0x1d52f8: 0x26640150  addiu       $a0, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f4) {
            ctx->pc = 0x1D55E0u;
            goto label_1d55e0;
        }
    }
    ctx->pc = 0x1D52FCu;
label_1d52fc:
    // 0x1d52fc: 0xc041c5c  jal         func_107170
label_1d5300:
    if (ctx->pc == 0x1D5300u) {
        ctx->pc = 0x1D5304u;
        goto label_1d5304;
    }
    ctx->pc = 0x1D52FCu;
    SET_GPR_U32(ctx, 31, 0x1D5304u);
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5304u; }
        if (ctx->pc != 0x1D5304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5304u; }
        if (ctx->pc != 0x1D5304u) { return; }
    }
    ctx->pc = 0x1D5304u;
label_1d5304:
    // 0x1d5304: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d5304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d5308:
    // 0x1d5308: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d5308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1d530c:
    // 0x1d530c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d5310:
    // 0x1d5310: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d5314:
    if (ctx->pc == 0x1D5314u) {
        ctx->pc = 0x1D5314u;
            // 0x1d5314: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5318u;
        goto label_1d5318;
    }
    ctx->pc = 0x1D5310u;
    {
        const bool branch_taken_0x1d5310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5310u;
            // 0x1d5314: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5310) {
            ctx->pc = 0x1D531Cu;
            goto label_1d531c;
        }
    }
    ctx->pc = 0x1D5318u;
label_1d5318:
    // 0x1d5318: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d5318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d531c:
    // 0x1d531c: 0xc04d0e8  jal         func_1343A0
label_1d5320:
    if (ctx->pc == 0x1D5320u) {
        ctx->pc = 0x1D5320u;
            // 0x1d5320: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D5324u;
        goto label_1d5324;
    }
    ctx->pc = 0x1D531Cu;
    SET_GPR_U32(ctx, 31, 0x1D5324u);
    ctx->pc = 0x1D5320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D531Cu;
            // 0x1d5320: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5324u; }
        if (ctx->pc != 0x1D5324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5324u; }
        if (ctx->pc != 0x1D5324u) { return; }
    }
    ctx->pc = 0x1D5324u;
label_1d5324:
    // 0x1d5324: 0xc04d0e8  jal         func_1343A0
label_1d5328:
    if (ctx->pc == 0x1D5328u) {
        ctx->pc = 0x1D5328u;
            // 0x1d5328: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x1D532Cu;
        goto label_1d532c;
    }
    ctx->pc = 0x1D5324u;
    SET_GPR_U32(ctx, 31, 0x1D532Cu);
    ctx->pc = 0x1D5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5324u;
            // 0x1d5328: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D532Cu; }
        if (ctx->pc != 0x1D532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D532Cu; }
        if (ctx->pc != 0x1D532Cu) { return; }
    }
    ctx->pc = 0x1D532Cu;
label_1d532c:
    // 0x1d532c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5330:
    // 0x1d5330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5334:
    // 0x1d5334: 0xc04d104  jal         func_134410
label_1d5338:
    if (ctx->pc == 0x1D5338u) {
        ctx->pc = 0x1D5338u;
            // 0x1d5338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D533Cu;
        goto label_1d533c;
    }
    ctx->pc = 0x1D5334u;
    SET_GPR_U32(ctx, 31, 0x1D533Cu);
    ctx->pc = 0x1D5338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5334u;
            // 0x1d5338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D533Cu; }
        if (ctx->pc != 0x1D533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D533Cu; }
        if (ctx->pc != 0x1D533Cu) { return; }
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0xc079f5c  jal         func_1E7D70
label_1d5340:
    if (ctx->pc == 0x1D5340u) {
        ctx->pc = 0x1D5340u;
            // 0x1d5340: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D5344u;
        goto label_1d5344;
    }
    ctx->pc = 0x1D533Cu;
    SET_GPR_U32(ctx, 31, 0x1D5344u);
    ctx->pc = 0x1D5340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D533Cu;
            // 0x1d5340: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5344u; }
        if (ctx->pc != 0x1D5344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5344u; }
        if (ctx->pc != 0x1D5344u) { return; }
    }
    ctx->pc = 0x1D5344u;
label_1d5344:
    // 0x1d5344: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5348:
    // 0x1d5348: 0xc04d128  jal         func_1344A0
label_1d534c:
    if (ctx->pc == 0x1D534Cu) {
        ctx->pc = 0x1D534Cu;
            // 0x1d534c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1D5350u;
        goto label_1d5350;
    }
    ctx->pc = 0x1D5348u;
    SET_GPR_U32(ctx, 31, 0x1D5350u);
    ctx->pc = 0x1D534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5348u;
            // 0x1d534c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5350u; }
        if (ctx->pc != 0x1D5350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5350u; }
        if (ctx->pc != 0x1D5350u) { return; }
    }
    ctx->pc = 0x1D5350u;
label_1d5350:
    // 0x1d5350: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1d5350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d5354:
    // 0x1d5354: 0xc04d368  jal         func_134DA0
label_1d5358:
    if (ctx->pc == 0x1D5358u) {
        ctx->pc = 0x1D5358u;
            // 0x1d5358: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D535Cu;
        goto label_1d535c;
    }
    ctx->pc = 0x1D5354u;
    SET_GPR_U32(ctx, 31, 0x1D535Cu);
    ctx->pc = 0x1D5358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5354u;
            // 0x1d5358: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D535Cu; }
        if (ctx->pc != 0x1D535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D535Cu; }
        if (ctx->pc != 0x1D535Cu) { return; }
    }
    ctx->pc = 0x1D535Cu;
label_1d535c:
    // 0x1d535c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d5360:
    // 0x1d5360: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5364:
    // 0x1d5364: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d5364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5368:
    // 0x1d5368: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d5368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d536c:
    // 0x1d536c: 0xc04d320  jal         func_134C80
label_1d5370:
    if (ctx->pc == 0x1D5370u) {
        ctx->pc = 0x1D5370u;
            // 0x1d5370: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x1D5374u;
        goto label_1d5374;
    }
    ctx->pc = 0x1D536Cu;
    SET_GPR_U32(ctx, 31, 0x1D5374u);
    ctx->pc = 0x1D5370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D536Cu;
            // 0x1d5370: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5374u; }
        if (ctx->pc != 0x1D5374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5374u; }
        if (ctx->pc != 0x1D5374u) { return; }
    }
    ctx->pc = 0x1D5374u;
label_1d5374:
    // 0x1d5374: 0x86670164  lh          $a3, 0x164($s3)
    ctx->pc = 0x1d5374u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
label_1d5378:
    // 0x1d5378: 0x86680166  lh          $t0, 0x166($s3)
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 358)));
label_1d537c:
    // 0x1d537c: 0x86630160  lh          $v1, 0x160($s3)
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 352)));
label_1d5380:
    // 0x1d5380: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1d5384:
    if (ctx->pc == 0x1D5384u) {
        ctx->pc = 0x1D5384u;
            // 0x1d5384: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->pc = 0x1D5388u;
        goto label_1d5388;
    }
    ctx->pc = 0x1D5380u;
    {
        const bool branch_taken_0x1d5380 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1D5384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5380u;
            // 0x1d5384: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5380) {
            ctx->pc = 0x1D5390u;
            goto label_1d5390;
        }
    }
    ctx->pc = 0x1D5388u;
label_1d5388:
    // 0x1d5388: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1d5388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d538c:
    // 0x1d538c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d538cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d5390:
    // 0x1d5390: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1d5390u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5394:
    // 0x1d5394: 0x86630162  lh          $v1, 0x162($s3)
    ctx->pc = 0x1d5394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 354)));
label_1d5398:
    // 0x1d5398: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1d539c:
    if (ctx->pc == 0x1D539Cu) {
        ctx->pc = 0x1D539Cu;
            // 0x1d539c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->pc = 0x1D53A0u;
        goto label_1d53a0;
    }
    ctx->pc = 0x1D5398u;
    {
        const bool branch_taken_0x1d5398 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5398u;
            // 0x1d539c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5398) {
            ctx->pc = 0x1D53A8u;
            goto label_1d53a8;
        }
    }
    ctx->pc = 0x1D53A0u;
label_1d53a0:
    // 0x1d53a0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d53a4:
    // 0x1d53a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d53a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d53a8:
    // 0x1d53a8: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1d53a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d53ac:
    // 0x1d53ac: 0xc079fd8  jal         func_1E7F60
label_1d53b0:
    if (ctx->pc == 0x1D53B0u) {
        ctx->pc = 0x1D53B0u;
            // 0x1d53b0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D53B4u;
        goto label_1d53b4;
    }
    ctx->pc = 0x1D53ACu;
    SET_GPR_U32(ctx, 31, 0x1D53B4u);
    ctx->pc = 0x1D53B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53ACu;
            // 0x1d53b0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B4u; }
        if (ctx->pc != 0x1D53B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B4u; }
        if (ctx->pc != 0x1D53B4u) { return; }
    }
    ctx->pc = 0x1D53B4u;
label_1d53b4:
    // 0x1d53b4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1d53b8:
    if (ctx->pc == 0x1D53B8u) {
        ctx->pc = 0x1D53B8u;
            // 0x1d53b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D53BCu;
        goto label_1d53bc;
    }
    ctx->pc = 0x1D53B4u;
    {
        const bool branch_taken_0x1d53b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53B4u;
            // 0x1d53b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53b4) {
            ctx->pc = 0x1D55A4u;
            goto label_1d55a4;
        }
    }
    ctx->pc = 0x1D53BCu;
label_1d53bc:
    // 0x1d53bc: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x1d53bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_1d53c0:
    // 0x1d53c0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1d53c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1d53c4:
    // 0x1d53c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d53c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d53c8:
    // 0x1d53c8: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_1d53cc:
    if (ctx->pc == 0x1D53CCu) {
        ctx->pc = 0x1D53D0u;
        goto label_1d53d0;
    }
    ctx->pc = 0x1D53C8u;
    {
        const bool branch_taken_0x1d53c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d53c8) {
            ctx->pc = 0x1D5594u;
            goto label_1d5594;
        }
    }
    ctx->pc = 0x1D53D0u;
label_1d53d0:
    // 0x1d53d0: 0x8e0301dc  lw          $v1, 0x1DC($s0)
    ctx->pc = 0x1d53d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
label_1d53d4:
    // 0x1d53d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d53d8:
    // 0x1d53d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d53dc:
    if (ctx->pc == 0x1D53DCu) {
        ctx->pc = 0x1D53E0u;
        goto label_1d53e0;
    }
    ctx->pc = 0x1D53D8u;
    {
        const bool branch_taken_0x1d53d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d53d8) {
            ctx->pc = 0x1D53E8u;
            goto label_1d53e8;
        }
    }
    ctx->pc = 0x1D53E0u;
label_1d53e0:
    // 0x1d53e0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1d53e4:
    if (ctx->pc == 0x1D53E4u) {
        ctx->pc = 0x1D53E4u;
            // 0x1d53e4: 0x26100310  addiu       $s0, $s0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
        ctx->pc = 0x1D53E8u;
        goto label_1d53e8;
    }
    ctx->pc = 0x1D53E0u;
    {
        const bool branch_taken_0x1d53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53E0u;
            // 0x1d53e4: 0x26100310  addiu       $s0, $s0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53e0) {
            ctx->pc = 0x1D559Cu;
            goto label_1d559c;
        }
    }
    ctx->pc = 0x1D53E8u;
label_1d53e8:
    // 0x1d53e8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1d53ec:
    if (ctx->pc == 0x1D53ECu) {
        ctx->pc = 0x1D53ECu;
            // 0x1d53ec: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x1D53F0u;
        goto label_1d53f0;
    }
    ctx->pc = 0x1D53E8u;
    {
        const bool branch_taken_0x1d53e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D53ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53E8u;
            // 0x1d53ec: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53e8) {
            ctx->pc = 0x1D53FCu;
            goto label_1d53fc;
        }
    }
    ctx->pc = 0x1D53F0u;
label_1d53f0:
    // 0x1d53f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d53f4:
    if (ctx->pc == 0x1D53F4u) {
        ctx->pc = 0x1D53F4u;
            // 0x1d53f4: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1D53F8u;
        goto label_1d53f8;
    }
    ctx->pc = 0x1D53F0u;
    {
        const bool branch_taken_0x1d53f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53F0u;
            // 0x1d53f4: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53f0) {
            ctx->pc = 0x1D5400u;
            goto label_1d5400;
        }
    }
    ctx->pc = 0x1D53F8u;
label_1d53f8:
    // 0x1d53f8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1d53fc:
    // 0x1d53fc: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d5400:
    // 0x1d5400: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1d5404:
    if (ctx->pc == 0x1D5404u) {
        ctx->pc = 0x1D5404u;
            // 0x1d5404: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1D5408u;
        goto label_1d5408;
    }
    ctx->pc = 0x1D5400u;
    {
        const bool branch_taken_0x1d5400 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D5404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5400u;
            // 0x1d5404: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5400) {
            ctx->pc = 0x1D5410u;
            goto label_1d5410;
        }
    }
    ctx->pc = 0x1D5408u;
label_1d5408:
    // 0x1d5408: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1d540c:
    // 0x1d540c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d540cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d5410:
    // 0x1d5410: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5414:
    // 0x1d5414: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1d5414u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d5418:
    // 0x1d5418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d541c:
    // 0x1d541c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d5420:
    // 0x1d5420: 0x320f809  jalr        $t9
label_1d5424:
    if (ctx->pc == 0x1D5424u) {
        ctx->pc = 0x1D5424u;
            // 0x1d5424: 0x27a502e0  addiu       $a1, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x1D5428u;
        goto label_1d5428;
    }
    ctx->pc = 0x1D5420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D5428u);
        ctx->pc = 0x1D5424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5420u;
            // 0x1d5424: 0x27a502e0  addiu       $a1, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5428u; }
            if (ctx->pc != 0x1D5428u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5428u;
label_1d5428:
    // 0x1d5428: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x1d5428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_1d542c:
    // 0x1d542c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1d5430:
    // 0x1d5430: 0xc041c3e  jal         func_1070F8
label_1d5434:
    if (ctx->pc == 0x1D5434u) {
        ctx->pc = 0x1D5434u;
            // 0x1d5434: 0x26660150  addiu       $a2, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->pc = 0x1D5438u;
        goto label_1d5438;
    }
    ctx->pc = 0x1D5430u;
    SET_GPR_U32(ctx, 31, 0x1D5438u);
    ctx->pc = 0x1D5434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5430u;
            // 0x1d5434: 0x26660150  addiu       $a2, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5438u; }
        if (ctx->pc != 0x1D5438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5438u; }
        if (ctx->pc != 0x1D5438u) { return; }
    }
    ctx->pc = 0x1D5438u;
label_1d5438:
    // 0x1d5438: 0xc7a202f0  lwc1        $f2, 0x2F0($sp)
    ctx->pc = 0x1d5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d543c:
    // 0x1d543c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1d5440:
    // 0x1d5440: 0xc661013c  lwc1        $f1, 0x13C($s3)
    ctx->pc = 0x1d5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5444:
    // 0x1d5444: 0x86630160  lh          $v1, 0x160($s3)
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 352)));
label_1d5448:
    // 0x1d5448: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1d5448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d544c:
    // 0x1d544c: 0x8e720130  lw          $s2, 0x130($s3)
    ctx->pc = 0x1d544cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_1d5450:
    // 0x1d5450: 0xc6740140  lwc1        $f20, 0x140($s3)
    ctx->pc = 0x1d5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d5454:
    // 0x1d5454: 0xc7a002f8  lwc1        $f0, 0x2F8($sp)
    ctx->pc = 0x1d5454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5458:
    // 0x1d5458: 0x86620162  lh          $v0, 0x162($s3)
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 354)));
label_1d545c:
    // 0x1d545c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d545cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1d5460:
    // 0x1d5460: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1d5460u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1d5464:
    // 0x1d5464: 0x460120c2  mul.s       $f3, $f4, $f1
    ctx->pc = 0x1d5464u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1d5468:
    // 0x1d5468: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x1d5468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1d546c:
    // 0x1d546c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d546cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5470:
    // 0x1d5470: 0x0  nop
    ctx->pc = 0x1d5470u;
    // NOP
label_1d5474:
    // 0x1d5474: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x1d5474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d5478:
    // 0x1d5478: 0x46030540  add.s       $f21, $f0, $f3
    ctx->pc = 0x1d5478u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d547c:
    // 0x1d547c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5480:
    // 0x1d5480: 0x0  nop
    ctx->pc = 0x1d5480u;
    // NOP
label_1d5484:
    // 0x1d5484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d5488:
    // 0x1d5488: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_1d548c:
    if (ctx->pc == 0x1D548Cu) {
        ctx->pc = 0x1D548Cu;
            // 0x1d548c: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1D5490u;
        goto label_1d5490;
    }
    ctx->pc = 0x1D5488u;
    {
        const bool branch_taken_0x1d5488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5488u;
            // 0x1d548c: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5488) {
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D5490u;
label_1d5490:
    // 0x1d5490: 0xc7a002e8  lwc1        $f0, 0x2E8($sp)
    ctx->pc = 0x1d5490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5494:
    // 0x1d5494: 0x86740138  lh          $s4, 0x138($s3)
    ctx->pc = 0x1d5494u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 312)));
label_1d5498:
    // 0x1d5498: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1d5498u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1d549c:
    // 0x1d549c: 0x0  nop
    ctx->pc = 0x1d549cu;
    // NOP
label_1d54a0:
    // 0x1d54a0: 0x0  nop
    ctx->pc = 0x1d54a0u;
    // NOP
label_1d54a4:
    // 0x1d54a4: 0xc0a248c  jal         func_289230
label_1d54a8:
    if (ctx->pc == 0x1D54A8u) {
        ctx->pc = 0x1D54ACu;
        goto label_1d54ac;
    }
    ctx->pc = 0x1D54A4u;
    SET_GPR_U32(ctx, 31, 0x1D54ACu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54ACu; }
        if (ctx->pc != 0x1D54ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54ACu; }
        if (ctx->pc != 0x1D54ACu) { return; }
    }
    ctx->pc = 0x1D54ACu;
label_1d54ac:
    // 0x1d54ac: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x1d54acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d54b0:
    // 0x1d54b0: 0x282a018  mult        $s4, $s4, $v0
    ctx->pc = 0x1d54b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_1d54b4:
    // 0x1d54b4: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1d54b4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1d54b8:
    // 0x1d54b8: 0x0  nop
    ctx->pc = 0x1d54b8u;
    // NOP
label_1d54bc:
    // 0x1d54bc: 0x0  nop
    ctx->pc = 0x1d54bcu;
    // NOP
label_1d54c0:
    // 0x1d54c0: 0xc0a248c  jal         func_289230
label_1d54c4:
    if (ctx->pc == 0x1D54C4u) {
        ctx->pc = 0x1D54C8u;
        goto label_1d54c8;
    }
    ctx->pc = 0x1D54C0u;
    SET_GPR_U32(ctx, 31, 0x1D54C8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54C8u; }
        if (ctx->pc != 0x1D54C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54C8u; }
        if (ctx->pc != 0x1D54C8u) { return; }
    }
    ctx->pc = 0x1D54C8u;
label_1d54c8:
    // 0x1d54c8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1d54cc:
    // 0x1d54cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d54d0:
    // 0x1d54d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d54d4:
    // 0x1d54d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d54d8:
    // 0x1d54d8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1d54dc:
    // 0x1d54dc: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x1d54dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1d54e0:
    // 0x1d54e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d54e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d54e4:
    // 0x1d54e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d54e8:
    if (ctx->pc == 0x1D54E8u) {
        ctx->pc = 0x1D54ECu;
        goto label_1d54ec;
    }
    ctx->pc = 0x1D54E4u;
    {
        const bool branch_taken_0x1d54e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d54e4) {
            ctx->pc = 0x1D54F4u;
            goto label_1d54f4;
        }
    }
    ctx->pc = 0x1D54ECu;
label_1d54ec:
    // 0x1d54ec: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1d54f0:
    if (ctx->pc == 0x1D54F0u) {
        ctx->pc = 0x1D54F0u;
            // 0x1d54f0: 0x26100310  addiu       $s0, $s0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
        ctx->pc = 0x1D54F4u;
        goto label_1d54f4;
    }
    ctx->pc = 0x1D54ECu;
    {
        const bool branch_taken_0x1d54ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54ECu;
            // 0x1d54f0: 0x26100310  addiu       $s0, $s0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54ec) {
            ctx->pc = 0x1D559Cu;
            goto label_1d559c;
        }
    }
    ctx->pc = 0x1D54F4u;
label_1d54f4:
    // 0x1d54f4: 0x0  nop
    ctx->pc = 0x1d54f4u;
    // NOP
label_1d54f8:
    // 0x1d54f8: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1d54fc:
    // 0x1d54fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d5500:
    if (ctx->pc == 0x1D5500u) {
        ctx->pc = 0x1D5500u;
            // 0x1d5500: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1D5504u;
        goto label_1d5504;
    }
    ctx->pc = 0x1D54FCu;
    {
        const bool branch_taken_0x1d54fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54FCu;
            // 0x1d5500: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54fc) {
            ctx->pc = 0x1D5520u;
            goto label_1d5520;
        }
    }
    ctx->pc = 0x1D5504u;
label_1d5504:
    // 0x1d5504: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5508:
    // 0x1d5508: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d5508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d550c:
    // 0x1d550c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d550cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5510:
    // 0x1d5510: 0xc04d320  jal         func_134C80
label_1d5514:
    if (ctx->pc == 0x1D5514u) {
        ctx->pc = 0x1D5514u;
            // 0x1d5514: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5518u;
        goto label_1d5518;
    }
    ctx->pc = 0x1D5510u;
    SET_GPR_U32(ctx, 31, 0x1D5518u);
    ctx->pc = 0x1D5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5510u;
            // 0x1d5514: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5518u; }
        if (ctx->pc != 0x1D5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5518u; }
        if (ctx->pc != 0x1D5518u) { return; }
    }
    ctx->pc = 0x1D5518u;
label_1d5518:
    // 0x1d5518: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d551c:
    if (ctx->pc == 0x1D551Cu) {
        ctx->pc = 0x1D5520u;
        goto label_1d5520;
    }
    ctx->pc = 0x1D5518u;
    {
        const bool branch_taken_0x1d5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5518) {
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D5520u;
label_1d5520:
    // 0x1d5520: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_1d5524:
    if (ctx->pc == 0x1D5524u) {
        ctx->pc = 0x1D5524u;
            // 0x1d5524: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x1D5528u;
        goto label_1d5528;
    }
    ctx->pc = 0x1D5520u;
    {
        const bool branch_taken_0x1d5520 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5520u;
            // 0x1d5524: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5520) {
            ctx->pc = 0x1D5544u;
            goto label_1d5544;
        }
    }
    ctx->pc = 0x1D5528u;
label_1d5528:
    // 0x1d5528: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d552c:
    // 0x1d552c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d552cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5530:
    // 0x1d5530: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d5530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5534:
    // 0x1d5534: 0xc04d320  jal         func_134C80
label_1d5538:
    if (ctx->pc == 0x1D5538u) {
        ctx->pc = 0x1D5538u;
            // 0x1d5538: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1D553Cu;
        goto label_1d553c;
    }
    ctx->pc = 0x1D5534u;
    SET_GPR_U32(ctx, 31, 0x1D553Cu);
    ctx->pc = 0x1D5538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5534u;
            // 0x1d5538: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D553Cu; }
        if (ctx->pc != 0x1D553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D553Cu; }
        if (ctx->pc != 0x1D553Cu) { return; }
    }
    ctx->pc = 0x1D553Cu;
label_1d553c:
    // 0x1d553c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d5540:
    if (ctx->pc == 0x1D5540u) {
        ctx->pc = 0x1D5544u;
        goto label_1d5544;
    }
    ctx->pc = 0x1D553Cu;
    {
        const bool branch_taken_0x1d553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d553c) {
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D5544u;
label_1d5544:
    // 0x1d5544: 0x0  nop
    ctx->pc = 0x1d5544u;
    // NOP
label_1d5548:
    // 0x1d5548: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1d5548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1d554c:
    // 0x1d554c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5550:
    // 0x1d5550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5554:
    // 0x1d5554: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d5554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5558:
    // 0x1d5558: 0xc04d320  jal         func_134C80
label_1d555c:
    if (ctx->pc == 0x1D555Cu) {
        ctx->pc = 0x1D555Cu;
            // 0x1d555c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5560u;
        goto label_1d5560;
    }
    ctx->pc = 0x1D5558u;
    SET_GPR_U32(ctx, 31, 0x1D5560u);
    ctx->pc = 0x1D555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5558u;
            // 0x1d555c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5560u; }
        if (ctx->pc != 0x1D5560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5560u; }
        if (ctx->pc != 0x1D5560u) { return; }
    }
    ctx->pc = 0x1D5560u;
label_1d5560:
    // 0x1d5560: 0xc0a248c  jal         func_289230
label_1d5564:
    if (ctx->pc == 0x1D5564u) {
        ctx->pc = 0x1D5564u;
            // 0x1d5564: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x1D5568u;
        goto label_1d5568;
    }
    ctx->pc = 0x1D5560u;
    SET_GPR_U32(ctx, 31, 0x1D5568u);
    ctx->pc = 0x1D5564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5560u;
            // 0x1d5564: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5568u; }
        if (ctx->pc != 0x1D5568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5568u; }
        if (ctx->pc != 0x1D5568u) { return; }
    }
    ctx->pc = 0x1D5568u;
label_1d5568:
    // 0x1d5568: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d5568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1d556c:
    // 0x1d556c: 0xc0a248c  jal         func_289230
label_1d5570:
    if (ctx->pc == 0x1D5570u) {
        ctx->pc = 0x1D5570u;
            // 0x1d5570: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5574u;
        goto label_1d5574;
    }
    ctx->pc = 0x1D556Cu;
    SET_GPR_U32(ctx, 31, 0x1D5574u);
    ctx->pc = 0x1D5570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D556Cu;
            // 0x1d5570: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5574u; }
        if (ctx->pc != 0x1D5574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5574u; }
        if (ctx->pc != 0x1D5574u) { return; }
    }
    ctx->pc = 0x1D5574u;
label_1d5574:
    // 0x1d5574: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d5574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d5578:
    // 0x1d5578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d557c:
    // 0x1d557c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d557cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5580:
    // 0x1d5580: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1d5580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d5584:
    // 0x1d5584: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1d5584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d5588:
    // 0x1d5588: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d558c:
    // 0x1d558c: 0xc079f7c  jal         func_1E7DF0
label_1d5590:
    if (ctx->pc == 0x1D5590u) {
        ctx->pc = 0x1D5590u;
            // 0x1d5590: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5594u;
        goto label_1d5594;
    }
    ctx->pc = 0x1D558Cu;
    SET_GPR_U32(ctx, 31, 0x1D5594u);
    ctx->pc = 0x1D5590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D558Cu;
            // 0x1d5590: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5594u; }
        if (ctx->pc != 0x1D5594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5594u; }
        if (ctx->pc != 0x1D5594u) { return; }
    }
    ctx->pc = 0x1D5594u;
label_1d5594:
    // 0x1d5594: 0x0  nop
    ctx->pc = 0x1d5594u;
    // NOP
label_1d5598:
    // 0x1d5598: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x1d5598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_1d559c:
    // 0x1d559c: 0x0  nop
    ctx->pc = 0x1d559cu;
    // NOP
label_1d55a0:
    // 0x1d55a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d55a4:
    // 0x1d55a4: 0x0  nop
    ctx->pc = 0x1d55a4u;
    // NOP
label_1d55a8:
    // 0x1d55a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1d55ac:
    // 0x1d55ac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d55acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d55b0:
    // 0x1d55b0: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_1d55b4:
    if (ctx->pc == 0x1D55B4u) {
        ctx->pc = 0x1D55B8u;
        goto label_1d55b8;
    }
    ctx->pc = 0x1D55B0u;
    {
        const bool branch_taken_0x1d55b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55b0) {
            ctx->pc = 0x1D53BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d53bc;
        }
    }
    ctx->pc = 0x1D55B8u;
label_1d55b8:
    // 0x1d55b8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1d55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1d55bc:
    // 0x1d55bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d55bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d55c0:
    // 0x1d55c0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1d55c4:
    // 0x1d55c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d55c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d55c8:
    // 0x1d55c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d55c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d55cc:
    // 0x1d55cc: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x1d55ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d55d0:
    // 0x1d55d0: 0xc079fd8  jal         func_1E7F60
label_1d55d4:
    if (ctx->pc == 0x1D55D4u) {
        ctx->pc = 0x1D55D4u;
            // 0x1d55d4: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1D55D8u;
        goto label_1d55d8;
    }
    ctx->pc = 0x1D55D0u;
    SET_GPR_U32(ctx, 31, 0x1D55D8u);
    ctx->pc = 0x1D55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55D0u;
            // 0x1d55d4: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55D8u; }
        if (ctx->pc != 0x1D55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55D8u; }
        if (ctx->pc != 0x1D55D8u) { return; }
    }
    ctx->pc = 0x1D55D8u;
label_1d55d8:
    // 0x1d55d8: 0xc04d1a4  jal         func_134690
label_1d55dc:
    if (ctx->pc == 0x1D55DCu) {
        ctx->pc = 0x1D55DCu;
            // 0x1d55dc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D55E0u;
        goto label_1d55e0;
    }
    ctx->pc = 0x1D55D8u;
    SET_GPR_U32(ctx, 31, 0x1D55E0u);
    ctx->pc = 0x1D55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55D8u;
            // 0x1d55dc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55E0u; }
        if (ctx->pc != 0x1D55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55E0u; }
        if (ctx->pc != 0x1D55E0u) { return; }
    }
    ctx->pc = 0x1D55E0u;
label_1d55e0:
    // 0x1d55e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d55e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d55e4:
    // 0x1d55e4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d55e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d55e8:
    // 0x1d55e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d55e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d55ec:
    // 0x1d55ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d55ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d55f0:
    // 0x1d55f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d55f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d55f4:
    // 0x1d55f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d55f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d55f8:
    // 0x1d55f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d55f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d55fc:
    // 0x1d55fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d55fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d5600:
    // 0x1d5600: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d5600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5604:
    // 0x1d5604: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5608:
    // 0x1d5608: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d560c:
    // 0x1d560c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d560cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5610:
    // 0x1d5610: 0x3e00008  jr          $ra
label_1d5614:
    if (ctx->pc == 0x1D5614u) {
        ctx->pc = 0x1D5614u;
            // 0x1d5614: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x1D5618u;
        goto label_fallthrough_0x1d5610;
    }
    ctx->pc = 0x1D5610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5610u;
            // 0x1d5614: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d5610:
    ctx->pc = 0x1D5618u;
}
