#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsLevelUp__13CGameDataUsedFv
// Address: 0x1985a0 - 0x198614
void IsLevelUp__13CGameDataUsedFv_0x1985a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsLevelUp__13CGameDataUsedFv_0x1985a0");
#endif

    switch (ctx->pc) {
        case 0x1985dcu: goto label_1985dc;
        default: break;
    }

    ctx->pc = 0x1985a0u;

    // 0x1985a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1985a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1985a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1985a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1985ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1985acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1985b0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1985b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1985b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1985B4u;
    {
        const bool branch_taken_0x1985b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1985B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1985B4u;
            // 0x1985b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985b4) {
            ctx->pc = 0x1985C4u;
            goto label_1985c4;
        }
    }
    ctx->pc = 0x1985BCu;
    // 0x1985bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1985BCu;
    {
        const bool branch_taken_0x1985bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1985BCu;
            // 0x1985c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985bc) {
            ctx->pc = 0x198604u;
            goto label_198604;
        }
    }
    ctx->pc = 0x1985C4u;
label_1985c4:
    // 0x1985c4: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1985c8: 0x28410063  slti        $at, $v0, 0x63
    ctx->pc = 0x1985c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1985cc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1985CCu;
    {
        const bool branch_taken_0x1985cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1985cc) {
            ctx->pc = 0x198600u;
            goto label_198600;
        }
    }
    ctx->pc = 0x1985D4u;
    // 0x1985d4: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1985D4u;
    SET_GPR_U32(ctx, 31, 0x1985DCu);
    ctx->pc = 0x1985D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1985D4u;
            // 0x1985d8: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985DCu; }
        if (ctx->pc != 0x1985DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985DCu; }
        if (ctx->pc != 0x1985DCu) { return; }
    }
    ctx->pc = 0x1985DCu;
label_1985dc:
    // 0x1985dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1985dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1985e0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1985e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1985e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1985e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1985e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1985e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1985ec: 0x0  nop
    ctx->pc = 0x1985ecu;
    // NOP
    // 0x1985f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1985F0u;
    {
        const bool branch_taken_0x1985f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1985F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1985F0u;
            // 0x1985f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985f0) {
            ctx->pc = 0x198600u;
            goto label_198600;
        }
    }
    ctx->pc = 0x1985F8u;
    // 0x1985f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1985F8u;
    {
        const bool branch_taken_0x1985f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1985F8u;
            // 0x1985fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985f8) {
            ctx->pc = 0x198608u;
            goto label_198608;
        }
    }
    ctx->pc = 0x198600u;
label_198600:
    // 0x198600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198604:
    // 0x198604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198608:
    // 0x198608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19860c: 0x3e00008  jr          $ra
    ctx->pc = 0x19860Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19860Cu;
            // 0x198610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198614u;
}
