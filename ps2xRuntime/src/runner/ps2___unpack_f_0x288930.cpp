#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __unpack_f
// Address: 0x288930 - 0x2889c0
void ps2___unpack_f_0x288930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x288930");
#endif

    ctx->pc = 0x288930u;

    // 0x288930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288934: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x288934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x288938: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x288938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28893c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x288940: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x288940u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x288944: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x288944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x288948: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x288948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28894c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28894Cu;
    {
        const bool branch_taken_0x28894c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x288950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28894Cu;
            // 0x288950: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28894c) {
            ctx->pc = 0x288960u;
            goto label_288960;
        }
    }
    ctx->pc = 0x288954u;
    // 0x288954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x288954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288958: 0x3e00008  jr          $ra
    ctx->pc = 0x288958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288958u;
            // 0x28895c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288960u;
label_288960:
    // 0x288960: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x288960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288964: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x288964u;
    {
        const bool branch_taken_0x288964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x288968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288964u;
            // 0x288968: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288964) {
            ctx->pc = 0x2889A0u;
            goto label_2889a0;
        }
    }
    ctx->pc = 0x28896Cu;
    // 0x28896c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28896Cu;
    {
        const bool branch_taken_0x28896c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28896Cu;
            // 0x288970: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28896c) {
            ctx->pc = 0x288980u;
            goto label_288980;
        }
    }
    ctx->pc = 0x288974u;
    // 0x288974: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x288974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288978: 0x3e00008  jr          $ra
    ctx->pc = 0x288978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288978u;
            // 0x28897c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288980u;
label_288980:
    // 0x288980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x288984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288984u;
    {
        const bool branch_taken_0x288984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288984u;
            // 0x288988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288984) {
            ctx->pc = 0x288994u;
            goto label_288994;
        }
    }
    ctx->pc = 0x28898Cu;
    // 0x28898c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28898Cu;
    {
        const bool branch_taken_0x28898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28898Cu;
            // 0x288990: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28898c) {
            ctx->pc = 0x288998u;
            goto label_288998;
        }
    }
    ctx->pc = 0x288994u;
label_288994:
    // 0x288994: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x288994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_288998:
    // 0x288998: 0x3e00008  jr          $ra
    ctx->pc = 0x288998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288998u;
            // 0x28899c: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2889A0u;
label_2889a0:
    // 0x2889a0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2889a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2889a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2889a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2889a8: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x2889a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x2889ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2889acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2889b0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2889b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2889b4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2889b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2889b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2889B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2889BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889B8u;
            // 0x2889bc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2889C0u;
}
