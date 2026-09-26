#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginPrim2__11mgCDrawPrimFiUiUii
// Address: 0x134890 - 0x134940
void BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginPrim2__11mgCDrawPrimFiUiUii_0x134890");
#endif

    ctx->pc = 0x134890u;

    // 0x134890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134894: 0x30aa0007  andi        $t2, $a1, 0x7
    ctx->pc = 0x134894u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x134898: 0xac830100  sw          $v1, 0x100($a0)
    ctx->pc = 0x134898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
    // 0x13489c: 0x2409fff8  addiu       $t1, $zero, -0x8
    ctx->pc = 0x13489cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1348a0: 0x908b0050  lbu         $t3, 0x50($a0)
    ctx->pc = 0x1348a0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1348a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1348a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1348a8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1348a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1348ac: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1348acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1348b0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1348b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1348b4: 0xa0890050  sb          $t1, 0x50($a0)
    ctx->pc = 0x1348b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 9));
    // 0x1348b8: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x1348b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
    // 0x1348bc: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1348bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1348c0: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1348c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1348c4: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1348c8: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x1348c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x1348cc: 0x8c8900dc  lw          $t1, 0xDC($a0)
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1348d0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1348d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1348d4: 0x2523000c  addiu       $v1, $t1, 0xC
    ctx->pc = 0x1348d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x1348d8: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1348d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1348dc: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x1348dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x1348e0: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x1348e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1348e4: 0xac8900ec  sw          $t1, 0xEC($a0)
    ctx->pc = 0x1348e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 9));
    // 0x1348e8: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1348e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1348ec: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1348ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1348f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1348f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1348f4: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x1348f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x1348f8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1348f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1348fc: 0xac880104  sw          $t0, 0x104($a0)
    ctx->pc = 0x1348fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 8));
    // 0x134900: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x134900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x134904: 0x8c8800dc  lw          $t0, 0xDC($a0)
    ctx->pc = 0x134904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134908: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x134908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x13490c: 0xac8800e8  sw          $t0, 0xE8($a0)
    ctx->pc = 0x13490cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 8));
    // 0x134910: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x134910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x134914: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x134918: 0x52f00  sll         $a1, $a1, 28
    ctx->pc = 0x134918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x13491c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x13491cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x134920: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x134920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x134924: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x134924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x134928: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x134928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x13492c: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x13492cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
    // 0x134930: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x134930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134934: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134938: 0x3e00008  jr          $ra
    ctx->pc = 0x134938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134938u;
            // 0x13493c: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134940u;
}
