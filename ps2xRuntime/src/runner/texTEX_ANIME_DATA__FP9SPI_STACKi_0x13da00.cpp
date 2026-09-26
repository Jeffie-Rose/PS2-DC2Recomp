#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texTEX_ANIME_DATA__FP9SPI_STACKi
// Address: 0x13da00 - 0x13da70
void texTEX_ANIME_DATA__FP9SPI_STACKi_0x13da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texTEX_ANIME_DATA__FP9SPI_STACKi_0x13da00");
#endif

    switch (ctx->pc) {
        case 0x13da28u: goto label_13da28;
        case 0x13da38u: goto label_13da38;
        case 0x13da4cu: goto label_13da4c;
        default: break;
    }

    ctx->pc = 0x13da00u;

    // 0x13da00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13da04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13da08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13da0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13da0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13da14: 0xaf828748  sw          $v0, -0x78B8($gp)
    ctx->pc = 0x13da14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 2));
    // 0x13da18: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x13da18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x13da1c: 0x24840e70  addiu       $a0, $a0, 0xE70
    ctx->pc = 0x13da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    // 0x13da20: 0xc04ef40  jal         func_13BD00
    ctx->pc = 0x13DA20u;
    SET_GPR_U32(ctx, 31, 0x13DA28u);
    ctx->pc = 0x13BD00u;
    if (runtime->hasFunction(0x13BD00u)) {
        auto targetFn = runtime->lookupFunction(0x13BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA28u; }
        if (ctx->pc != 0x13DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTexAnimeDataFv_0x13bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA28u; }
        if (ctx->pc != 0x13DA28u) { return; }
    }
    ctx->pc = 0x13DA28u;
label_13da28:
    // 0x13da28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da2c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13da2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13da30: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DA30u;
    SET_GPR_U32(ctx, 31, 0x13DA38u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA38u; }
        if (ctx->pc != 0x13DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA38u; }
        if (ctx->pc != 0x13DA38u) { return; }
    }
    ctx->pc = 0x13DA38u;
label_13da38:
    // 0x13da38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13da38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13da3c: 0xa0220e70  sb          $v0, 0xE70($at)
    ctx->pc = 0x13da3cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3696), (uint8_t)GPR_U32(ctx, 2));
    // 0x13da40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da44: 0xc05191c  jal         func_146470
    ctx->pc = 0x13DA44u;
    SET_GPR_U32(ctx, 31, 0x13DA4Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA4Cu; }
        if (ctx->pc != 0x13DA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA4Cu; }
        if (ctx->pc != 0x13DA4Cu) { return; }
    }
    ctx->pc = 0x13DA4Cu;
label_13da4c:
    // 0x13da4c: 0x8782874c  lh          $v0, -0x78B4($gp)
    ctx->pc = 0x13da4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936396)));
    // 0x13da50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13da50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13da54: 0xa4220e9a  sh          $v0, 0xE9A($at)
    ctx->pc = 0x13da54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3738), (uint16_t)GPR_U32(ctx, 2));
    // 0x13da58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13da5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13da60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13da64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13da64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13da68: 0x3e00008  jr          $ra
    ctx->pc = 0x13DA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DA70u;
}
