#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: atanf
// Address: 0x11e2b8 - 0x11e560
void atanf_0x11e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atanf_0x11e2b8");
#endif

    switch (ctx->pc) {
        case 0x11e398u: goto label_11e398;
        default: break;
    }

    ctx->pc = 0x11e2b8u;

    // 0x11e2b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e2bc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11e2bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e2c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e2c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e2d0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11e2d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11e2d8: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x11e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x11e2dc: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x11e2dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x11e2e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e2e4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e2e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11E2E8u;
    {
        const bool branch_taken_0x11e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2E8u;
            // 0x11e2ec: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2e8) {
            ctx->pc = 0x11E33Cu;
            goto label_11e33c;
        }
    }
    ctx->pc = 0x11E2F0u;
    // 0x11e2f0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e2f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E2F4u;
    {
        const bool branch_taken_0x11e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2f4) {
            ctx->pc = 0x11E308u;
            goto label_11e308;
        }
    }
    ctx->pc = 0x11E2FCu;
    // 0x11e2fc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x11E2FCu;
    {
        const bool branch_taken_0x11e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2FCu;
            // 0x11e300: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2fc) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E304u;
    // 0x11e304: 0x0  nop
    ctx->pc = 0x11e304u;
    // NOP
label_11e308:
    // 0x11e308: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E308u;
    {
        const bool branch_taken_0x11e308 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11E30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E308u;
            // 0x11e30c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e308) {
            ctx->pc = 0x11E324u;
            goto label_11e324;
        }
    }
    ctx->pc = 0x11E310u;
    // 0x11e310: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e314: 0xc4411984  lwc1        $f1, 0x1984($v0)
    ctx->pc = 0x11e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e318: 0xc4601994  lwc1        $f0, 0x1994($v1)
    ctx->pc = 0x11e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e31c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11E31Cu;
    {
        const bool branch_taken_0x11e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E31Cu;
            // 0x11e320: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e31c) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E324u;
label_11e324:
    // 0x11e324: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e328: 0xc4401984  lwc1        $f0, 0x1984($v0)
    ctx->pc = 0x11e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e32c: 0xc4611994  lwc1        $f1, 0x1994($v1)
    ctx->pc = 0x11e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e330: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11e330u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11e334: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x11E334u;
    {
        const bool branch_taken_0x11e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E334u;
            // 0x11e338: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e334) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E33Cu;
label_11e33c:
    // 0x11e33c: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x11e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x11e340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e344: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e348: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E348u;
    {
        const bool branch_taken_0x11e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E348u;
            // 0x11e34c: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e348) {
            ctx->pc = 0x11E390u;
            goto label_11e390;
        }
    }
    ctx->pc = 0x11E350u;
    // 0x11e350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e354: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e358: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x11E358u;
    {
        const bool branch_taken_0x11e358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E358u;
            // 0x11e35c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e358) {
            ctx->pc = 0x11E46Cu;
            goto label_11e46c;
        }
    }
    ctx->pc = 0x11E360u;
    // 0x11e360: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e364: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x11e368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e36c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e374: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e37c: 0x0  nop
    ctx->pc = 0x11e37cu;
    // NOP
    // 0x11e380: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x11E380u;
    {
        const bool branch_taken_0x11e380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e380) {
            ctx->pc = 0x11E384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E380u;
            // 0x11e384: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E470u;
            goto label_11e470;
        }
    }
    ctx->pc = 0x11E388u;
    // 0x11e388: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x11E388u;
    {
        const bool branch_taken_0x11e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E388u;
            // 0x11e38c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e388) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E390u;
label_11e390:
    // 0x11e390: 0xc04799e  jal         func_11E678
    ctx->pc = 0x11E390u;
    SET_GPR_U32(ctx, 31, 0x11E398u);
    ctx->pc = 0x11E678u;
    if (runtime->hasFunction(0x11E678u)) {
        auto targetFn = runtime->lookupFunction(0x11E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E398u; }
        if (ctx->pc != 0x11E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabsf_0x11e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E398u; }
        if (ctx->pc != 0x11E398u) { return; }
    }
    ctx->pc = 0x11E398u;
label_11e398:
    // 0x11e398: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x11e398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x11e39c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e3a0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e3a4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E3A4u;
    {
        const bool branch_taken_0x11e3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3A4u;
            // 0x11e3a8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3a4) {
            ctx->pc = 0x11E414u;
            goto label_11e414;
        }
    }
    ctx->pc = 0x11E3ACu;
    // 0x11e3ac: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x11e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x11e3b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e3b4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e3b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E3B8u;
    {
        const bool branch_taken_0x11e3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3B8u;
            // 0x11e3bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3b8) {
            ctx->pc = 0x11E3F0u;
            goto label_11e3f0;
        }
    }
    ctx->pc = 0x11E3C0u;
    // 0x11e3c0: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x11e3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x11e3c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e3c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e3cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11e3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11e3d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e3d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e3d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11e3d8: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x11e3d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x11e3dc: 0x0  nop
    ctx->pc = 0x11e3dcu;
    // NOP
    // 0x11e3e0: 0x0  nop
    ctx->pc = 0x11e3e0u;
    // NOP
    // 0x11e3e4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x11e3e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11e3e8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11E3E8u;
    {
        const bool branch_taken_0x11e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3E8u;
            // 0x11e3ec: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3e8) {
            ctx->pc = 0x11E470u;
            goto label_11e470;
        }
    }
    ctx->pc = 0x11E3F0u;
label_11e3f0:
    // 0x11e3f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e3f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e3f8: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x11e3f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e3fc: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11e3fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11e400: 0x0  nop
    ctx->pc = 0x11e400u;
    // NOP
    // 0x11e404: 0x0  nop
    ctx->pc = 0x11e404u;
    // NOP
    // 0x11e408: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x11e408u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11e40c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11E40Cu;
    {
        const bool branch_taken_0x11e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E40Cu;
            // 0x11e410: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e40c) {
            ctx->pc = 0x11E46Cu;
            goto label_11e46c;
        }
    }
    ctx->pc = 0x11E414u;
label_11e414:
    // 0x11e414: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x11e418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e41c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e420: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E420u;
    {
        const bool branch_taken_0x11e420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E420u;
            // 0x11e424: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e420) {
            ctx->pc = 0x11E458u;
            goto label_11e458;
        }
    }
    ctx->pc = 0x11E428u;
    // 0x11e428: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x11e428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x11e42c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11e434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e438: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x11e438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11e43c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11e43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11e440: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11e440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11e444: 0x0  nop
    ctx->pc = 0x11e444u;
    // NOP
    // 0x11e448: 0x0  nop
    ctx->pc = 0x11e448u;
    // NOP
    // 0x11e44c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x11e44cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11e450: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11E450u;
    {
        const bool branch_taken_0x11e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E450u;
            // 0x11e454: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e450) {
            ctx->pc = 0x11E46Cu;
            goto label_11e46c;
        }
    }
    ctx->pc = 0x11E458u;
label_11e458:
    // 0x11e458: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11e45c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e460: 0x0  nop
    ctx->pc = 0x11e460u;
    // NOP
    // 0x11e464: 0x0  nop
    ctx->pc = 0x11e464u;
    // NOP
    // 0x11e468: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x11e468u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_11e46c:
    // 0x11e46c: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x11e46cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_11e470:
    // 0x11e470: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e474: 0x24621998  addiu       $v0, $v1, 0x1998
    ctx->pc = 0x11e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6552));
    // 0x11e478: 0xc4691998  lwc1        $f9, 0x1998($v1)
    ctx->pc = 0x11e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x11e47c: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x11e47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e480: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x11e480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x11e484: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x11e484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11e488: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x11e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11e48c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x11e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e490: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x11e490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11e494: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x11e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11e498: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x11e498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11e49c: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x11e49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e4a0: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x11e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11e4a4: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x11e4a4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x11e4a8: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x11e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11e4ac: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11e4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11e4b0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x11e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e4b4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x11e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11e4b8: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x11e4b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11e4bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11e4bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e4c0: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x11e4c0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x11e4c4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11e4c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11e4c8: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x11e4c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11e4cc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x11e4ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11e4d0: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x11e4d0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x11e4d4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x11e4d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11e4d8: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x11e4d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11e4dc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x11e4dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11e4e0: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x11e4e0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x11e4e4: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11e4e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x11e4e8: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x11e4e8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x11e4ec: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x11e4ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11e4f0: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x11e4f0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x11e4f4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E4F4u;
    {
        const bool branch_taken_0x11e4f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11E4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4F4u;
            // 0x11e4f8: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f4) {
            ctx->pc = 0x11E50Cu;
            goto label_11e50c;
        }
    }
    ctx->pc = 0x11E4FCu;
    // 0x11e4fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e500: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11e500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11e504: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11E504u;
    {
        const bool branch_taken_0x11e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E504u;
            // 0x11e508: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e504) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E50Cu;
label_11e50c:
    // 0x11e50c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e510: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11e510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11e514: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e518: 0x24421988  addiu       $v0, $v0, 0x1988
    ctx->pc = 0x11e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6536));
    // 0x11e51c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e520: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e524: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11e524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11e528: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x11e528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e52c: 0x24631978  addiu       $v1, $v1, 0x1978
    ctx->pc = 0x11e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6520));
    // 0x11e530: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11e534: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11e538: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x11e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e53c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11e53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11e540: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E540u;
    {
        const bool branch_taken_0x11e540 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E540u;
            // 0x11e544: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e540) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E548u;
    // 0x11e548: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11e548u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11e54c:
    // 0x11e54c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e550: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e558: 0x3e00008  jr          $ra
    ctx->pc = 0x11E558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E558u;
            // 0x11e55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E560u;
}
