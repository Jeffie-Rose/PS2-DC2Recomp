#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditAngle90__8CEditMapFi
// Address: 0x1b0eb0 - 0x1b0efc
void GetEditAngle90__8CEditMapFi_0x1b0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditAngle90__8CEditMapFi_0x1b0eb0");
#endif

    switch (ctx->pc) {
        case 0x1b0ec0u: goto label_1b0ec0;
        default: break;
    }

    ctx->pc = 0x1b0eb0u;

    // 0x1b0eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0eb8: 0xc06c3fc  jal         func_1B0FF0
    ctx->pc = 0x1B0EB8u;
    SET_GPR_U32(ctx, 31, 0x1B0EC0u);
    ctx->pc = 0x1B0FF0u;
    if (runtime->hasFunction(0x1B0FF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EC0u; }
        if (ctx->pc != 0x1B0EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AngleLimit__8CEditMapFi_0x1b0ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EC0u; }
        if (ctx->pc != 0x1B0EC0u) { return; }
    }
    ctx->pc = 0x1B0EC0u;
label_1b0ec0:
    // 0x1b0ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0ec8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1b0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1b0ecc: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1b0ed0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1b0ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1b0ed4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1b0ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b0ed8: 0x0  nop
    ctx->pc = 0x1b0ed8u;
    // NOP
    // 0x1b0edc: 0x0  nop
    ctx->pc = 0x1b0edcu;
    // NOP
    // 0x1b0ee0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b0ee0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b0ee4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0ee8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b0eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0ef0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b0ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EF4u;
            // 0x1b0ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0EFCu;
}
