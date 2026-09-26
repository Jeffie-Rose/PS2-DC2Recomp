#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaAnalyzeSelect__FP12CMenuGeoramaii
// Address: 0x1fc4c0 - 0x1fc6a4
void MenuGeoramaAnalyzeSelect__FP12CMenuGeoramaii_0x1fc4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaAnalyzeSelect__FP12CMenuGeoramaii_0x1fc4c0");
#endif

    switch (ctx->pc) {
        case 0x1fc4f0u: goto label_1fc4f0;
        case 0x1fc60cu: goto label_1fc60c;
        case 0x1fc614u: goto label_1fc614;
        case 0x1fc644u: goto label_1fc644;
        case 0x1fc670u: goto label_1fc670;
        case 0x1fc684u: goto label_1fc684;
        default: break;
    }

    ctx->pc = 0x1fc4c0u;

    // 0x1fc4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc4c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fc4c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc4cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc4d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fc4d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc4d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc4e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fc4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4e4: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x1fc4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1fc4e8: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1FC4E8u;
    SET_GPR_U32(ctx, 31, 0x1FC4F0u);
    ctx->pc = 0x1FC4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4E8u;
            // 0x1fc4ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4F0u; }
        if (ctx->pc != 0x1FC4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4F0u; }
        if (ctx->pc != 0x1FC4F0u) { return; }
    }
    ctx->pc = 0x1FC4F0u;
label_1fc4f0:
    // 0x1fc4f0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1fc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1fc4f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC4F4u;
    {
        const bool branch_taken_0x1fc4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4F4u;
            // 0x1fc4f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4f4) {
            ctx->pc = 0x1FC508u;
            goto label_1fc508;
        }
    }
    ctx->pc = 0x1FC4FCu;
    // 0x1fc4fc: 0x32430010  andi        $v1, $s2, 0x10
    ctx->pc = 0x1fc4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x1fc500: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC500u;
    {
        const bool branch_taken_0x1fc500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC500u;
            // 0x1fc504: 0x32430002  andi        $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc500) {
            ctx->pc = 0x1FC510u;
            goto label_1fc510;
        }
    }
    ctx->pc = 0x1FC508u;
label_1fc508:
    // 0x1fc508: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fc50c: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1fc50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_1fc510:
    // 0x1fc510: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC510u;
    {
        const bool branch_taken_0x1fc510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC510u;
            // 0x1fc514: 0x32430020  andi        $v1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc510) {
            ctx->pc = 0x1FC520u;
            goto label_1fc520;
        }
    }
    ctx->pc = 0x1FC518u;
    // 0x1fc518: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC518u;
    {
        const bool branch_taken_0x1fc518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc518) {
            ctx->pc = 0x1FC524u;
            goto label_1fc524;
        }
    }
    ctx->pc = 0x1FC520u;
label_1fc520:
    // 0x1fc520: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fc520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1fc524:
    // 0x1fc524: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x1fc528: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fc52c: 0xae630154  sw          $v1, 0x154($s3)
    ctx->pc = 0x1fc52cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 3));
    // 0x1fc530: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x1fc530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x1fc534: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC534u;
    {
        const bool branch_taken_0x1fc534 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fc534) {
            ctx->pc = 0x1FC540u;
            goto label_1fc540;
        }
    }
    ctx->pc = 0x1FC53Cu;
    // 0x1fc53c: 0xae600154  sw          $zero, 0x154($s3)
    ctx->pc = 0x1fc53cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 0));
label_1fc540:
    // 0x1fc540: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x1fc540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x1fc544: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1fc544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fc548: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC548u;
    {
        const bool branch_taken_0x1fc548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc548) {
            ctx->pc = 0x1FC554u;
            goto label_1fc554;
        }
    }
    ctx->pc = 0x1FC550u;
    // 0x1fc550: 0xae620154  sw          $v0, 0x154($s3)
    ctx->pc = 0x1fc550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 2));
label_1fc554:
    // 0x1fc554: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x1fc554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x1fc558: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1fc55c: 0x24429310  addiu       $v0, $v0, -0x6CF0
    ctx->pc = 0x1fc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939408));
    // 0x1fc560: 0xc7819010  lwc1        $f1, -0x6FF0($gp)
    ctx->pc = 0x1fc560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc56c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fc56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc570: 0xe7809014  swc1        $f0, -0x6FEC($gp)
    ctx->pc = 0x1fc570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938644), bits); }
    // 0x1fc574: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1fc574u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1fc578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fc578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fc57c: 0x0  nop
    ctx->pc = 0x1fc57cu;
    // NOP
    // 0x1fc580: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC580u;
    {
        const bool branch_taken_0x1fc580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FC584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC580u;
            // 0x1fc584: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc580) {
            ctx->pc = 0x1FC590u;
            goto label_1fc590;
        }
    }
    ctx->pc = 0x1FC588u;
    // 0x1fc588: 0xe7819014  swc1        $f1, -0x6FEC($gp)
    ctx->pc = 0x1fc588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938644), bits); }
    // 0x1fc58c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fc58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fc590:
    // 0x1fc590: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1fc590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1fc594: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1fc598: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1fc598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1fc59c: 0x8c26b8e8  lw          $a2, -0x4718($at)
    ctx->pc = 0x1fc59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949096)));
    // 0x1fc5a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fc5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fc5a4: 0x3463b854  ori         $v1, $v1, 0xB854
    ctx->pc = 0x1fc5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47188);
    // 0x1fc5a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1fc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1fc5ac: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fc5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fc5b0: 0xc7819014  lwc1        $f1, -0x6FEC($gp)
    ctx->pc = 0x1fc5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc5b8: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x1fc5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fc5bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fc5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fc5c0: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1fc5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1fc5c4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1fc5c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1fc5c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1fc5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fc5cc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1fc5ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1fc5d0: 0xc421b854  lwc1        $f1, -0x47AC($at)
    ctx->pc = 0x1fc5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc5d4: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1fc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1fc5d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fc5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fc5dc: 0x3421b8bc  ori         $at, $at, 0xB8BC
    ctx->pc = 0x1fc5dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47292);
    // 0x1fc5e0: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x1fc5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fc5e4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1fc5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fc5e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fc5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fc5ec: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1fc5f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fc5f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1fc5f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fc5f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fc5f8: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1fc5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fc5fc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1fc5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1fc600: 0xc420b854  lwc1        $f0, -0x47AC($at)
    ctx->pc = 0x1fc600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc604: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1FC604u;
    SET_GPR_U32(ctx, 31, 0x1FC60Cu);
    ctx->pc = 0x1FC608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC604u;
            // 0x1fc608: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC60Cu; }
        if (ctx->pc != 0x1FC60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC60Cu; }
        if (ctx->pc != 0x1FC60Cu) { return; }
    }
    ctx->pc = 0x1FC60Cu;
label_1fc60c:
    // 0x1fc60c: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x1FC60Cu;
    SET_GPR_U32(ctx, 31, 0x1FC614u);
    ctx->pc = 0x1FC610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC60Cu;
            // 0x1fc610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC614u; }
        if (ctx->pc != 0x1FC614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC614u; }
        if (ctx->pc != 0x1FC614u) { return; }
    }
    ctx->pc = 0x1FC614u;
label_1fc614:
    // 0x1fc614: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FC618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC614u;
            // 0x1fc618: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC628u;
            goto label_1fc628;
        }
    }
    ctx->pc = 0x1FC61Cu;
    // 0x1fc61c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1fc61cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1fc620: 0xc420b854  lwc1        $f0, -0x47AC($at)
    ctx->pc = 0x1fc620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc624: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1fc624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1fc628:
    // 0x1fc628: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x1fc628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x1fc62c: 0xae620150  sw          $v0, 0x150($s3)
    ctx->pc = 0x1fc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
    // 0x1fc630: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x1fc630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x1fc634: 0x8e660154  lw          $a2, 0x154($s3)
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x1fc638: 0x8e670150  lw          $a3, 0x150($s3)
    ctx->pc = 0x1fc638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x1fc63c: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1FC63Cu;
    SET_GPR_U32(ctx, 31, 0x1FC644u);
    ctx->pc = 0x1FC640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC63Cu;
            // 0x1fc640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC644u; }
        if (ctx->pc != 0x1FC644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC644u; }
        if (ctx->pc != 0x1FC644u) { return; }
    }
    ctx->pc = 0x1FC644u;
label_1fc644:
    // 0x1fc644: 0x8e620150  lw          $v0, 0x150($s3)
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x1fc648: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC648u;
    {
        const bool branch_taken_0x1fc648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC648u;
            // 0x1fc64c: 0x202082a  slt         $at, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc648) {
            ctx->pc = 0x1FC670u;
            goto label_1fc670;
        }
    }
    ctx->pc = 0x1FC650u;
    // 0x1fc650: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC650u;
    {
        const bool branch_taken_0x1fc650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC650u;
            // 0x1fc654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc650) {
            ctx->pc = 0x1FC65Cu;
            goto label_1fc65c;
        }
    }
    ctx->pc = 0x1FC658u;
    // 0x1fc658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc65c:
    // 0x1fc65c: 0xa782903c  sh          $v0, -0x6FC4($gp)
    ctx->pc = 0x1fc65cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938684), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fc660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fc660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc668: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC668u;
    SET_GPR_U32(ctx, 31, 0x1FC670u);
    ctx->pc = 0x1FC66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC668u;
            // 0x1fc66c: 0xa3828184  sb          $v0, -0x7E7C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934916), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC670u; }
        if (ctx->pc != 0x1FC670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC670u; }
        if (ctx->pc != 0x1FC670u) { return; }
    }
    ctx->pc = 0x1FC670u;
label_1fc670:
    // 0x1fc670: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1fc670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1fc674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC674u;
    {
        const bool branch_taken_0x1fc674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC674u;
            // 0x1fc678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc674) {
            ctx->pc = 0x1FC684u;
            goto label_1fc684;
        }
    }
    ctx->pc = 0x1FC67Cu;
    // 0x1fc67c: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FC67Cu;
    SET_GPR_U32(ctx, 31, 0x1FC684u);
    ctx->pc = 0x1FC680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC67Cu;
            // 0x1fc680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC684u; }
        if (ctx->pc != 0x1FC684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC684u; }
        if (ctx->pc != 0x1FC684u) { return; }
    }
    ctx->pc = 0x1FC684u;
label_1fc684:
    // 0x1fc684: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fc684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc68c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc69c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC69Cu;
            // 0x1fc6a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC6A4u;
}
