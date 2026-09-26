#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetFogParam__FP11mgFOG_PARAM
// Address: 0x143940 - 0x14396c
void mgSetFogParam__FP11mgFOG_PARAM_0x143940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetFogParam__FP11mgFOG_PARAM_0x143940");
#endif

    ctx->pc = 0x143940u;

    // 0x143940: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143944: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x143944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x143948: 0x90450008  lbu         $a1, 0x8($v0)
    ctx->pc = 0x143948u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14394c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x14394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x143950: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x143950u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x143954: 0x9047000a  lbu         $a3, 0xA($v0)
    ctx->pc = 0x143954u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x143958: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x143958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14395c: 0xc44f0014  lwc1        $f15, 0x14($v0)
    ctx->pc = 0x14395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x143960: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143964: 0x804e600  j           func_139800
    ctx->pc = 0x143964u;
    ctx->pc = 0x143968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143964u;
            // 0x143968: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139800u;
    if (runtime->hasFunction(0x139800u)) {
        auto targetFn = runtime->lookupFunction(0x139800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetFogParam__13mgRENDER_INFOFffUcUcUcff_0x139800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14396Cu;
}
