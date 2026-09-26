#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetLineVelo__Fv
// Address: 0x310910 - 0x3109cc
void ResetLineVelo__Fv_0x310910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetLineVelo__Fv_0x310910");
#endif

    switch (ctx->pc) {
        case 0x310964u: goto label_310964;
        case 0x3109a4u: goto label_3109a4;
        default: break;
    }

    ctx->pc = 0x310910u;

    // 0x310910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x310910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x310914: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31091c: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x31091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x310920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x310924: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x310924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31092c: 0x8f86a248  lw          $a2, -0x5DB8($gp)
    ctx->pc = 0x31092cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x310930: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x310930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x310934: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x310934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x310938: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x310938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31093c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x310940: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x310940u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310944: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x310944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x310948: 0x8f90a248  lw          $s0, -0x5DB8($gp)
    ctx->pc = 0x310948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x31094c: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x31094cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x310950: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x310950u;
    {
        const bool branch_taken_0x310950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310950) {
            ctx->pc = 0x3109B4u;
            goto label_3109b4;
        }
    }
    ctx->pc = 0x310958u;
    // 0x310958: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x310958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31095c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x310960: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x310960u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_310964:
    // 0x310964: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x310968: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x310968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31096c: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x31096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x310970: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x310970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x310974: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x310974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x310978: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x310978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x31097c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31097cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x310980: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x310980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310984: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x310984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310988: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x310988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31098c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x31098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x310990: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x310990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310994: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x310994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x310998: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x310998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31099c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x31099Cu;
    SET_GPR_U32(ctx, 31, 0x3109A4u);
    ctx->pc = 0x3109A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31099Cu;
            // 0x3109a0: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109A4u; }
        if (ctx->pc != 0x3109A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3109A4u; }
        if (ctx->pc != 0x3109A4u) { return; }
    }
    ctx->pc = 0x3109A4u;
label_3109a4:
    // 0x3109a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3109a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3109a8: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x3109a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3109ac: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3109ACu;
    {
        const bool branch_taken_0x3109ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3109B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3109ACu;
            // 0x3109b0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109ac) {
            ctx->pc = 0x310964u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_310964;
        }
    }
    ctx->pc = 0x3109B4u;
label_3109b4:
    // 0x3109b4: 0x0  nop
    ctx->pc = 0x3109b4u;
    // NOP
    // 0x3109b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3109b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3109bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3109bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3109c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3109c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3109c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3109C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3109C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3109C4u;
            // 0x3109c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3109CCu;
}
