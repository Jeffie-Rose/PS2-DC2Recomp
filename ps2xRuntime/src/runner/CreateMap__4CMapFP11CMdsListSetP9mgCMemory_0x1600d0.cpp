#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateMap__4CMapFP11CMdsListSetP9mgCMemory
// Address: 0x1600d0 - 0x16014c
void CreateMap__4CMapFP11CMdsListSetP9mgCMemory_0x1600d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateMap__4CMapFP11CMdsListSetP9mgCMemory_0x1600d0");
#endif

    switch (ctx->pc) {
        case 0x1600f0u: goto label_1600f0;
        case 0x160114u: goto label_160114;
        case 0x160120u: goto label_160120;
        case 0x160138u: goto label_160138;
        default: break;
    }

    ctx->pc = 0x1600d0u;

    // 0x1600d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1600d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1600d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1600d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1600d8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1600dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1600dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1600e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1600e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1600e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1600e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600e8: 0xc05940c  jal         func_165030
    ctx->pc = 0x1600E8u;
    SET_GPR_U32(ctx, 31, 0x1600F0u);
    ctx->pc = 0x1600ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600E8u;
            // 0x1600ec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165030u;
    if (runtime->hasFunction(0x165030u)) {
        auto targetFn = runtime->lookupFunction(0x165030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600F0u; }
        if (ctx->pc != 0x1600F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAddMapFile__8CMapInfoFPi_0x165030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600F0u; }
        if (ctx->pc != 0x1600F0u) { return; }
    }
    ctx->pc = 0x1600F0u;
label_1600f0:
    // 0x1600f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1600F0u;
    {
        const bool branch_taken_0x1600f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1600F0u;
            // 0x1600f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f0) {
            ctx->pc = 0x160118u;
            goto label_160118;
        }
    }
    ctx->pc = 0x1600F8u;
    // 0x1600f8: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1600f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1600fc: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1600FCu;
    {
        const bool branch_taken_0x1600fc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x160100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1600FCu;
            // 0x160100: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600fc) {
            ctx->pc = 0x160114u;
            goto label_160114;
        }
    }
    ctx->pc = 0x160104u;
    // 0x160104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160108: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x160108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16010c: 0xc059120  jal         func_164480
    ctx->pc = 0x16010Cu;
    SET_GPR_U32(ctx, 31, 0x160114u);
    ctx->pc = 0x160110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16010Cu;
            // 0x160110: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164480u;
    if (runtime->hasFunction(0x164480u)) {
        auto targetFn = runtime->lookupFunction(0x164480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160114u; }
        if (ctx->pc != 0x160114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapFile__4CMapFPciP9mgCMemoryi_0x164480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160114u; }
        if (ctx->pc != 0x160114u) { return; }
    }
    ctx->pc = 0x160114u;
label_160114:
    // 0x160114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160118:
    // 0x160118: 0xc059408  jal         func_165020
    ctx->pc = 0x160118u;
    SET_GPR_U32(ctx, 31, 0x160120u);
    ctx->pc = 0x16011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160118u;
            // 0x16011c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165020u;
    if (runtime->hasFunction(0x165020u)) {
        auto targetFn = runtime->lookupFunction(0x165020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160120u; }
        if (ctx->pc != 0x160120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapFile__8CMapInfoFPi_0x165020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160120u; }
        if (ctx->pc != 0x160120u) { return; }
    }
    ctx->pc = 0x160120u;
label_160120:
    // 0x160120: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x160124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x160128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16012c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16012cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160130: 0xc059120  jal         func_164480
    ctx->pc = 0x160130u;
    SET_GPR_U32(ctx, 31, 0x160138u);
    ctx->pc = 0x160134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160130u;
            // 0x160134: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164480u;
    if (runtime->hasFunction(0x164480u)) {
        auto targetFn = runtime->lookupFunction(0x164480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160138u; }
        if (ctx->pc != 0x160138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapFile__4CMapFPciP9mgCMemoryi_0x164480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160138u; }
        if (ctx->pc != 0x160138u) { return; }
    }
    ctx->pc = 0x160138u;
label_160138:
    // 0x160138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x160138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16013c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16013cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160144: 0x3e00008  jr          $ra
    ctx->pc = 0x160144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160144u;
            // 0x160148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16014Cu;
}
