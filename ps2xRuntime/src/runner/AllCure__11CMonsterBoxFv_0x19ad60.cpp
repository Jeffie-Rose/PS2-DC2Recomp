#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllCure__11CMonsterBoxFv
// Address: 0x19ad60 - 0x19adbc
void AllCure__11CMonsterBoxFv_0x19ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllCure__11CMonsterBoxFv_0x19ad60");
#endif

    switch (ctx->pc) {
        case 0x19ad80u: goto label_19ad80;
        case 0x19ad94u: goto label_19ad94;
        default: break;
    }

    ctx->pc = 0x19ad60u;

    // 0x19ad60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ad64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ad68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ad6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ad70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ad70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ad78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19ad78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19ad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ad80:
    // 0x19ad80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19ad84: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x19ad88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19ad88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ad8c: 0xc065b40  jal         func_196D00
    ctx->pc = 0x19AD8Cu;
    SET_GPR_U32(ctx, 31, 0x19AD94u);
    ctx->pc = 0x19AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD8Cu;
            // 0x19ad90: 0x2464000c  addiu       $a0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD94u; }
        if (ctx->pc != 0x19AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD94u; }
        if (ctx->pc != 0x19AD94u) { return; }
    }
    ctx->pc = 0x19AD94u;
label_19ad94:
    // 0x19ad94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19ad94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19ad98: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x19ad98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x19ad9c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ADA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD9Cu;
            // 0x19ada0: 0x263100bc  addiu       $s1, $s1, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AD80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ad80;
        }
    }
    ctx->pc = 0x19ADA4u;
    // 0x19ada4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ada4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ada8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ada8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19adac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19adacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19adb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19adb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19adb4: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADB4u;
            // 0x19adb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ADBCu;
}
