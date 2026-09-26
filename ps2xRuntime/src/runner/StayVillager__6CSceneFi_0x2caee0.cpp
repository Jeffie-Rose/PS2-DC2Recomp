#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StayVillager__6CSceneFi
// Address: 0x2caee0 - 0x2caf1c
void StayVillager__6CSceneFi_0x2caee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StayVillager__6CSceneFi_0x2caee0");
#endif

    switch (ctx->pc) {
        case 0x2caef8u: goto label_2caef8;
        case 0x2caf0cu: goto label_2caf0c;
        default: break;
    }

    ctx->pc = 0x2caee0u;

    // 0x2caee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2caee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2caee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2caee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2caee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2caee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2caeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2caeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caef0: 0xc0b34e0  jal         func_2CD380
    ctx->pc = 0x2CAEF0u;
    SET_GPR_U32(ctx, 31, 0x2CAEF8u);
    ctx->pc = 0x2CAEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEF0u;
            // 0x2caef4: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD380u;
    if (runtime->hasFunction(0x2CD380u)) {
        auto targetFn = runtime->lookupFunction(0x2CD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEF8u; }
        if (ctx->pc != 0x2CAEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchDataIDatCharaID__13CVillagerMngrFi_0x2cd380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEF8u; }
        if (ctx->pc != 0x2CAEF8u) { return; }
    }
    ctx->pc = 0x2CAEF8u;
label_2caef8:
    // 0x2caef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2caef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caefc: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAEFCu;
    {
        const bool branch_taken_0x2caefc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2CAF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEFCu;
            // 0x2caf00: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caefc) {
            ctx->pc = 0x2CAF0Cu;
            goto label_2caf0c;
        }
    }
    ctx->pc = 0x2CAF04u;
    // 0x2caf04: 0xc0b34b4  jal         func_2CD2D0
    ctx->pc = 0x2CAF04u;
    SET_GPR_U32(ctx, 31, 0x2CAF0Cu);
    ctx->pc = 0x2CD2D0u;
    if (runtime->hasFunction(0x2CD2D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CD2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF0Cu; }
        if (ctx->pc != 0x2CAF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stay__13CVillagerMngrFi_0x2cd2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF0Cu; }
        if (ctx->pc != 0x2CAF0Cu) { return; }
    }
    ctx->pc = 0x2CAF0Cu;
label_2caf0c:
    // 0x2caf0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2caf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2caf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf14: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF14u;
            // 0x2caf18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAF1Cu;
}
