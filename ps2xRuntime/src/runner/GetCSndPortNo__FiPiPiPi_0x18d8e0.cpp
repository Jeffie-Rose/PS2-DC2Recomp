#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCSndPortNo__FiPiPiPi
// Address: 0x18d8e0 - 0x18da28
void GetCSndPortNo__FiPiPiPi_0x18d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCSndPortNo__FiPiPiPi_0x18d8e0");
#endif

    ctx->pc = 0x18d8e0u;

    // 0x18d8e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d8e4: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x18d8e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x18d8e8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x18D8E8u;
    {
        const bool branch_taken_0x18d8e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8E8u;
            // 0x18d8ec: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8e8) {
            ctx->pc = 0x18DA14u;
            goto label_18da14;
        }
    }
    ctx->pc = 0x18D8F0u;
    // 0x18d8f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d8f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18d8f8: 0x24844a70  addiu       $a0, $a0, 0x4A70
    ctx->pc = 0x18d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19056));
    // 0x18d8fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d900: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d904: 0x600008  jr          $v1
    ctx->pc = 0x18D904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D90Cu: goto label_18d90c;
            case 0x18D918u: goto label_18d918;
            case 0x18D930u: goto label_18d930;
            case 0x18D940u: goto label_18d940;
            case 0x18D958u: goto label_18d958;
            case 0x18D974u: goto label_18d974;
            case 0x18D98Cu: goto label_18d98c;
            case 0x18D9A4u: goto label_18d9a4;
            case 0x18D9BCu: goto label_18d9bc;
            case 0x18D9D4u: goto label_18d9d4;
            case 0x18D9E4u: goto label_18d9e4;
            case 0x18D9FCu: goto label_18d9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D90Cu;
label_18d90c:
    // 0x18d90c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x18d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x18d910: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x18D910u;
    {
        const bool branch_taken_0x18d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D910u;
            // 0x18d914: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d910) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D918u;
label_18d918:
    // 0x18d918: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x18d918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18d91c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d920: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d924: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d928: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18D928u;
    {
        const bool branch_taken_0x18d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D928u;
            // 0x18d92c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d928) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D930u;
label_18d930:
    // 0x18d930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d934: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18d934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18d938: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18D938u;
    {
        const bool branch_taken_0x18d938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D938u;
            // 0x18d93c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d938) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D940u;
label_18d940:
    // 0x18d940: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18d944: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d948: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d94c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d950: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18D950u;
    {
        const bool branch_taken_0x18d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D950u;
            // 0x18d954: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d950) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D958u;
label_18d958:
    // 0x18d958: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x18d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18d95c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d960: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18d960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18d964: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x18d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d968: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x18d96c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18D96Cu;
    {
        const bool branch_taken_0x18d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D96Cu;
            // 0x18d970: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d96c) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D974u;
label_18d974:
    // 0x18d974: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x18d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d978: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d97c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d980: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d984: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18D984u;
    {
        const bool branch_taken_0x18d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D984u;
            // 0x18d988: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d984) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D98Cu;
label_18d98c:
    // 0x18d98c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18d990: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d994: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d998: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d99c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18D99Cu;
    {
        const bool branch_taken_0x18d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D99Cu;
            // 0x18d9a0: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d99c) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D9A4u;
label_18d9a4:
    // 0x18d9a4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x18d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18d9a8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d9ac: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d9b0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d9b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18D9B4u;
    {
        const bool branch_taken_0x18d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9B4u;
            // 0x18d9b8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9b4) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D9BCu;
label_18d9bc:
    // 0x18d9bc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18d9c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d9c4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d9c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d9cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18D9CCu;
    {
        const bool branch_taken_0x18d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9CCu;
            // 0x18d9d0: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9cc) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D9D4u;
label_18d9d4:
    // 0x18d9d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d9d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18d9dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18D9DCu;
    {
        const bool branch_taken_0x18d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9DCu;
            // 0x18d9e0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9dc) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D9E4u;
label_18d9e4:
    // 0x18d9e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d9e8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d9ec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18d9f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18d9f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18D9F4u;
    {
        const bool branch_taken_0x18d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9F4u;
            // 0x18d9f8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9f4) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18D9FCu;
label_18d9fc:
    // 0x18d9fc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18da00: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x18da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18da04: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x18da04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x18da08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x18da08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18da0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA0Cu;
    {
        const bool branch_taken_0x18da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA0Cu;
            // 0x18da10: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da0c) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18DA14u;
label_18da14:
    // 0x18da14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18DA14u;
    {
        const bool branch_taken_0x18da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA14u;
            // 0x18da18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da14) {
            ctx->pc = 0x18DA20u;
            goto label_18da20;
        }
    }
    ctx->pc = 0x18DA1Cu;
label_18da1c:
    // 0x18da1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18da20:
    // 0x18da20: 0x3e00008  jr          $ra
    ctx->pc = 0x18DA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DA28u;
}
