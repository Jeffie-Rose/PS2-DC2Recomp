#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__14CChillAfterHitFPffi
// Address: 0x1be740 - 0x1beaac
void SetPos__14CChillAfterHitFPffi_0x1be740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__14CChillAfterHitFPffi_0x1be740");
#endif

    switch (ctx->pc) {
        case 0x1be780u: goto label_1be780;
        case 0x1be794u: goto label_1be794;
        case 0x1be7ecu: goto label_1be7ec;
        case 0x1be894u: goto label_1be894;
        case 0x1be8a8u: goto label_1be8a8;
        case 0x1be8ccu: goto label_1be8cc;
        case 0x1be8f0u: goto label_1be8f0;
        case 0x1be914u: goto label_1be914;
        case 0x1be924u: goto label_1be924;
        case 0x1be93cu: goto label_1be93c;
        case 0x1be97cu: goto label_1be97c;
        case 0x1be9a0u: goto label_1be9a0;
        case 0x1be9b0u: goto label_1be9b0;
        case 0x1be9c0u: goto label_1be9c0;
        case 0x1be9ccu: goto label_1be9cc;
        case 0x1be9e4u: goto label_1be9e4;
        case 0x1bea04u: goto label_1bea04;
        case 0x1bea48u: goto label_1bea48;
        default: break;
    }

    ctx->pc = 0x1be740u;

    // 0x1be740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1be744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1be748: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1be748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1be74c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1be74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1be750: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1be750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be754: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1be754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1be758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1be758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be75c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be760: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1be760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be764: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1be764u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1be768: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1be768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1be76c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1be76cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1be770: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1BE770u;
    {
        const bool branch_taken_0x1be770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE770u;
            // 0x1be774: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be770) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BE778u;
    // 0x1be778: 0xc06f9bc  jal         func_1BE6F0
    ctx->pc = 0x1BE778u;
    SET_GPR_U32(ctx, 31, 0x1BE780u);
    ctx->pc = 0x1BE6F0u;
    if (runtime->hasFunction(0x1BE6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE780u; }
        if (ctx->pc != 0x1BE780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CChillAfterHitFv_0x1be6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE780u; }
        if (ctx->pc != 0x1BE780u) { return; }
    }
    ctx->pc = 0x1BE780u;
label_1be780:
    // 0x1be780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be788: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1be788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1be78c: 0xc06f998  jal         func_1BE660
    ctx->pc = 0x1BE78Cu;
    SET_GPR_U32(ctx, 31, 0x1BE794u);
    ctx->pc = 0x1BE790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE78Cu;
            // 0x1be790: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE660u;
    if (runtime->hasFunction(0x1BE660u)) {
        auto targetFn = runtime->lookupFunction(0x1BE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE794u; }
        if (ctx->pc != 0x1BE794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_effect_rate__Fi_0x1be660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE794u; }
        if (ctx->pc != 0x1BE794u) { return; }
    }
    ctx->pc = 0x1BE794u;
label_1be794:
    // 0x1be794: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1be794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1be798: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1be798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1be79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be7a0: 0x0  nop
    ctx->pc = 0x1be7a0u;
    // NOP
    // 0x1be7a4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1be7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be7a8: 0x0  nop
    ctx->pc = 0x1be7a8u;
    // NOP
    // 0x1be7ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE7ACu;
    {
        const bool branch_taken_0x1be7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7ACu;
            // 0x1be7b0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7ac) {
            ctx->pc = 0x1BE7B8u;
            goto label_1be7b8;
        }
    }
    ctx->pc = 0x1BE7B4u;
    // 0x1be7b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1be7b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1be7b8:
    // 0x1be7b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1be7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1be7bc: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1be7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1be7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be7c4: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1be7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be7c8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1be7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be7cc: 0x0  nop
    ctx->pc = 0x1be7ccu;
    // NOP
    // 0x1be7d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE7D0u;
    {
        const bool branch_taken_0x1be7d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7D0u;
            // 0x1be7d4: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d0) {
            ctx->pc = 0x1BE824u;
            goto label_1be824;
        }
    }
    ctx->pc = 0x1BE7D8u;
    // 0x1be7d8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1be7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1be7dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1be7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1be7e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be7e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BE7E4u;
    SET_GPR_U32(ctx, 31, 0x1BE7ECu);
    ctx->pc = 0x1BE7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7E4u;
            // 0x1be7e8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7ECu; }
        if (ctx->pc != 0x1BE7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7ECu; }
        if (ctx->pc != 0x1BE7ECu) { return; }
    }
    ctx->pc = 0x1BE7ECu;
label_1be7ec:
    // 0x1be7ec: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1be7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1be7f0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1be7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1be7f4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1be7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1be7f8: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1be7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be7fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1be7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be800: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1be800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1be804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be808: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1be808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1be80c: 0x3c02408c  lui         $v0, 0x408C
    ctx->pc = 0x1be80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16524 << 16));
    // 0x1be810: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1be810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1be814: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x1be814u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1be818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be81c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BE81Cu;
    {
        const bool branch_taken_0x1be81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE81Cu;
            // 0x1be820: 0x46030082  mul.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be81c) {
            ctx->pc = 0x1BE850u;
            goto label_1be850;
        }
    }
    ctx->pc = 0x1BE824u;
label_1be824:
    // 0x1be824: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1be824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1be828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be82c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1be82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be830: 0x0  nop
    ctx->pc = 0x1be830u;
    // NOP
    // 0x1be834: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1be834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1be838: 0x3c0240b3  lui         $v0, 0x40B3
    ctx->pc = 0x1be838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16563 << 16));
    // 0x1be83c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1be83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1be840: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x1be840u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1be844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be848: 0x0  nop
    ctx->pc = 0x1be848u;
    // NOP
    // 0x1be84c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1be84cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1be850:
    // 0x1be850: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1be850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be854: 0x28410019  slti        $at, $v0, 0x19
    ctx->pc = 0x1be854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1be858: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE858u;
    {
        const bool branch_taken_0x1be858 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE858u;
            // 0x1be85c: 0x3c024158  lui         $v0, 0x4158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be858) {
            ctx->pc = 0x1BE86Cu;
            goto label_1be86c;
        }
    }
    ctx->pc = 0x1BE860u;
    // 0x1be860: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1be860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1be864: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1be864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1be868: 0x3c024158  lui         $v0, 0x4158
    ctx->pc = 0x1be868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
label_1be86c:
    // 0x1be86c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x1be86cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1be870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be874: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1be874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be878: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x1be878u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x1be87c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1be87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1be880: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x1be880u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x1be884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be888: 0x0  nop
    ctx->pc = 0x1be888u;
    // NOP
    // 0x1be88c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be88cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1be890: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x1be890u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1be894:
    // 0x1be894: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1be894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1be898: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1be898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1be89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be8a0: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE8A0u;
    SET_GPR_U32(ctx, 31, 0x1BE8A8u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8A8u; }
        if (ctx->pc != 0x1BE8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8A8u; }
        if (ctx->pc != 0x1BE8A8u) { return; }
    }
    ctx->pc = 0x1BE8A8u;
label_1be8a8:
    // 0x1be8a8: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1be8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1be8ac: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1be8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1be8b0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1be8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1be8b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1be8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1be8b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be8c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be8c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be8c4: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE8C4u;
    SET_GPR_U32(ctx, 31, 0x1BE8CCu);
    ctx->pc = 0x1BE8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8C4u;
            // 0x1be8c8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8CCu; }
        if (ctx->pc != 0x1BE8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8CCu; }
        if (ctx->pc != 0x1BE8CCu) { return; }
    }
    ctx->pc = 0x1BE8CCu;
label_1be8cc:
    // 0x1be8cc: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1be8d0: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1be8d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1be8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1be8d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1be8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1be8dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be8e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be8e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be8e8: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE8E8u;
    SET_GPR_U32(ctx, 31, 0x1BE8F0u);
    ctx->pc = 0x1BE8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8E8u;
            // 0x1be8ec: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8F0u; }
        if (ctx->pc != 0x1BE8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8F0u; }
        if (ctx->pc != 0x1BE8F0u) { return; }
    }
    ctx->pc = 0x1BE8F0u;
label_1be8f0:
    // 0x1be8f0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x1be8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x1be8f4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1be8f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1be8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1be8fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be904: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1be904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1be908: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be90c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BE90Cu;
    SET_GPR_U32(ctx, 31, 0x1BE914u);
    ctx->pc = 0x1BE910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE90Cu;
            // 0x1be910: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE914u; }
        if (ctx->pc != 0x1BE914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE914u; }
        if (ctx->pc != 0x1BE914u) { return; }
    }
    ctx->pc = 0x1BE914u;
label_1be914:
    // 0x1be914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1be918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be91c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BE91Cu;
    SET_GPR_U32(ctx, 31, 0x1BE924u);
    ctx->pc = 0x1BE920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE91Cu;
            // 0x1be920: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE924u; }
        if (ctx->pc != 0x1BE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE924u; }
        if (ctx->pc != 0x1BE924u) { return; }
    }
    ctx->pc = 0x1BE924u;
label_1be924:
    // 0x1be924: 0x3c023e57  lui         $v0, 0x3E57
    ctx->pc = 0x1be924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15959 << 16));
    // 0x1be928: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1be928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1be92c: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x1be92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x1be930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be934: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE934u;
    SET_GPR_U32(ctx, 31, 0x1BE93Cu);
    ctx->pc = 0x1BE938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE934u;
            // 0x1be938: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE93Cu; }
        if (ctx->pc != 0x1BE93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE93Cu; }
        if (ctx->pc != 0x1BE93Cu) { return; }
    }
    ctx->pc = 0x1BE93Cu;
label_1be93c:
    // 0x1be93c: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x1be93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x1be940: 0x3c023f42  lui         $v0, 0x3F42
    ctx->pc = 0x1be940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16194 << 16));
    // 0x1be944: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x1be944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1be948: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1be948u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be94c: 0x34438f5c  ori         $v1, $v0, 0x8F5C
    ctx->pc = 0x1be94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x1be950: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1be950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1be954: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1be954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1be958: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1be958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1be95c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be960: 0x0  nop
    ctx->pc = 0x1be960u;
    // NOP
    // 0x1be964: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1be964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1be968: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1be968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1be96c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1be96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be970: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be974: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE974u;
    SET_GPR_U32(ctx, 31, 0x1BE97Cu);
    ctx->pc = 0x1BE978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE974u;
            // 0x1be978: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE97Cu; }
        if (ctx->pc != 0x1BE97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE97Cu; }
        if (ctx->pc != 0x1BE97Cu) { return; }
    }
    ctx->pc = 0x1BE97Cu;
label_1be97c:
    // 0x1be97c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1be97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1be980: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1be984: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1be984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1be988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be98c: 0x0  nop
    ctx->pc = 0x1be98cu;
    // NOP
    // 0x1be990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1be990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be994: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1be994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1be998: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BE998u;
    SET_GPR_U32(ctx, 31, 0x1BE9A0u);
    ctx->pc = 0x1BE99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE998u;
            // 0x1be99c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A0u; }
        if (ctx->pc != 0x1BE9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A0u; }
        if (ctx->pc != 0x1BE9A0u) { return; }
    }
    ctx->pc = 0x1BE9A0u;
label_1be9a0:
    // 0x1be9a0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1be9a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1be9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be9a8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BE9A8u;
    SET_GPR_U32(ctx, 31, 0x1BE9B0u);
    ctx->pc = 0x1BE9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9A8u;
            // 0x1be9ac: 0xa6020034  sh          $v0, 0x34($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9B0u; }
        if (ctx->pc != 0x1BE9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9B0u; }
        if (ctx->pc != 0x1BE9B0u) { return; }
    }
    ctx->pc = 0x1BE9B0u;
label_1be9b0:
    // 0x1be9b0: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1be9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1be9b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1be9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be9b8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BE9B8u;
    SET_GPR_U32(ctx, 31, 0x1BE9C0u);
    ctx->pc = 0x1BE9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9B8u;
            // 0x1be9bc: 0xa2020033  sb          $v0, 0x33($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9C0u; }
        if (ctx->pc != 0x1BE9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9C0u; }
        if (ctx->pc != 0x1BE9C0u) { return; }
    }
    ctx->pc = 0x1BE9C0u;
label_1be9c0:
    // 0x1be9c0: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x1be9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be9c4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BE9C4u;
    SET_GPR_U32(ctx, 31, 0x1BE9CCu);
    ctx->pc = 0x1BE9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9C4u;
            // 0x1be9c8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9CCu; }
        if (ctx->pc != 0x1BE9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9CCu; }
        if (ctx->pc != 0x1BE9CCu) { return; }
    }
    ctx->pc = 0x1BE9CCu;
label_1be9cc:
    // 0x1be9cc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1be9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1be9d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1be9d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1be9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1be9d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be9dc: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE9DCu;
    SET_GPR_U32(ctx, 31, 0x1BE9E4u);
    ctx->pc = 0x1BE9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9DCu;
            // 0x1be9e0: 0xa2030031  sb          $v1, 0x31($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9E4u; }
        if (ctx->pc != 0x1BE9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9E4u; }
        if (ctx->pc != 0x1BE9E4u) { return; }
    }
    ctx->pc = 0x1BE9E4u;
label_1be9e4:
    // 0x1be9e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1be9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1be9e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1be9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1be9ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be9f0: 0x0  nop
    ctx->pc = 0x1be9f0u;
    // NOP
    // 0x1be9f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be9f8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1be9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1be9fc: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1BE9FCu;
    SET_GPR_U32(ctx, 31, 0x1BEA04u);
    ctx->pc = 0x1BEA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9FCu;
            // 0x1bea00: 0xc66c0008  lwc1        $f12, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA04u; }
        if (ctx->pc != 0x1BEA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA04u; }
        if (ctx->pc != 0x1BEA04u) { return; }
    }
    ctx->pc = 0x1BEA04u;
label_1bea04:
    // 0x1bea04: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bea08: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bea08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bea0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bea10: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bea14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bea14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bea18: 0x0  nop
    ctx->pc = 0x1bea18u;
    // NOP
    // 0x1bea1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bea1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bea20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bea24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bea28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bea28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bea2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea30: 0x0  nop
    ctx->pc = 0x1bea30u;
    // NOP
    // 0x1bea34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bea34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bea38: 0x0  nop
    ctx->pc = 0x1bea38u;
    // NOP
    // 0x1bea3c: 0x0  nop
    ctx->pc = 0x1bea3cu;
    // NOP
    // 0x1bea40: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1BEA40u;
    SET_GPR_U32(ctx, 31, 0x1BEA48u);
    ctx->pc = 0x1BEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA40u;
            // 0x1bea44: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA48u; }
        if (ctx->pc != 0x1BEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA48u; }
        if (ctx->pc != 0x1BEA48u) { return; }
    }
    ctx->pc = 0x1BEA48u;
label_1bea48:
    // 0x1bea48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEA48u;
    {
        const bool branch_taken_0x1bea48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BEA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA48u;
            // 0x1bea4c: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea48) {
            ctx->pc = 0x1BEA5Cu;
            goto label_1bea5c;
        }
    }
    ctx->pc = 0x1BEA50u;
    // 0x1bea50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEA50u;
    {
        const bool branch_taken_0x1bea50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea50) {
            ctx->pc = 0x1BEA5Cu;
            goto label_1bea5c;
        }
    }
    ctx->pc = 0x1BEA58u;
    // 0x1bea58: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1bea5c:
    // 0x1bea5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEA5Cu;
    {
        const bool branch_taken_0x1bea5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea5c) {
            ctx->pc = 0x1BEA70u;
            goto label_1bea70;
        }
    }
    ctx->pc = 0x1BEA64u;
    // 0x1bea64: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1bea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bea68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1bea68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1bea6c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1bea6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1bea70:
    // 0x1bea70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bea74: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x1bea74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bea78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bea78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bea7c: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x1bea7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1bea80: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x1BEA80u;
    {
        const bool branch_taken_0x1bea80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA80u;
            // 0x1bea84: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea80) {
            ctx->pc = 0x1BE894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be894;
        }
    }
    ctx->pc = 0x1BEA88u;
label_1bea88:
    // 0x1bea88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bea88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bea8c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1bea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bea90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bea90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bea94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bea98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bea98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bea9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bea9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beaa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1beaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAA4u;
            // 0x1beaa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEAACu;
}
