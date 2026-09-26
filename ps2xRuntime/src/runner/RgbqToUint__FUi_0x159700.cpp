#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RgbqToUint__FUi
// Address: 0x159700 - 0x159748
void RgbqToUint__FUi_0x159700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RgbqToUint__FUi_0x159700");
#endif

    ctx->pc = 0x159700u;

    // 0x159700: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x159700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x159704: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159708: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x159708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15970c: 0x30a6ff00  andi        $a2, $a1, 0xFF00
    ctx->pc = 0x15970cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x159710: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x159710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x159714: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x159714u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x159718: 0xa3a3000a  sb          $v1, 0xA($sp)
    ctx->pc = 0x159718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x15971c: 0xa3a50008  sb          $a1, 0x8($sp)
    ctx->pc = 0x15971cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x159720: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x159720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x159724: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x159724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x159728: 0xa3a60009  sb          $a2, 0x9($sp)
    ctx->pc = 0x159728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x15972c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x15972cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x159730: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x159730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x159734: 0xa3a5000b  sb          $a1, 0xB($sp)
    ctx->pc = 0x159734u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x159738: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x159738u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15973c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x15973cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x159740: 0x3e00008  jr          $ra
    ctx->pc = 0x159740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159740u;
            // 0x159744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159748u;
}
