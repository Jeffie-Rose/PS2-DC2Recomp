#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetUkiCamera__FP14CCameraControl
// Address: 0x300050 - 0x300098
void ResetUkiCamera__FP14CCameraControl_0x300050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetUkiCamera__FP14CCameraControl_0x300050");
#endif

    switch (ctx->pc) {
        case 0x300070u: goto label_300070;
        case 0x300084u: goto label_300084;
        default: break;
    }

    ctx->pc = 0x300050u;

    // 0x300050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30005c: 0x8f83a09c  lw          $v1, -0x5F64($gp)
    ctx->pc = 0x30005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942876)));
    // 0x300060: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x300060u;
    {
        const bool branch_taken_0x300060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300060u;
            // 0x300064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300060) {
            ctx->pc = 0x300084u;
            goto label_300084;
        }
    }
    ctx->pc = 0x300068u;
    // 0x300068: 0xc0bb224  jal         func_2EC890
    ctx->pc = 0x300068u;
    SET_GPR_U32(ctx, 31, 0x300070u);
    ctx->pc = 0x30006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300068u;
            // 0x30006c: 0xc78ca0a0  lwc1        $f12, -0x5F60($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300070u; }
        if (ctx->pc != 0x300070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300070u; }
        if (ctx->pc != 0x300070u) { return; }
    }
    ctx->pc = 0x300070u;
label_300070:
    // 0x300070: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300070u;
    {
        const bool branch_taken_0x300070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300070u;
            // 0x300074: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300070) {
            ctx->pc = 0x300084u;
            goto label_300084;
        }
    }
    ctx->pc = 0x300078u;
    // 0x300078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x300078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30007c: 0xc0bb4c8  jal         func_2ED320
    ctx->pc = 0x30007Cu;
    SET_GPR_U32(ctx, 31, 0x300084u);
    ctx->pc = 0x300080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30007Cu;
            // 0x300080: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED320u;
    if (runtime->hasFunction(0x2ED320u)) {
        auto targetFn = runtime->lookupFunction(0x2ED320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300084u; }
        if (ctx->pc != 0x300084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyParam__14CCameraControlFR14CCameraControl_0x2ed320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300084u; }
        if (ctx->pc != 0x300084u) { return; }
    }
    ctx->pc = 0x300084u;
label_300084:
    // 0x300084: 0xaf80a09c  sw          $zero, -0x5F64($gp)
    ctx->pc = 0x300084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942876), GPR_U32(ctx, 0));
    // 0x300088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30008c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30008cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300090: 0x3e00008  jr          $ra
    ctx->pc = 0x300090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300090u;
            // 0x300094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300098u;
}
