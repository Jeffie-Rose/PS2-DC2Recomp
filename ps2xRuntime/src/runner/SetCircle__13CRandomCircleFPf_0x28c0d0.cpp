#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCircle__13CRandomCircleFPf
// Address: 0x28c0d0 - 0x28c158
void SetCircle__13CRandomCircleFPf_0x28c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCircle__13CRandomCircleFPf_0x28c0d0");
#endif

    switch (ctx->pc) {
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c108u: goto label_28c108;
        default: break;
    }

    ctx->pc = 0x28c0d0u;

    // 0x28c0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c0d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28c0d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c0dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c0e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c0e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c0f0:
    // 0x28c0f0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x28c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x28c0f4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x28c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x28c0f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28C0F8u;
    {
        const bool branch_taken_0x28c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0F8u;
            // 0x28c0fc: 0x109100  sll         $s2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0f8) {
            ctx->pc = 0x28C12Cu;
            goto label_28c12c;
        }
    }
    ctx->pc = 0x28C100u;
    // 0x28c100: 0xc041c5c  jal         func_107170
    ctx->pc = 0x28C100u;
    SET_GPR_U32(ctx, 31, 0x28C108u);
    ctx->pc = 0x28C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C100u;
            // 0x28c104: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C108u; }
        if (ctx->pc != 0x28C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C108u; }
        if (ctx->pc != 0x28C108u) { return; }
    }
    ctx->pc = 0x28C108u;
label_28c108:
    // 0x28c108: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x28c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x28c10c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28c110: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x28c110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x28c114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c118: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28c118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28c11c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28c11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c120: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28c124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C124u;
    {
        const bool branch_taken_0x28c124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C124u;
            // 0x28c128: 0xac640030  sw          $a0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c124) {
            ctx->pc = 0x28C140u;
            goto label_28c140;
        }
    }
    ctx->pc = 0x28C12Cu;
label_28c12c:
    // 0x28c12c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c130: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x28c130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28c134: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28C134u;
    {
        const bool branch_taken_0x28c134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C134u;
            // 0x28c138: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c134) {
            ctx->pc = 0x28C0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c0f0;
        }
    }
    ctx->pc = 0x28C13Cu;
    // 0x28c13c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c140:
    // 0x28c140: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c150: 0x3e00008  jr          $ra
    ctx->pc = 0x28C150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C150u;
            // 0x28c154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C158u;
}
