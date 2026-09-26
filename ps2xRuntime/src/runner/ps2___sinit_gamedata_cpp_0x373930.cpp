#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_gamedata.cpp
// Address: 0x373930 - 0x3739c4
void ps2___sinit_gamedata_cpp_0x373930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_gamedata_cpp_0x373930");
#endif

    switch (ctx->pc) {
        case 0x373958u: goto label_373958;
        case 0x373978u: goto label_373978;
        case 0x373998u: goto label_373998;
        case 0x3739b8u: goto label_3739b8;
        default: break;
    }

    ctx->pc = 0x373930u;

    // 0x373930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373934: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x373934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x373938: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x373938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x37393c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373940: 0x2484dfe0  addiu       $a0, $a0, -0x2020
    ctx->pc = 0x373940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959072));
    // 0x373944: 0x24a54600  addiu       $a1, $a1, 0x4600
    ctx->pc = 0x373944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    // 0x373948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37394c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x37394cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x373950: 0xc040070  jal         func_1001C0
    ctx->pc = 0x373950u;
    SET_GPR_U32(ctx, 31, 0x373958u);
    ctx->pc = 0x373954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373950u;
            // 0x373954: 0x240800a2  addiu       $t0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373958u; }
        if (ctx->pc != 0x373958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373958u; }
        if (ctx->pc != 0x373958u) { return; }
    }
    ctx->pc = 0x373958u;
label_373958:
    // 0x373958: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x373958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x37395c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x37395cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x373960: 0x2484ea00  addiu       $a0, $a0, -0x1600
    ctx->pc = 0x373960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961664));
    // 0x373964: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x373964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
    // 0x373968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37396c: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x37396cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x373970: 0xc040070  jal         func_1001C0
    ctx->pc = 0x373970u;
    SET_GPR_U32(ctx, 31, 0x373978u);
    ctx->pc = 0x373974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373970u;
            // 0x373974: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373978u; }
        if (ctx->pc != 0x373978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373978u; }
        if (ctx->pc != 0x373978u) { return; }
    }
    ctx->pc = 0x373978u;
label_373978:
    // 0x373978: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x373978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x37397c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x37397cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x373980: 0x24840c70  addiu       $a0, $a0, 0xC70
    ctx->pc = 0x373980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3184));
    // 0x373984: 0x24a54620  addiu       $a1, $a1, 0x4620
    ctx->pc = 0x373984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17952));
    // 0x373988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37398c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x37398cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x373990: 0xc040070  jal         func_1001C0
    ctx->pc = 0x373990u;
    SET_GPR_U32(ctx, 31, 0x373998u);
    ctx->pc = 0x373994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373990u;
            // 0x373994: 0x24080026  addiu       $t0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373998u; }
        if (ctx->pc != 0x373998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373998u; }
        if (ctx->pc != 0x373998u) { return; }
    }
    ctx->pc = 0x373998u;
label_373998:
    // 0x373998: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x373998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x37399c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x37399cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x3739a0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x3739a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3739a4: 0x24841990  addiu       $a0, $a0, 0x1990
    ctx->pc = 0x3739a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6544));
    // 0x3739a8: 0x24a546a0  addiu       $a1, $a1, 0x46A0
    ctx->pc = 0x3739a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18080));
    // 0x3739ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3739acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739b0: 0xc040070  jal         func_1001C0
    ctx->pc = 0x3739B0u;
    SET_GPR_U32(ctx, 31, 0x3739B8u);
    ctx->pc = 0x3739B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3739B0u;
            // 0x3739b4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739B8u; }
        if (ctx->pc != 0x3739B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739B8u; }
        if (ctx->pc != 0x3739B8u) { return; }
    }
    ctx->pc = 0x3739B8u;
label_3739b8:
    // 0x3739b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3739b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3739bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3739BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3739C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3739BCu;
            // 0x3739c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3739C4u;
}
