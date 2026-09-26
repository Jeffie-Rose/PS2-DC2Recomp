#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: receiveDataFromIPU
// Address: 0x10c800 - 0x10c870
void receiveDataFromIPU_0x10c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("receiveDataFromIPU_0x10c800");
#endif

    switch (ctx->pc) {
        case 0x10c81cu: goto label_10c81c;
        default: break;
    }

    ctx->pc = 0x10c800u;

    // 0x10c800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c80c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10c80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c810: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c814: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10C814u;
    SET_GPR_U32(ctx, 31, 0x10C81Cu);
    ctx->pc = 0x10C818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C814u;
            // 0x10c818: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C81Cu; }
        if (ctx->pc != 0x10C81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C81Cu; }
        if (ctx->pc != 0x10C81Cu) { return; }
    }
    ctx->pc = 0x10C81Cu;
label_10c81c:
    // 0x10c81c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10c820: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10c820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10c824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10c824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10c828: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c82c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x10c82cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10c830: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10c834: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x10c834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x10c838: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c83c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10c840: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x10c840u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x10c844: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x10c844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x10c848: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c84c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x10c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x10c850: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x10c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x10c854: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10c858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c85c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c864: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10c864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10c868: 0x804630a  j           func_118C28
    ctx->pc = 0x10C868u;
    ctx->pc = 0x10C86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C868u;
            // 0x10c86c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C870u;
}
