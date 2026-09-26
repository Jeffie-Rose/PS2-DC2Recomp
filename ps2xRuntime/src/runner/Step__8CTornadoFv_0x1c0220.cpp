#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CTornadoFv
// Address: 0x1c0220 - 0x1c0358
void Step__8CTornadoFv_0x1c0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CTornadoFv_0x1c0220");
#endif

    switch (ctx->pc) {
        case 0x1c0248u: goto label_1c0248;
        case 0x1c0290u: goto label_1c0290;
        default: break;
    }

    ctx->pc = 0x1c0220u;

    // 0x1c0220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c0224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c0228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c022c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0234: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0238: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C0238u;
    {
        const bool branch_taken_0x1c0238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0238u;
            // 0x1c023c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0238) {
            ctx->pc = 0x1C0340u;
            goto label_1c0340;
        }
    }
    ctx->pc = 0x1C0240u;
    // 0x1c0240: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1c0240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c0244: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0248:
    // 0x1c0248: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x1c0248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c024c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C024Cu;
    {
        const bool branch_taken_0x1c024c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c024c) {
            ctx->pc = 0x1C025Cu;
            goto label_1c025c;
        }
    }
    ctx->pc = 0x1C0254u;
    // 0x1c0254: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C0254u;
    {
        const bool branch_taken_0x1c0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0254u;
            // 0x1c0258: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0254) {
            ctx->pc = 0x1C031Cu;
            goto label_1c031c;
        }
    }
    ctx->pc = 0x1C025Cu;
label_1c025c:
    // 0x1c025c: 0x0  nop
    ctx->pc = 0x1c025cu;
    // NOP
    // 0x1c0260: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1c0260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1c0264: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x1c0264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0268: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c0268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c026c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1c026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0274: 0x0  nop
    ctx->pc = 0x1c0274u;
    // NOP
    // 0x1c0278: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c0278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c027c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c027cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c0280: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0284: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1c0284u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0288: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1C0288u;
    SET_GPR_U32(ctx, 31, 0x1C0290u);
    ctx->pc = 0x1C028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0288u;
            // 0x1c028c: 0xe60c0014  swc1        $f12, 0x14($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0290u; }
        if (ctx->pc != 0x1C0290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0290u; }
        if (ctx->pc != 0x1C0290u) { return; }
    }
    ctx->pc = 0x1C0290u;
label_1c0290:
    // 0x1c0290: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1c0290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c0294: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x1c0294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c0298: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1c0298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c029c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C029Cu;
    {
        const bool branch_taken_0x1c029c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c029c) {
            ctx->pc = 0x1C02ECu;
            goto label_1c02ec;
        }
    }
    ctx->pc = 0x1C02A4u;
    // 0x1c02a4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1c02a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c02a8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c02ac: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1c02acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c02b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c02b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c02b4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c02b8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c02b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c02bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c02bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c02c0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c02c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c02c4: 0x0  nop
    ctx->pc = 0x1c02c4u;
    // NOP
    // 0x1c02c8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c02c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c02cc: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1c02ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c02d0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1c02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c02d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c02d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c02d8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c02d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c02dc: 0x0  nop
    ctx->pc = 0x1c02dcu;
    // NOP
    // 0x1c02e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C02E0u;
    {
        const bool branch_taken_0x1c02e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C02E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C02E0u;
            // 0x1c02e4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02e0) {
            ctx->pc = 0x1C02ECu;
            goto label_1c02ec;
        }
    }
    ctx->pc = 0x1C02E8u;
    // 0x1c02e8: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x1c02e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1c02ec:
    // 0x1c02ec: 0x0  nop
    ctx->pc = 0x1c02ecu;
    // NOP
    // 0x1c02f0: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c02f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c02f8: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x1c02f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c02fc: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x1c02fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c0300: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0300u;
    {
        const bool branch_taken_0x1c0300 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c0300) {
            ctx->pc = 0x1C0314u;
            goto label_1c0314;
        }
    }
    ctx->pc = 0x1C0308u;
    // 0x1c0308: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c030c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c0310: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1c0310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1c0314:
    // 0x1c0314: 0x0  nop
    ctx->pc = 0x1c0314u;
    // NOP
    // 0x1c0318: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1c0318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1c031c:
    // 0x1c031c: 0x0  nop
    ctx->pc = 0x1c031cu;
    // NOP
    // 0x1c0320: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c0320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c0324: 0x2a230012  slti        $v1, $s1, 0x12
    ctx->pc = 0x1c0324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1c0328: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1C0328u;
    {
        const bool branch_taken_0x1c0328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0328) {
            ctx->pc = 0x1C0248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0248;
        }
    }
    ctx->pc = 0x1C0330u;
    // 0x1c0330: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c0334: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0334u;
    {
        const bool branch_taken_0x1c0334 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c0334) {
            ctx->pc = 0x1C0340u;
            goto label_1c0340;
        }
    }
    ctx->pc = 0x1C033Cu;
    // 0x1c033c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1c033cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1c0340:
    // 0x1c0340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c034c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0350: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0350u;
            // 0x1c0354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0358u;
}
