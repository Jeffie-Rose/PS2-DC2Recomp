#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetList__8CMdsListFPc
// Address: 0x169240 - 0x16927c
void GetList__8CMdsListFPc_0x169240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetList__8CMdsListFPc_0x169240");
#endif

    switch (ctx->pc) {
        case 0x169254u: goto label_169254;
        case 0x16926cu: goto label_16926c;
        default: break;
    }

    ctx->pc = 0x169240u;

    // 0x169240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16924c: 0xc05a464  jal         func_169190
    ctx->pc = 0x16924Cu;
    SET_GPR_U32(ctx, 31, 0x169254u);
    ctx->pc = 0x169250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16924Cu;
            // 0x169250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169190u;
    if (runtime->hasFunction(0x169190u)) {
        auto targetFn = runtime->lookupFunction(0x169190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169254u; }
        if (ctx->pc != 0x169254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetListID__8CMdsListFPc_0x169190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169254u; }
        if (ctx->pc != 0x169254u) { return; }
    }
    ctx->pc = 0x169254u;
label_169254:
    // 0x169254: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169254u;
    {
        const bool branch_taken_0x169254 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169254u;
            // 0x169258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169254) {
            ctx->pc = 0x169264u;
            goto label_169264;
        }
    }
    ctx->pc = 0x16925Cu;
    // 0x16925c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16925Cu;
    {
        const bool branch_taken_0x16925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16925Cu;
            // 0x169260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16925c) {
            ctx->pc = 0x16926Cu;
            goto label_16926c;
        }
    }
    ctx->pc = 0x169264u;
label_169264:
    // 0x169264: 0xc05a454  jal         func_169150
    ctx->pc = 0x169264u;
    SET_GPR_U32(ctx, 31, 0x16926Cu);
    ctx->pc = 0x169268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169264u;
            // 0x169268: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169150u;
    if (runtime->hasFunction(0x169150u)) {
        auto targetFn = runtime->lookupFunction(0x169150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16926Cu; }
        if (ctx->pc != 0x16926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__8CMdsListFi_0x169150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16926Cu; }
        if (ctx->pc != 0x16926Cu) { return; }
    }
    ctx->pc = 0x16926Cu;
label_16926c:
    // 0x16926c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16926cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169274: 0x3e00008  jr          $ra
    ctx->pc = 0x169274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169274u;
            // 0x169278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16927Cu;
}
