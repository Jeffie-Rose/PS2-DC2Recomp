#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: isnanf
// Address: 0x11e780 - 0x11e7a4
void isnanf_0x11e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isnanf_0x11e780");
#endif

    ctx->pc = 0x11e780u;

    // 0x11e780: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x11e780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e784: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11e784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e788: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x11e788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x11e78c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11e78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x11e790: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x11e790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x11e794: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11e794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11e798: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E79Cu;
            // 0x11e7a0: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E7A4u;
}
