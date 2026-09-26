#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CRepairEffectFv
// Address: 0x22d560 - 0x22d658
void Step__13CRepairEffectFv_0x22d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CRepairEffectFv_0x22d560");
#endif

    switch (ctx->pc) {
        case 0x22d5bcu: goto label_22d5bc;
        default: break;
    }

    ctx->pc = 0x22d560u;

    // 0x22d560: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22d560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d564: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x22D564u;
    {
        const bool branch_taken_0x22d564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d564) {
            ctx->pc = 0x22D650u;
            goto label_22d650;
        }
    }
    ctx->pc = 0x22D56Cu;
    // 0x22d56c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x22d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d570: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22d570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22d574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d57c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22d57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d580: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d584: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x22d584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d588: 0x0  nop
    ctx->pc = 0x22d588u;
    // NOP
    // 0x22d58c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D58Cu;
    {
        const bool branch_taken_0x22d58c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D58Cu;
            // 0x22d590: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d58c) {
            ctx->pc = 0x22D598u;
            goto label_22d598;
        }
    }
    ctx->pc = 0x22D594u;
    // 0x22d594: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x22d594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_22d598:
    // 0x22d598: 0x3c033fd9  lui         $v1, 0x3FD9
    ctx->pc = 0x22d598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16345 << 16));
    // 0x22d59c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x22d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x22d5a0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x22d5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22d5a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d5a8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x22d5a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22d5ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22d5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22d5b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d5b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x22D5B4u;
    {
        const bool branch_taken_0x22d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5B4u;
            // 0x22d5b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5b4) {
            ctx->pc = 0x22D628u;
            goto label_22d628;
        }
    }
    ctx->pc = 0x22D5BCu;
label_22d5bc:
    // 0x22d5bc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x22d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22d5c0: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x22d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22d5c4: 0x90a30025  lbu         $v1, 0x25($a1)
    ctx->pc = 0x22d5c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x22d5c8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22D5C8u;
    {
        const bool branch_taken_0x22d5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d5c8) {
            ctx->pc = 0x22D61Cu;
            goto label_22d61c;
        }
    }
    ctx->pc = 0x22D5D0u;
    // 0x22d5d0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x22d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x22d5d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22d5d8: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x22d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x22d5dc: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x22d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22d5e0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x22d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5e4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x22d5e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x22d5e8: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x22d5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22d5ec: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x22d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x22d5f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x22d5f4: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x22d5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x22d5f8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d5fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22d5fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22d600: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d604: 0x0  nop
    ctx->pc = 0x22d604u;
    // NOP
    // 0x22d608: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22D608u;
    {
        const bool branch_taken_0x22d608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D608u;
            // 0x22d60c: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d608) {
            ctx->pc = 0x22D614u;
            goto label_22d614;
        }
    }
    ctx->pc = 0x22D610u;
    // 0x22d610: 0xa0a00025  sb          $zero, 0x25($a1)
    ctx->pc = 0x22d610u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 0));
label_22d614:
    // 0x22d614: 0x0  nop
    ctx->pc = 0x22d614u;
    // NOP
    // 0x22d618: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22d618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22d61c:
    // 0x22d61c: 0x0  nop
    ctx->pc = 0x22d61cu;
    // NOP
    // 0x22d620: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x22d620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x22d624: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22d624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22d628:
    // 0x22d628: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22d62c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22d62cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22d630: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22D630u;
    {
        const bool branch_taken_0x22d630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d630) {
            ctx->pc = 0x22D5BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d5bc;
        }
    }
    ctx->pc = 0x22D638u;
    // 0x22d638: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x22D638u;
    {
        const bool branch_taken_0x22d638 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d638) {
            ctx->pc = 0x22D644u;
            goto label_22d644;
        }
    }
    ctx->pc = 0x22D640u;
    // 0x22d640: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22d640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_22d644:
    // 0x22d644: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22d648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22d648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22d64c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_22d650:
    // 0x22d650: 0x3e00008  jr          $ra
    ctx->pc = 0x22D650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D658u;
}
