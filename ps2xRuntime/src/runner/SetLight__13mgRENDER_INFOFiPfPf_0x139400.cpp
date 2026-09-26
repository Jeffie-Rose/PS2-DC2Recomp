#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLight__13mgRENDER_INFOFiPfPf
// Address: 0x139400 - 0x1394a8
void SetLight__13mgRENDER_INFOFiPfPf_0x139400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLight__13mgRENDER_INFOFiPfPf_0x139400");
#endif

    switch (ctx->pc) {
        case 0x139448u: goto label_139448;
        default: break;
    }

    ctx->pc = 0x139400u;

    // 0x139400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13940c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139414: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x139414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13941c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13941cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139420: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x139420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139424: 0x640001a  bltz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x139424u;
    {
        const bool branch_taken_0x139424 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x139428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139424u;
            // 0x139428: 0xac8303f0  sw          $v1, 0x3F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139424) {
            ctx->pc = 0x139490u;
            goto label_139490;
        }
    }
    ctx->pc = 0x13942Cu;
    // 0x13942c: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x13942cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x139430: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139430u;
    {
        const bool branch_taken_0x139430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139430) {
            ctx->pc = 0x139440u;
            goto label_139440;
        }
    }
    ctx->pc = 0x139438u;
    // 0x139438: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x139438u;
    {
        const bool branch_taken_0x139438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139438u;
            // 0x13943c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139438) {
            ctx->pc = 0x139494u;
            goto label_139494;
        }
    }
    ctx->pc = 0x139440u;
label_139440:
    // 0x139440: 0xc04e494  jal         func_139250
    ctx->pc = 0x139440u;
    SET_GPR_U32(ctx, 31, 0x139448u);
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139448u; }
        if (ctx->pc != 0x139448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139448u; }
        if (ctx->pc != 0x139448u) { return; }
    }
    ctx->pc = 0x139448u;
label_139448:
    // 0x139448: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x139448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13944c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13944cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x139450: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x139450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139454: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x139454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x139458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13945c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x139460: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x139460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139464: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x139464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x139468: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x139468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13946c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x13946cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x139470: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x139470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x139474: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x139474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139478: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x139478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13947c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x13947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139480: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x139480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x139484: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x139484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139488: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x139488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x13948c: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x13948cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
label_139490:
    // 0x139490: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_139494:
    // 0x139494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13949c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13949cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1394a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1394A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1394A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394A0u;
            // 0x1394a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1394A8u;
}
