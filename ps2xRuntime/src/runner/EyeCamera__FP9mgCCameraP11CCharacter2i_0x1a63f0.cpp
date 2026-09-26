#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EyeCamera__FP9mgCCameraP11CCharacter2i
// Address: 0x1a63f0 - 0x1a66f0
void EyeCamera__FP9mgCCameraP11CCharacter2i_0x1a63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EyeCamera__FP9mgCCameraP11CCharacter2i_0x1a63f0");
#endif

    switch (ctx->pc) {
        case 0x1a63f0u: goto label_1a63f0;
        case 0x1a63f4u: goto label_1a63f4;
        case 0x1a63f8u: goto label_1a63f8;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6400u: goto label_1a6400;
        case 0x1a6404u: goto label_1a6404;
        case 0x1a6408u: goto label_1a6408;
        case 0x1a640cu: goto label_1a640c;
        case 0x1a6410u: goto label_1a6410;
        case 0x1a6414u: goto label_1a6414;
        case 0x1a6418u: goto label_1a6418;
        case 0x1a641cu: goto label_1a641c;
        case 0x1a6420u: goto label_1a6420;
        case 0x1a6424u: goto label_1a6424;
        case 0x1a6428u: goto label_1a6428;
        case 0x1a642cu: goto label_1a642c;
        case 0x1a6430u: goto label_1a6430;
        case 0x1a6434u: goto label_1a6434;
        case 0x1a6438u: goto label_1a6438;
        case 0x1a643cu: goto label_1a643c;
        case 0x1a6440u: goto label_1a6440;
        case 0x1a6444u: goto label_1a6444;
        case 0x1a6448u: goto label_1a6448;
        case 0x1a644cu: goto label_1a644c;
        case 0x1a6450u: goto label_1a6450;
        case 0x1a6454u: goto label_1a6454;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a645cu: goto label_1a645c;
        case 0x1a6460u: goto label_1a6460;
        case 0x1a6464u: goto label_1a6464;
        case 0x1a6468u: goto label_1a6468;
        case 0x1a646cu: goto label_1a646c;
        case 0x1a6470u: goto label_1a6470;
        case 0x1a6474u: goto label_1a6474;
        case 0x1a6478u: goto label_1a6478;
        case 0x1a647cu: goto label_1a647c;
        case 0x1a6480u: goto label_1a6480;
        case 0x1a6484u: goto label_1a6484;
        case 0x1a6488u: goto label_1a6488;
        case 0x1a648cu: goto label_1a648c;
        case 0x1a6490u: goto label_1a6490;
        case 0x1a6494u: goto label_1a6494;
        case 0x1a6498u: goto label_1a6498;
        case 0x1a649cu: goto label_1a649c;
        case 0x1a64a0u: goto label_1a64a0;
        case 0x1a64a4u: goto label_1a64a4;
        case 0x1a64a8u: goto label_1a64a8;
        case 0x1a64acu: goto label_1a64ac;
        case 0x1a64b0u: goto label_1a64b0;
        case 0x1a64b4u: goto label_1a64b4;
        case 0x1a64b8u: goto label_1a64b8;
        case 0x1a64bcu: goto label_1a64bc;
        case 0x1a64c0u: goto label_1a64c0;
        case 0x1a64c4u: goto label_1a64c4;
        case 0x1a64c8u: goto label_1a64c8;
        case 0x1a64ccu: goto label_1a64cc;
        case 0x1a64d0u: goto label_1a64d0;
        case 0x1a64d4u: goto label_1a64d4;
        case 0x1a64d8u: goto label_1a64d8;
        case 0x1a64dcu: goto label_1a64dc;
        case 0x1a64e0u: goto label_1a64e0;
        case 0x1a64e4u: goto label_1a64e4;
        case 0x1a64e8u: goto label_1a64e8;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a64f0u: goto label_1a64f0;
        case 0x1a64f4u: goto label_1a64f4;
        case 0x1a64f8u: goto label_1a64f8;
        case 0x1a64fcu: goto label_1a64fc;
        case 0x1a6500u: goto label_1a6500;
        case 0x1a6504u: goto label_1a6504;
        case 0x1a6508u: goto label_1a6508;
        case 0x1a650cu: goto label_1a650c;
        case 0x1a6510u: goto label_1a6510;
        case 0x1a6514u: goto label_1a6514;
        case 0x1a6518u: goto label_1a6518;
        case 0x1a651cu: goto label_1a651c;
        case 0x1a6520u: goto label_1a6520;
        case 0x1a6524u: goto label_1a6524;
        case 0x1a6528u: goto label_1a6528;
        case 0x1a652cu: goto label_1a652c;
        case 0x1a6530u: goto label_1a6530;
        case 0x1a6534u: goto label_1a6534;
        case 0x1a6538u: goto label_1a6538;
        case 0x1a653cu: goto label_1a653c;
        case 0x1a6540u: goto label_1a6540;
        case 0x1a6544u: goto label_1a6544;
        case 0x1a6548u: goto label_1a6548;
        case 0x1a654cu: goto label_1a654c;
        case 0x1a6550u: goto label_1a6550;
        case 0x1a6554u: goto label_1a6554;
        case 0x1a6558u: goto label_1a6558;
        case 0x1a655cu: goto label_1a655c;
        case 0x1a6560u: goto label_1a6560;
        case 0x1a6564u: goto label_1a6564;
        case 0x1a6568u: goto label_1a6568;
        case 0x1a656cu: goto label_1a656c;
        case 0x1a6570u: goto label_1a6570;
        case 0x1a6574u: goto label_1a6574;
        case 0x1a6578u: goto label_1a6578;
        case 0x1a657cu: goto label_1a657c;
        case 0x1a6580u: goto label_1a6580;
        case 0x1a6584u: goto label_1a6584;
        case 0x1a6588u: goto label_1a6588;
        case 0x1a658cu: goto label_1a658c;
        case 0x1a6590u: goto label_1a6590;
        case 0x1a6594u: goto label_1a6594;
        case 0x1a6598u: goto label_1a6598;
        case 0x1a659cu: goto label_1a659c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65a4u: goto label_1a65a4;
        case 0x1a65a8u: goto label_1a65a8;
        case 0x1a65acu: goto label_1a65ac;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65b4u: goto label_1a65b4;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a65bcu: goto label_1a65bc;
        case 0x1a65c0u: goto label_1a65c0;
        case 0x1a65c4u: goto label_1a65c4;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65d4u: goto label_1a65d4;
        case 0x1a65d8u: goto label_1a65d8;
        case 0x1a65dcu: goto label_1a65dc;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65e4u: goto label_1a65e4;
        case 0x1a65e8u: goto label_1a65e8;
        case 0x1a65ecu: goto label_1a65ec;
        case 0x1a65f0u: goto label_1a65f0;
        case 0x1a65f4u: goto label_1a65f4;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a65fcu: goto label_1a65fc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6604u: goto label_1a6604;
        case 0x1a6608u: goto label_1a6608;
        case 0x1a660cu: goto label_1a660c;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66e8u: goto label_1a66e8;
        case 0x1a66ecu: goto label_1a66ec;
        default: break;
    }

    ctx->pc = 0x1a63f0u;

label_1a63f0:
    // 0x1a63f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1a63f4:
    // 0x1a63f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a63f8:
    // 0x1a63f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a63f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a63fc:
    // 0x1a63fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a63fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a6400:
    // 0x1a6400: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a6400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6404:
    // 0x1a6404: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a6404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a6408:
    // 0x1a6408: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a6408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a640c:
    // 0x1a640c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a6410:
    // 0x1a6410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6414:
    // 0x1a6414: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a6414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a6418:
    // 0x1a6418: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a641c:
    // 0x1a641c: 0xc050e84  jal         func_143A10
label_1a6420:
    if (ctx->pc == 0x1A6420u) {
        ctx->pc = 0x1A6420u;
            // 0x1a6420: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1A6424u;
        goto label_1a6424;
    }
    ctx->pc = 0x1A641Cu;
    SET_GPR_U32(ctx, 31, 0x1A6424u);
    ctx->pc = 0x1A6420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A641Cu;
            // 0x1a6420: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143A10u;
    if (runtime->hasFunction(0x143A10u)) {
        auto targetFn = runtime->lookupFunction(0x143A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6424u; }
        if (ctx->pc != 0x1A6424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAllScissorFlag__Fi_0x143a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6424u; }
        if (ctx->pc != 0x1A6424u) { return; }
    }
    ctx->pc = 0x1A6424u;
label_1a6424:
    // 0x1a6424: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1a6428:
    if (ctx->pc == 0x1A6428u) {
        ctx->pc = 0x1A6428u;
            // 0x1a6428: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1A642Cu;
        goto label_1a642c;
    }
    ctx->pc = 0x1A6424u;
    {
        const bool branch_taken_0x1a6424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6424u;
            // 0x1a6428: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6424) {
            ctx->pc = 0x1A6444u;
            goto label_1a6444;
        }
    }
    ctx->pc = 0x1A642Cu;
label_1a642c:
    // 0x1a642c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a642cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a6430:
    // 0x1a6430: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a6430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a6434:
    // 0x1a6434: 0xc052cb0  jal         func_14B2C0
label_1a6438:
    if (ctx->pc == 0x1A6438u) {
        ctx->pc = 0x1A6438u;
            // 0x1a6438: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A643Cu;
        goto label_1a643c;
    }
    ctx->pc = 0x1A6434u;
    SET_GPR_U32(ctx, 31, 0x1A643Cu);
    ctx->pc = 0x1A6438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6434u;
            // 0x1a6438: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A643Cu; }
        if (ctx->pc != 0x1A643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A643Cu; }
        if (ctx->pc != 0x1A643Cu) { return; }
    }
    ctx->pc = 0x1A643Cu;
label_1a643c:
    // 0x1a643c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a6440:
    if (ctx->pc == 0x1A6440u) {
        ctx->pc = 0x1A6440u;
            // 0x1a6440: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1A6444u;
        goto label_1a6444;
    }
    ctx->pc = 0x1A643Cu;
    {
        const bool branch_taken_0x1a643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A643Cu;
            // 0x1a6440: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a643c) {
            ctx->pc = 0x1A6460u;
            goto label_1a6460;
        }
    }
    ctx->pc = 0x1A6444u;
label_1a6444:
    // 0x1a6444: 0xc052cc0  jal         func_14B300
label_1a6448:
    if (ctx->pc == 0x1A6448u) {
        ctx->pc = 0x1A6448u;
            // 0x1a6448: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A644Cu;
        goto label_1a644c;
    }
    ctx->pc = 0x1A6444u;
    SET_GPR_U32(ctx, 31, 0x1A644Cu);
    ctx->pc = 0x1A6448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6444u;
            // 0x1a6448: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A644Cu; }
        if (ctx->pc != 0x1A644Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A644Cu; }
        if (ctx->pc != 0x1A644Cu) { return; }
    }
    ctx->pc = 0x1A644Cu;
label_1a644c:
    // 0x1a644c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a644cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a6450:
    // 0x1a6450: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a6450u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a6454:
    // 0x1a6454: 0xc052cd0  jal         func_14B340
label_1a6458:
    if (ctx->pc == 0x1A6458u) {
        ctx->pc = 0x1A6458u;
            // 0x1a6458: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A645Cu;
        goto label_1a645c;
    }
    ctx->pc = 0x1A6454u;
    SET_GPR_U32(ctx, 31, 0x1A645Cu);
    ctx->pc = 0x1A6458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6454u;
            // 0x1a6458: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A645Cu; }
        if (ctx->pc != 0x1A645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A645Cu; }
        if (ctx->pc != 0x1A645Cu) { return; }
    }
    ctx->pc = 0x1A645Cu;
label_1a645c:
    // 0x1a645c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1a645cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1a6460:
    // 0x1a6460: 0xc064220  jal         func_190880
label_1a6464:
    if (ctx->pc == 0x1A6464u) {
        ctx->pc = 0x1A6468u;
        goto label_1a6468;
    }
    ctx->pc = 0x1A6460u;
    SET_GPR_U32(ctx, 31, 0x1A6468u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6468u; }
        if (ctx->pc != 0x1A6468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6468u; }
        if (ctx->pc != 0x1A6468u) { return; }
    }
    ctx->pc = 0x1A6468u;
label_1a6468:
    // 0x1a6468: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a6468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a646c:
    // 0x1a646c: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1a646cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1a6470:
    // 0x1a6470: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1a6474:
    // 0x1a6474: 0x80420036  lb          $v0, 0x36($v0)
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
label_1a6478:
    // 0x1a6478: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a647c:
    if (ctx->pc == 0x1A647Cu) {
        ctx->pc = 0x1A6480u;
        goto label_1a6480;
    }
    ctx->pc = 0x1A6478u;
    {
        const bool branch_taken_0x1a6478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6478) {
            ctx->pc = 0x1A6484u;
            goto label_1a6484;
        }
    }
    ctx->pc = 0x1A6480u;
label_1a6480:
    // 0x1a6480: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x1a6480u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_1a6484:
    // 0x1a6484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6488:
    // 0x1a6488: 0x0  nop
    ctx->pc = 0x1a6488u;
    // NOP
label_1a648c:
    // 0x1a648c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1a648cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6490:
    // 0x1a6490: 0x0  nop
    ctx->pc = 0x1a6490u;
    // NOP
label_1a6494:
    // 0x1a6494: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1a6498:
    if (ctx->pc == 0x1A6498u) {
        ctx->pc = 0x1A6498u;
            // 0x1a6498: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1A649Cu;
        goto label_1a649c;
    }
    ctx->pc = 0x1A6494u;
    {
        const bool branch_taken_0x1a6494 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6494u;
            // 0x1a6498: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6494) {
            ctx->pc = 0x1A64E8u;
            goto label_1a64e8;
        }
    }
    ctx->pc = 0x1A649Cu;
label_1a649c:
    // 0x1a649c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a64a0:
    // 0x1a64a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a64a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a64a4:
    // 0x1a64a4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a64a8:
    // 0x1a64a8: 0xc7828bc4  lwc1        $f2, -0x743C($gp)
    ctx->pc = 0x1a64a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a64ac:
    // 0x1a64ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a64acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1a64b0:
    // 0x1a64b0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1a64b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a64b4:
    // 0x1a64b4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a64b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a64b8:
    // 0x1a64b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a64b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a64bc:
    // 0x1a64bc: 0x0  nop
    ctx->pc = 0x1a64bcu;
    // NOP
label_1a64c0:
    // 0x1a64c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a64c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a64c4:
    // 0x1a64c4: 0x0  nop
    ctx->pc = 0x1a64c4u;
    // NOP
label_1a64c8:
    // 0x1a64c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a64cc:
    if (ctx->pc == 0x1A64CCu) {
        ctx->pc = 0x1A64CCu;
            // 0x1a64cc: 0xe7818bc4  swc1        $f1, -0x743C($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
        ctx->pc = 0x1A64D0u;
        goto label_1a64d0;
    }
    ctx->pc = 0x1A64C8u;
    {
        const bool branch_taken_0x1a64c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A64CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64C8u;
            // 0x1a64cc: 0xe7818bc4  swc1        $f1, -0x743C($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64c8) {
            ctx->pc = 0x1A64E8u;
            goto label_1a64e8;
        }
    }
    ctx->pc = 0x1A64D0u;
label_1a64d0:
    // 0x1a64d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a64d4:
    // 0x1a64d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a64d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1a64d8:
    // 0x1a64d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a64d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a64dc:
    // 0x1a64dc: 0x0  nop
    ctx->pc = 0x1a64dcu;
    // NOP
label_1a64e0:
    // 0x1a64e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a64e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a64e4:
    // 0x1a64e4: 0xe7808bc4  swc1        $f0, -0x743C($gp)
    ctx->pc = 0x1a64e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
label_1a64e8:
    // 0x1a64e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a64e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a64ec:
    // 0x1a64ec: 0x0  nop
    ctx->pc = 0x1a64ecu;
    // NOP
label_1a64f0:
    // 0x1a64f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a64f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a64f4:
    // 0x1a64f4: 0x0  nop
    ctx->pc = 0x1a64f4u;
    // NOP
label_1a64f8:
    // 0x1a64f8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1a64fc:
    if (ctx->pc == 0x1A64FCu) {
        ctx->pc = 0x1A64FCu;
            // 0x1a64fc: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1A6500u;
        goto label_1a6500;
    }
    ctx->pc = 0x1A64F8u;
    {
        const bool branch_taken_0x1a64f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A64FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64F8u;
            // 0x1a64fc: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64f8) {
            ctx->pc = 0x1A654Cu;
            goto label_1a654c;
        }
    }
    ctx->pc = 0x1A6500u;
label_1a6500:
    // 0x1a6500: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a6500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a6504:
    // 0x1a6504: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a6504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6508:
    // 0x1a6508: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a650c:
    // 0x1a650c: 0xc7828bc4  lwc1        $f2, -0x743C($gp)
    ctx->pc = 0x1a650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6510:
    // 0x1a6510: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1a6514:
    // 0x1a6514: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1a6514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a6518:
    // 0x1a6518: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a6518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a651c:
    // 0x1a651c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a651cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6520:
    // 0x1a6520: 0x0  nop
    ctx->pc = 0x1a6520u;
    // NOP
label_1a6524:
    // 0x1a6524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6528:
    // 0x1a6528: 0x0  nop
    ctx->pc = 0x1a6528u;
    // NOP
label_1a652c:
    // 0x1a652c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a6530:
    if (ctx->pc == 0x1A6530u) {
        ctx->pc = 0x1A6530u;
            // 0x1a6530: 0xe7818bc4  swc1        $f1, -0x743C($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
        ctx->pc = 0x1A6534u;
        goto label_1a6534;
    }
    ctx->pc = 0x1A652Cu;
    {
        const bool branch_taken_0x1a652c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A652Cu;
            // 0x1a6530: 0xe7818bc4  swc1        $f1, -0x743C($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a652c) {
            ctx->pc = 0x1A654Cu;
            goto label_1a654c;
        }
    }
    ctx->pc = 0x1A6534u;
label_1a6534:
    // 0x1a6534: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a6534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a6538:
    // 0x1a6538: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1a653c:
    // 0x1a653c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a653cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6540:
    // 0x1a6540: 0x0  nop
    ctx->pc = 0x1a6540u;
    // NOP
label_1a6544:
    // 0x1a6544: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a6544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a6548:
    // 0x1a6548: 0xe7808bc4  swc1        $f0, -0x743C($gp)
    ctx->pc = 0x1a6548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), bits); }
label_1a654c:
    // 0x1a654c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a654cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6550:
    // 0x1a6550: 0x0  nop
    ctx->pc = 0x1a6550u;
    // NOP
label_1a6554:
    // 0x1a6554: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1a6554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6558:
    // 0x1a6558: 0x0  nop
    ctx->pc = 0x1a6558u;
    // NOP
label_1a655c:
    // 0x1a655c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1a6560:
    if (ctx->pc == 0x1A6560u) {
        ctx->pc = 0x1A6564u;
        goto label_1a6564;
    }
    ctx->pc = 0x1A655Cu;
    {
        const bool branch_taken_0x1a655c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a655c) {
            ctx->pc = 0x1A65A0u;
            goto label_1a65a0;
        }
    }
    ctx->pc = 0x1A6564u;
label_1a6564:
    // 0x1a6564: 0xc7818bc8  lwc1        $f1, -0x7438($gp)
    ctx->pc = 0x1a6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6568:
    // 0x1a6568: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1a6568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_1a656c:
    // 0x1a656c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1a6570:
    // 0x1a6570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6574:
    // 0x1a6574: 0x0  nop
    ctx->pc = 0x1a6574u;
    // NOP
label_1a6578:
    // 0x1a6578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a6578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a657c:
    // 0x1a657c: 0x0  nop
    ctx->pc = 0x1a657cu;
    // NOP
label_1a6580:
    // 0x1a6580: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a6584:
    if (ctx->pc == 0x1A6584u) {
        ctx->pc = 0x1A6584u;
            // 0x1a6584: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1A6588u;
        goto label_1a6588;
    }
    ctx->pc = 0x1A6580u;
    {
        const bool branch_taken_0x1a6580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6580u;
            // 0x1a6584: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6580) {
            ctx->pc = 0x1A65A0u;
            goto label_1a65a0;
        }
    }
    ctx->pc = 0x1A6588u;
label_1a6588:
    // 0x1a6588: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a6588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a658c:
    // 0x1a658c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a658cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6590:
    // 0x1a6590: 0x0  nop
    ctx->pc = 0x1a6590u;
    // NOP
label_1a6594:
    // 0x1a6594: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1a6594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1a6598:
    // 0x1a6598: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a659c:
    // 0x1a659c: 0xe7808bc8  swc1        $f0, -0x7438($gp)
    ctx->pc = 0x1a659cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), bits); }
label_1a65a0:
    // 0x1a65a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a65a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a65a4:
    // 0x1a65a4: 0x0  nop
    ctx->pc = 0x1a65a4u;
    // NOP
label_1a65a8:
    // 0x1a65a8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a65a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a65ac:
    // 0x1a65ac: 0x0  nop
    ctx->pc = 0x1a65acu;
    // NOP
label_1a65b0:
    // 0x1a65b0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1a65b4:
    if (ctx->pc == 0x1A65B4u) {
        ctx->pc = 0x1A65B8u;
        goto label_1a65b8;
    }
    ctx->pc = 0x1A65B0u;
    {
        const bool branch_taken_0x1a65b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a65b0) {
            ctx->pc = 0x1A65F0u;
            goto label_1a65f0;
        }
    }
    ctx->pc = 0x1A65B8u;
label_1a65b8:
    // 0x1a65b8: 0xc7818bc8  lwc1        $f1, -0x7438($gp)
    ctx->pc = 0x1a65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a65bc:
    // 0x1a65bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a65c0:
    // 0x1a65c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a65c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a65c4:
    // 0x1a65c4: 0x0  nop
    ctx->pc = 0x1a65c4u;
    // NOP
label_1a65c8:
    // 0x1a65c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a65c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a65cc:
    // 0x1a65cc: 0x0  nop
    ctx->pc = 0x1a65ccu;
    // NOP
label_1a65d0:
    // 0x1a65d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a65d4:
    if (ctx->pc == 0x1A65D4u) {
        ctx->pc = 0x1A65D4u;
            // 0x1a65d4: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1A65D8u;
        goto label_1a65d8;
    }
    ctx->pc = 0x1A65D0u;
    {
        const bool branch_taken_0x1a65d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A65D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65D0u;
            // 0x1a65d4: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65d0) {
            ctx->pc = 0x1A65F0u;
            goto label_1a65f0;
        }
    }
    ctx->pc = 0x1A65D8u;
label_1a65d8:
    // 0x1a65d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a65d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a65dc:
    // 0x1a65dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a65dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a65e0:
    // 0x1a65e0: 0x0  nop
    ctx->pc = 0x1a65e0u;
    // NOP
label_1a65e4:
    // 0x1a65e4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1a65e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1a65e8:
    // 0x1a65e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a65e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a65ec:
    // 0x1a65ec: 0xe7808bc8  swc1        $f0, -0x7438($gp)
    ctx->pc = 0x1a65ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937544), bits); }
label_1a65f0:
    // 0x1a65f0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1a65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_1a65f4:
    // 0x1a65f4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x1a65f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1a65f8:
    // 0x1a65f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a65fc:
    // 0x1a65fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1a6600:
    // 0x1a6600: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1a6604:
    // 0x1a6604: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a6608:
    // 0x1a6608: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a6608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a660c:
    // 0x1a660c: 0xc041c7a  jal         func_1071E8
label_1a6610:
    if (ctx->pc == 0x1A6610u) {
        ctx->pc = 0x1A6610u;
            // 0x1a6610: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x1A6614u;
        goto label_1a6614;
    }
    ctx->pc = 0x1A660Cu;
    SET_GPR_U32(ctx, 31, 0x1A6614u);
    ctx->pc = 0x1A6610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A660Cu;
            // 0x1a6610: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6614u; }
        if (ctx->pc != 0x1A6614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6614u; }
        if (ctx->pc != 0x1A6614u) { return; }
    }
    ctx->pc = 0x1A6614u;
label_1a6614:
    // 0x1a6614: 0xc78c8bc8  lwc1        $f12, -0x7438($gp)
    ctx->pc = 0x1a6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6618:
    // 0x1a6618: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a661c:
    // 0x1a661c: 0xc041ccc  jal         func_107330
label_1a6620:
    if (ctx->pc == 0x1A6620u) {
        ctx->pc = 0x1A6620u;
            // 0x1a6620: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A6624u;
        goto label_1a6624;
    }
    ctx->pc = 0x1A661Cu;
    SET_GPR_U32(ctx, 31, 0x1A6624u);
    ctx->pc = 0x1A6620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A661Cu;
            // 0x1a6620: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107330u;
    if (runtime->hasFunction(0x107330u)) {
        auto targetFn = runtime->lookupFunction(0x107330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6624u; }
        if (ctx->pc != 0x1A6624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x107330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6624u; }
        if (ctx->pc != 0x1A6624u) { return; }
    }
    ctx->pc = 0x1A6624u;
label_1a6624:
    // 0x1a6624: 0xc78c8bc4  lwc1        $f12, -0x743C($gp)
    ctx->pc = 0x1a6624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6628:
    // 0x1a6628: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a662c:
    // 0x1a662c: 0xc041cf6  jal         func_1073D8
label_1a6630:
    if (ctx->pc == 0x1A6630u) {
        ctx->pc = 0x1A6630u;
            // 0x1a6630: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6634u;
        goto label_1a6634;
    }
    ctx->pc = 0x1A662Cu;
    SET_GPR_U32(ctx, 31, 0x1A6634u);
    ctx->pc = 0x1A6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A662Cu;
            // 0x1a6630: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6634u; }
        if (ctx->pc != 0x1A6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6634u; }
        if (ctx->pc != 0x1A6634u) { return; }
    }
    ctx->pc = 0x1A6634u;
label_1a6634:
    // 0x1a6634: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a6634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1a6638:
    // 0x1a6638: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a6638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a663c:
    // 0x1a663c: 0xc041bb0  jal         func_106EC0
label_1a6640:
    if (ctx->pc == 0x1A6640u) {
        ctx->pc = 0x1A6640u;
            // 0x1a6640: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6644u;
        goto label_1a6644;
    }
    ctx->pc = 0x1A663Cu;
    SET_GPR_U32(ctx, 31, 0x1A6644u);
    ctx->pc = 0x1A6640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A663Cu;
            // 0x1a6640: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6644u; }
        if (ctx->pc != 0x1A6644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6644u; }
        if (ctx->pc != 0x1A6644u) { return; }
    }
    ctx->pc = 0x1A6644u;
label_1a6644:
    // 0x1a6644: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a6644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a6648:
    // 0x1a6648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a664c:
    // 0x1a664c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a664cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6650:
    // 0x1a6650: 0x320f809  jalr        $t9
label_1a6654:
    if (ctx->pc == 0x1A6654u) {
        ctx->pc = 0x1A6654u;
            // 0x1a6654: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A6658u;
        goto label_1a6658;
    }
    ctx->pc = 0x1A6650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6658u);
        ctx->pc = 0x1A6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6650u;
            // 0x1a6654: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6658u; }
            if (ctx->pc != 0x1A6658u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6658u;
label_1a6658:
    // 0x1a6658: 0x27a30064  addiu       $v1, $sp, 0x64
    ctx->pc = 0x1a6658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1a665c:
    // 0x1a665c: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x1a665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_1a6660:
    // 0x1a6660: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a6660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6664:
    // 0x1a6664: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6668:
    // 0x1a6668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a666c:
    // 0x1a666c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a6670:
    // 0x1a6670: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6674:
    // 0x1a6674: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a6674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a6678:
    // 0x1a6678: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a667c:
    // 0x1a667c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6680:
    // 0x1a6680: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6684:
    // 0x1a6684: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a6684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a6688:
    // 0x1a6688: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a668c:
    // 0x1a668c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1a668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6690:
    // 0x1a6690: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a6690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6694:
    // 0x1a6694: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a6694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1a6698:
    // 0x1a6698: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1a6698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a669c:
    // 0x1a669c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1a669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a66a0:
    // 0x1a66a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a66a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a66a4:
    // 0x1a66a4: 0xc04c50c  jal         func_131430
label_1a66a8:
    if (ctx->pc == 0x1A66A8u) {
        ctx->pc = 0x1A66A8u;
            // 0x1a66a8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x1A66ACu;
        goto label_1a66ac;
    }
    ctx->pc = 0x1A66A4u;
    SET_GPR_U32(ctx, 31, 0x1A66ACu);
    ctx->pc = 0x1A66A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66A4u;
            // 0x1a66a8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66ACu; }
        if (ctx->pc != 0x1A66ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66ACu; }
        if (ctx->pc != 0x1A66ACu) { return; }
    }
    ctx->pc = 0x1A66ACu;
label_1a66ac:
    // 0x1a66ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a66acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a66b0:
    // 0x1a66b0: 0xc04c520  jal         func_131480
label_1a66b4:
    if (ctx->pc == 0x1A66B4u) {
        ctx->pc = 0x1A66B4u;
            // 0x1a66b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A66B8u;
        goto label_1a66b8;
    }
    ctx->pc = 0x1A66B0u;
    SET_GPR_U32(ctx, 31, 0x1A66B8u);
    ctx->pc = 0x1A66B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66B0u;
            // 0x1a66b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131480u;
    if (runtime->hasFunction(0x131480u)) {
        auto targetFn = runtime->lookupFunction(0x131480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66B8u; }
        if (ctx->pc != 0x1A66B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFPf_0x131480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66B8u; }
        if (ctx->pc != 0x1A66B8u) { return; }
    }
    ctx->pc = 0x1A66B8u;
label_1a66b8:
    // 0x1a66b8: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a66b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a66bc:
    // 0x1a66bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a66bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a66c0:
    // 0x1a66c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a66c4:
    // 0x1a66c4: 0x320f809  jalr        $t9
label_1a66c8:
    if (ctx->pc == 0x1A66C8u) {
        ctx->pc = 0x1A66C8u;
            // 0x1a66c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A66CCu;
        goto label_1a66cc;
    }
    ctx->pc = 0x1A66C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A66CCu);
        ctx->pc = 0x1A66C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66C4u;
            // 0x1a66c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A66CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A66CCu; }
            if (ctx->pc != 0x1A66CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A66CCu;
label_1a66cc:
    // 0x1a66cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a66ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a66d0:
    // 0x1a66d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a66d4:
    // 0x1a66d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a66d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a66d8:
    // 0x1a66d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a66dc:
    // 0x1a66dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a66dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a66e0:
    // 0x1a66e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a66e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a66e4:
    // 0x1a66e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a66e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a66e8:
    // 0x1a66e8: 0x3e00008  jr          $ra
label_1a66ec:
    if (ctx->pc == 0x1A66ECu) {
        ctx->pc = 0x1A66ECu;
            // 0x1a66ec: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1A66F0u;
        goto label_fallthrough_0x1a66e8;
    }
    ctx->pc = 0x1A66E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A66ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66E8u;
            // 0x1a66ec: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a66e8:
    ctx->pc = 0x1A66F0u;
}
