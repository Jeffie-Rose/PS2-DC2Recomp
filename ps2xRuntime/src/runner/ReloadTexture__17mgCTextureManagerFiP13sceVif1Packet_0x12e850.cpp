#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet
// Address: 0x12e850 - 0x12e968
void ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850");
#endif

    switch (ctx->pc) {
        case 0x12e8c4u: goto label_12e8c4;
        case 0x12e8e0u: goto label_12e8e0;
        case 0x12e90cu: goto label_12e90c;
        case 0x12e93cu: goto label_12e93c;
        default: break;
    }

    ctx->pc = 0x12e850u;

    // 0x12e850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12e854: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12e858: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e85c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e860: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e870: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12e870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e874: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e878: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12e878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e87c: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E894u;
            goto label_12e894;
        }
    }
    ctx->pc = 0x12E884u;
    // 0x12e884: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x12e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x12e888: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x12e888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12e88c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E88Cu;
    {
        const bool branch_taken_0x12e88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e88c) {
            ctx->pc = 0x12E8A4u;
            goto label_12e8a4;
        }
    }
    ctx->pc = 0x12E894u;
label_12e894:
    // 0x12e894: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e898: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x12e898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x12e89c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x12E89Cu;
    {
        const bool branch_taken_0x12e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e89c) {
            ctx->pc = 0x12E940u;
            goto label_12e940;
        }
    }
    ctx->pc = 0x12E8A4u;
label_12e8a4:
    // 0x12e8a4: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x12e8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12e8a8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E8A8u;
    {
        const bool branch_taken_0x12e8a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e8a8) {
            ctx->pc = 0x12E8B8u;
            goto label_12e8b8;
        }
    }
    ctx->pc = 0x12E8B0u;
    // 0x12e8b0: 0x8f918774  lw          $s1, -0x788C($gp)
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x12e8b4: 0x0  nop
    ctx->pc = 0x12e8b4u;
    // NOP
label_12e8b8:
    // 0x12e8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8bc: 0xc041ace  jal         func_106B38
    ctx->pc = 0x12E8BCu;
    SET_GPR_U32(ctx, 31, 0x12E8C4u);
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C4u; }
        if (ctx->pc != 0x12E8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C4u; }
        if (ctx->pc != 0x12E8C4u) { return; }
    }
    ctx->pc = 0x12E8C4u;
label_12e8c4:
    // 0x12e8c4: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x12e8c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e8c8: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12e8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8d8: 0xc04ba5c  jal         func_12E970
    ctx->pc = 0x12E8D8u;
    SET_GPR_U32(ctx, 31, 0x12E8E0u);
    ctx->pc = 0x12E970u;
    if (runtime->hasFunction(0x12E970u)) {
        auto targetFn = runtime->lookupFunction(0x12E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8E0u; }
        if (ctx->pc != 0x12E8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiPUi_0x12e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8E0u; }
        if (ctx->pc != 0x12E8E0u) { return; }
    }
    ctx->pc = 0x12E8E0u;
label_12e8e0:
    // 0x12e8e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e8e4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12e8e8: 0x2951023  subu        $v0, $s4, $s5
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x12e8ec: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x12e8ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    // 0x12e8f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E8F0u;
    {
        const bool branch_taken_0x12e8f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12e8f0) {
            ctx->pc = 0x12E900u;
            goto label_12e900;
        }
    }
    ctx->pc = 0x12E8F8u;
    // 0x12e8f8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x12e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x12e8fc: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_12e900:
    // 0x12e900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e904: 0xc041b7e  jal         func_106DF8
    ctx->pc = 0x12E904u;
    SET_GPR_U32(ctx, 31, 0x12E90Cu);
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E90Cu; }
        if (ctx->pc != 0x12E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E90Cu; }
        if (ctx->pc != 0x12E90Cu) { return; }
    }
    ctx->pc = 0x12E90Cu;
label_12e90c:
    // 0x12e90c: 0x1212000b  beq         $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x12E90Cu;
    {
        const bool branch_taken_0x12e90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x12e90c) {
            ctx->pc = 0x12E93Cu;
            goto label_12e93c;
        }
    }
    ctx->pc = 0x12E914u;
    // 0x12e914: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x12e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12e918: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x12e918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x12e91c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e920: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x12e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12e924: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E924u;
    {
        const bool branch_taken_0x12e924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e924) {
            ctx->pc = 0x12E93Cu;
            goto label_12e93c;
        }
    }
    ctx->pc = 0x12E92Cu;
    // 0x12e92c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12e930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e934: 0xc04ef64  jal         func_13BD90
    ctx->pc = 0x12E934u;
    SET_GPR_U32(ctx, 31, 0x12E93Cu);
    ctx->pc = 0x13BD90u;
    if (runtime->hasFunction(0x13BD90u)) {
        auto targetFn = runtime->lookupFunction(0x13BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E93Cu; }
        if (ctx->pc != 0x12E93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnime__15mgCTextureAnimeFiP13sceVif1Packet_0x13bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E93Cu; }
        if (ctx->pc != 0x12E93Cu) { return; }
    }
    ctx->pc = 0x12E93Cu;
label_12e93c:
    // 0x12e93c: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x12e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_12e940:
    // 0x12e940: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12e940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e944: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e948: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e94c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e95c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x12e95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12e960: 0x3e00008  jr          $ra
    ctx->pc = 0x12E960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E968u;
}
