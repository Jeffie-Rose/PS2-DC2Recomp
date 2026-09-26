#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10mgCDrawEnvFi
// Address: 0x1388b0 - 0x138968
void Initialize__10mgCDrawEnvFi_0x1388b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10mgCDrawEnvFi_0x1388b0");
#endif

    ctx->pc = 0x1388b0u;

    // 0x1388b0: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1388b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1388b4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1388b8: 0x948f0000  lhu         $t7, 0x0($a0)
    ctx->pc = 0x1388b8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1388bc: 0x240d8000  addiu       $t5, $zero, -0x8000
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1388c0: 0x3466000b  ori         $a2, $v1, 0xB
    ctx->pc = 0x1388c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x1388c4: 0x640e0003  daddiu      $t6, $zero, 0x3
    ctx->pc = 0x1388c4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x1388c8: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1388c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1388cc: 0x640c0080  daddiu      $t4, $zero, 0x80
    ctx->pc = 0x1388ccu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1388d0: 0x2409ff0f  addiu       $t1, $zero, -0xF1
    ctx->pc = 0x1388d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1388d4: 0x640a0010  daddiu      $t2, $zero, 0x10
    ctx->pc = 0x1388d4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1388d8: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1388dc: 0x6408000e  daddiu      $t0, $zero, 0xE
    ctx->pc = 0x1388dcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1388e0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1388e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1388e4: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1388e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1388e8: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1388e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1388ec: 0xa48d0000  sh          $t5, 0x0($a0)
    ctx->pc = 0x1388ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1388f0: 0x908d0001  lbu         $t5, 0x1($a0)
    ctx->pc = 0x1388f0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1388f4: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1388f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1388f8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1388f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1388fc: 0xa08b0001  sb          $t3, 0x1($a0)
    ctx->pc = 0x1388fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x138900: 0x908b0007  lbu         $t3, 0x7($a0)
    ctx->pc = 0x138900u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x138904: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x138904u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x138908: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x138908u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x13890c: 0xa0890007  sb          $t1, 0x7($a0)
    ctx->pc = 0x13890cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 9));
    // 0x138910: 0x90890008  lbu         $t1, 0x8($a0)
    ctx->pc = 0x138910u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x138914: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x138914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x138918: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x138918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x13891c: 0xa0870008  sb          $a3, 0x8($a0)
    ctx->pc = 0x13891cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x138920: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x138920u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x138924: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x138924u;
    {
        const bool branch_taken_0x138924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x138928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138924u;
            // 0x138928: 0xfc830030  sd          $v1, 0x30($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138924) {
            ctx->pc = 0x138948u;
            goto label_138948;
        }
    }
    ctx->pc = 0x13892Cu;
    // 0x13892c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x138930: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x138934: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x138934u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x138938: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x138938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13893c: 0xfc850028  sd          $a1, 0x28($a0)
    ctx->pc = 0x13893cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
    // 0x138940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138940u;
    {
        const bool branch_taken_0x138940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138940u;
            // 0x138944: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138940) {
            ctx->pc = 0x138960u;
            goto label_138960;
        }
    }
    ctx->pc = 0x138948u;
label_138948:
    // 0x138948: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x13894c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x13894cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x138950: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x138950u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x138954: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x138954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x138958: 0xfc850028  sd          $a1, 0x28($a0)
    ctx->pc = 0x138958u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
    // 0x13895c: 0xfc830038  sd          $v1, 0x38($a0)
    ctx->pc = 0x13895cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
label_138960:
    // 0x138960: 0x3e00008  jr          $ra
    ctx->pc = 0x138960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138968u;
}
